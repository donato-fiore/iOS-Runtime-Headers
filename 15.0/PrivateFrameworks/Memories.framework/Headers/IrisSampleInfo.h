// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IRISSAMPLEINFO_H
#define IRISSAMPLEINFO_H

@class AVAsset, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IrisSampleInfo : NSObject

@property (retain, nonatomic) AVAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) ? dominantSampleDuration; // ivar: _dominantSampleDuration
@property (retain, nonatomic) NSArray *gapTimeRanges; // ivar: _gapTimeRanges
@property (retain, nonatomic) NSArray *timeRanges; // ivar: _timeRanges


+(id)infoForAsset:(id)arg0 ;
+(void)clearCache;
+(void)initialize;
-(id)initWithAsset:(id)arg0 ;
-(void)loadInfoWithCompletionHandler:(id)arg0 ;
-(void)loadInfoWithTrackOutput:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif