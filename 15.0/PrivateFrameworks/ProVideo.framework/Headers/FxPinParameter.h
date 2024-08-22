// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FXPINPARAMETER_H
#define FXPINPARAMETER_H



#import "FxPin.h"

@interface FxPinParameter : FxPin {
    id *defaultValue;
    Class customUI;
    *FxPinParameterPriv _paramPriv;
}




-(Class)customPinControl;
-(id)defaultValue;
-(id)init;
-(void)dealloc;
-(void)setCustomPinControl:(Class)arg0 ;
-(void)setDefaultValue:(id)arg0 ;


@end


#endif