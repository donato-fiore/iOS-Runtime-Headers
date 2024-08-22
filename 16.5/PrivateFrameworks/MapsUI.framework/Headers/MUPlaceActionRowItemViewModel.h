// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEACTIONROWITEMVIEWMODEL_H
#define MUPLACEACTIONROWITEMVIEWMODEL_H

@class MKPlaceCardActionItem;
@protocol MUPlaceCardActionsRowViewMenuProvider;


#import "MUActionRowItemViewModel.h"

@interface MUPlaceActionRowItemViewModel : MUActionRowItemViewModel {
    NSUInteger _style;
}


@property (readonly, nonatomic) MKPlaceCardActionItem *actionRowItem; // ivar: _actionRowItem
@property (weak, nonatomic) NSObject<MUPlaceCardActionsRowViewMenuProvider> *menuProvider; // ivar: _menuProvider


-(BOOL)isEnabled;
-(BOOL)isSelected;
-(id)accessibilityIdentifier;
-(id)analyticsButtonValue;
-(id)buildMenuWithPresentationOptions:(id)arg0 ;
-(id)initWithActionRowItem:(id)arg0 menuProvider:(id)arg1 style:(NSUInteger)arg2 ;
-(id)preferredBackgroundColor;
-(id)preferredTintColor;
-(id)symbolName;
-(id)titleText;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif