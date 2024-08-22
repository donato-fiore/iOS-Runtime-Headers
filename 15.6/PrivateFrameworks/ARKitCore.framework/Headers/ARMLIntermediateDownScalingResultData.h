// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMLINTERMEDIATEDOWNSCALINGRESULTDATA_H
#define ARMLINTERMEDIATEDOWNSCALINGRESULTDATA_H

@class NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>

#import "ARImageData.h"

@interface ARMLIntermediateDownScalingResultData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ARImageData *originalImageData; // ivar: _originalImageData
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 originalImageData:(id)arg2 ;
-(void)dealloc;


@end


#endif