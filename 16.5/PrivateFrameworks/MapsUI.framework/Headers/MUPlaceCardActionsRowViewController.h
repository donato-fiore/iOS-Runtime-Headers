// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACECARDACTIONSROWVIEWCONTROLLER_H
#define MUPLACECARDACTIONSROWVIEWCONTROLLER_H

@class UIViewController, NSArray, MKPlaceActionManager;
@protocol MUPlaceCardActionsRowViewMenuProvider;


#import "MUPlaceCardActionsRowView.h"

@interface MUPlaceCardActionsRowViewController : UIViewController

@property (readonly, nonatomic) NSArray *actionButtons;
@property (weak, nonatomic) MKPlaceActionManager *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) MUPlaceCardActionsRowView *actionsRowView; // ivar: _actionsRowView
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (weak, nonatomic) NSObject<MUPlaceCardActionsRowViewMenuProvider> *menuProvider; // ivar: _menuProvider


-(BOOL)_canShowWhileLocked;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)updateActionsRowView;
-(void)viewDidLoad;


@end


#endif