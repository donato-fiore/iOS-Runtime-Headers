// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXPARAMETERGROUP_H
#define FXPARAMETERGROUP_H



#import "FxPinParameter.h"

@interface FxParameterGroup : FxPinParameter {
    *FxParameterGroupPriv _groupPriv;
}




-(id)init;
-(id)subPins;
-(void)dealloc;
-(void)setSubPins:(id)arg0 ;


@end


#endif