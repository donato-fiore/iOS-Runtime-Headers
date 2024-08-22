// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXPARAMETERTEXT_H
#define FXPARAMETERTEXT_H



#import "FxPinParameter.h"

@interface FxParameterText : FxPinParameter {
    *FxParameterTextPriv _textPriv;
}




-(BOOL)allowsReturns;
-(id)init;
-(void)dealloc;
-(void)setAllowsReturns:(BOOL)arg0 ;


@end


#endif