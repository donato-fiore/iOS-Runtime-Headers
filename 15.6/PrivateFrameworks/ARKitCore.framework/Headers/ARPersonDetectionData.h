// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPERSONDETECTIONDATA_H
#define ARPERSONDETECTIONDATA_H

@class NSString, NSArray;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARPersonDetectionData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *detectedObjects; // ivar: _detectedObjects
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)mergeOverlappingDetectionsWithThreshold:(float)arg0 ;
-(id)transformToCVPixelBuffer:(struct __CVBuffer *)arg0 depthBuffer:(struct __CVBuffer *)arg1 ;


@end


#endif