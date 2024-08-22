// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXPARAMETERLISTSELECTION_H
#define FXPARAMETERLISTSELECTION_H



#import "FxPinParameter.h"

@interface FxParameterListSelection : FxPinParameter {
    *FxParameterListSelectionPriv _listSelectionPriv;
}




-(id)displayNameForValue:(id)arg0 ;
-(id)init;
-(id)listItems;
-(int)preferredListVariant;
-(void)dealloc;
-(void)setListItems:(id)arg0 ;
-(void)setPreferredListVariant:(int)arg0 ;


@end


#endif