// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMLIMAGEDOWNSCALINGRESULTDATA_H
#define ARMLIMAGEDOWNSCALINGRESULTDATA_H

@class NSString, NSArray;
@protocol ARResultData;

#import <Foundation/Foundation.h>

#import "ARMLImageDownScalingResultData.h"
#import "ARImageData.h"

@interface ARMLImageDownScalingResultData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *downScalingResults; // ivar: _downScalingResults
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ARMLImageDownScalingResultData *latestResizedUltraWideImageData; // ivar: _latestResizedUltraWideImageData
@property (readonly, nonatomic) ARImageData *originalImageData; // ivar: _originalImageData
@property (readonly, nonatomic) NSInteger rotationOfResultTensor; // ivar: _rotationOfResultTensor
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithResultDataArray:(id)arg0 timestamp:(CGFloat)arg1 rotationOfResultTensor:(NSInteger)arg2 originalImageData:(id)arg3 ;


@end


#endif