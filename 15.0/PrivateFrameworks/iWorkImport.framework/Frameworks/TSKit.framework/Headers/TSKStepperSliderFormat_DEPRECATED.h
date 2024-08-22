// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKSTEPPERSLIDERFORMAT_DEPRECATED_H
#define TSKSTEPPERSLIDERFORMAT_DEPRECATED_H

@protocol NSCopying;


#import "TSKFormat.h"

@interface TSKStepperSliderFormat_DEPRECATED : TSKFormat <NSCopying>



@property (readonly, nonatomic) unsigned int displayFormatType; // ivar: _displayFormatType
@property (readonly, nonatomic) CGFloat increment; // ivar: _increment
@property (readonly, nonatomic) CGFloat maximum; // ivar: _maximum
@property (readonly, nonatomic) CGFloat minimum; // ivar: _minimum


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asStepperSliderFormat;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)initWithFormatType:(unsigned int)arg0 minimum:(CGFloat)arg1 maximum:(CGFloat)arg2 increment:(CGFloat)arg3 displayFormatType:(unsigned int)arg4 ;


@end


#endif