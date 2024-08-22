// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEEXTERNALACTIONVIEWMODEL_H
#define MUPLACEEXTERNALACTIONVIEWMODEL_H

@class GEOPlaceExternalAction;


#import "MUActionRowItemViewModel.h"
#import "MUPlaceExternalActionMenuHelper.h"

@interface MUPlaceExternalActionViewModel : MUActionRowItemViewModel {
    MUPlaceExternalActionMenuHelper *_menuHelper;
}


@property (readonly, nonatomic) GEOPlaceExternalAction *externalAction; // ivar: _externalAction


-(BOOL)isEnabled;
-(id)accessibilityIdentifier;
-(id)analyticsButtonValues;
-(id)buildMenuWithPresentationOptions:(id)arg0 ;
-(id)initWithExternalAction:(id)arg0 amsResultProvider:(id)arg1 iconCache:(id)arg2 actionHandler:(id)arg3 analyticsHandler:(id)arg4 ;
-(id)symbolName;
-(id)titleText;
-(void)performSingleVendorSelectionAction;


@end


#endif