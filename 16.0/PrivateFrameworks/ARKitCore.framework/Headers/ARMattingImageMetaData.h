// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARMATTINGIMAGEMETADATA_H
#define ARMATTINGIMAGEMETADATA_H

@class NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARMattingImageMetaData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *__CVBuffer downSampledImageBuffer; // ivar: _downSampledImageBuffer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CVBuffer mattingScaleImageBuffer; // ivar: _mattingScaleImageBuffer
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithTimestamp:(CGFloat)arg0 downSampledImageBuffer:(struct __CVBuffer *)arg1 mattingScaleImageBuffer:(struct __CVBuffer *)arg2 ;
-(void)dealloc;


@end


#endif