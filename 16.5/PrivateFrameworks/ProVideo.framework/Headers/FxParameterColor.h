// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXPARAMETERCOLOR_H
#define FXPARAMETERCOLOR_H



#import "FxPinParameter.h"

@interface FxParameterColor : FxPinParameter {
    *FxParameterColorPriv _colorPriv;
}




-(BOOL)hasAlpha;
-(id)init;
-(void)dealloc;
-(void)setHasAlpha:(BOOL)arg0 ;


@end


#endif