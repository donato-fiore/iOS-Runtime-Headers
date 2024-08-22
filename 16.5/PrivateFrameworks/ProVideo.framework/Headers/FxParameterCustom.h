// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXPARAMETERCUSTOM_H
#define FXPARAMETERCUSTOM_H

@protocol FxCustomParameterDefinition;


#import "FxPinParameter.h"

@interface FxParameterCustom : FxPinParameter <FxCustomParameterDefinition>

 {
    *FxParameterCustomPriv _customPriv;
}




-(id)dataFromValue:(id)arg0 ;
-(id)init;
-(id)valueFromData:(id)arg0 ;
-(void)dealloc;


@end


#endif