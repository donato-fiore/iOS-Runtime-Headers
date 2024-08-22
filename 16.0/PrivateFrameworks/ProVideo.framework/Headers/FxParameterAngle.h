// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXPARAMETERANGLE_H
#define FXPARAMETERANGLE_H



#import "FxPinParameter.h"

@interface FxParameterAngle : FxPinParameter {
    *FxParameterAnglePriv _anglePriv;
}




-(BOOL)isClockwise;
-(CGFloat)startValue;
-(CGFloat)stepValue;
-(id)init;
-(void)dealloc;
-(void)setIsClockwise:(BOOL)arg0 ;
-(void)setStartValue:(CGFloat)arg0 ;
-(void)setStepValue:(CGFloat)arg0 ;


@end


#endif