// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSTRIDECALIBRATIONDATA_H
#define CMSTRIDECALIBRATIONDATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMStrideCalibrationData : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat begin; // ivar: _begin
@property (nonatomic) CGFloat end; // ivar: _end
@property (nonatomic) CGFloat kValue; // ivar: _kValue
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBegin:(CGFloat)arg0 end:(CGFloat)arg1 state:(NSInteger)arg2 kValue:(CGFloat)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif