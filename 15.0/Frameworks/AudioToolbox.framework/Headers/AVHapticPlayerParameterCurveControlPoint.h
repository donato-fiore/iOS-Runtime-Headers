// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVHAPTICPLAYERPARAMETERCURVECONTROLPOINT_H
#define AVHAPTICPLAYERPARAMETERCURVECONTROLPOINT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVHapticPlayerParameterCurveControlPoint : NSObject <NSSecureCoding>



@property CGFloat time; // ivar: _time
@property float value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTime:(CGFloat)arg0 value:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif