// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTORCACHE_H
#define VNDETECTORCACHE_H

@class NSMutableSet, NSString;
@protocol VNDetectorProviding, VNDetectorReleasing, VNDetectorCacheDelegate;

#import <Foundation/Foundation.h>


@interface VNDetectorCache : NSObject <VNDetectorProviding, VNDetectorReleasing>

 {
    id<VNDetectorCacheDelegate> *_delegate;
    ? _delegateFlags;
    NSMutableSet *_detectors;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<VNDetectorCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)detectorOfClass:(Class)arg0 configuredWithOptions:(id)arg1 error:(*id)arg2 ;
-(id)detectorOfType:(id)arg0 configuredWithOptions:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)loadedDetectors;
-(void)cacheDetector:(id)arg0 ;
-(void)evictAllDetectors;
-(void)evictDetectorsPassingTest:(id)arg0 ;
-(void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;


@end


#endif