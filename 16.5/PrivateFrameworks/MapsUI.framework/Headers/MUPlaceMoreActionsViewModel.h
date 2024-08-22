// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEMOREACTIONSVIEWMODEL_H
#define MUPLACEMOREACTIONSVIEWMODEL_H

@class NSArray, UIMenuElement;
@protocol MUHeaderButtonMenuActionProvider;


#import "MUActionRowItemViewModel.h"

@interface MUPlaceMoreActionsViewModel : MUActionRowItemViewModel {
    id<MUHeaderButtonMenuActionProvider> *_menuProvider;
    NSArray *_externalActionMenuHelpers;
    UIMenuElement *_menuElement;
    NSArray *_promotedSystemActionTypes;
    NSArray *_excludedSystemActionTypes;
}


@property (readonly, nonatomic) NSArray *externalActionMenuRevealButtons;


-(BOOL)isEnabled;
-(id)_allExternalActionMenuRevealButtons;
-(id)accessibilityIdentifier;
-(id)analyticsButtonValues;
-(id)buildMenuWithPresentationOptions:(id)arg0 ;
-(id)initWithGroupedExternalActions:(id)arg0 promotedSystemActionTypes:(id)arg1 excludedSystemActionTypes:(id)arg2 menuActionProvider:(id)arg3 amsResultProvider:(id)arg4 iconCache:(id)arg5 externalActionHandler:(id)arg6 analyticsHandler:(id)arg7 ;
-(id)symbolName;
-(id)titleText;


@end


#endif