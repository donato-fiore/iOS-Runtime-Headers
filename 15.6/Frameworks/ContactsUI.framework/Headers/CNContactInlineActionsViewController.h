// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTINLINEACTIONSVIEWCONTROLLER_H
#define CNCONTACTINLINEACTIONSVIEWCONTROLLER_H

@class UIViewController, NSArray, CNUIUserActionListDataSource, CNContact, NSString, NSDictionary, UIView;
@protocol CNActionsViewProtocol, CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNUIObjectViewController, CNCustomPresentation, CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNSchedulerProvider;


#import "CNContactActionsController.h"
#import "CNActionsView.h"
#import "CNUIContactsEnvironment.h"

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNUIObjectViewController>



@property (copy, nonatomic) NSArray *actionItems; // ivar: _actionItems
@property (retain, nonatomic) CNUIUserActionListDataSource *actionListDataSource; // ivar: _actionListDataSource
@property (nonatomic) CGFloat actionTypesInterspace; // ivar: _actionTypesInterspace
@property (retain, nonatomic) CNContactActionsController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) NSObject<CNCustomPresentation> *actionsControllerPresentation; // ivar: _actionsControllerPresentation
@property (weak, nonatomic) CNActionsView *actionsView; // ivar: _actionsView
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *defaultActionPerType; // ivar: _defaultActionPerType
@property (weak, nonatomic) NSObject<CNContactInlineActionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysTitles; // ivar: _displaysTitles
@property (nonatomic) BOOL displaysUnavailableActionTypes; // ivar: _displaysUnavailableActionTypes
@property (retain, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CNUIObjectViewControllerDelegate> *objectViewControllerDelegate; // ivar: objectViewControllerDelegate
@property (retain, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedActionTypes; // ivar: _supportedActionTypes
@property (readonly, nonatomic) CGFloat throttleDelay;
@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) NSInteger viewStyle; // ivar: _viewStyle


+(id)descriptorForRequiredKeys;
-(BOOL)_canShowWhileLocked;
-(BOOL)actionsView:(id)arg0 shouldPresentDisambiguationUIForAction:(id)arg1 ;
-(BOOL)isGroupActionsView;
-(BOOL)shouldShowDisambiguationForAction:(id)arg0 ;
-(id)actionImageTextStyleForViewStyle:(NSInteger)arg0 ;
-(id)allModelsObservable;
-(id)existingActionItemForType:(id)arg0 ;
-(id)initWithActionListDataSource:(id)arg0 environment:(id)arg1 ;
-(id)initWithContactActionsContext:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)makeActionItemForType:(id)arg0 ;
-(void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)arg0 ;
-(void)contactActionsController:(id)arg0 didSelectAction:(id)arg1 ;
-(void)contactActionsController:(id)arg0 didUpdateWithMenu:(id)arg1 ;
-(void)dealloc;
-(void)didSelectAction:(id)arg0 withSourceView:(id)arg1 longPress:(BOOL)arg2 ;
-(void)discoverAvailableActionTypes;
-(void)displayActionForType:(id)arg0 withDefaultAction:(id)arg1 enabled:(BOOL)arg2 ;
-(void)displayAdditionalActionItems:(id)arg0 ;
-(void)displayAllSupportedTypesDisabled;
-(void)generateActionsControllerForActionType:(id)arg0 ;
-(void)loadCachedActions;
-(void)loadView;
-(void)notifyDelegateOfDisambiguationForActionType:(id)arg0 ;
-(void)notifyDelegateOfPerformedActionType:(id)arg0 fromDisambiguation:(BOOL)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performGroupActionForType:(id)arg0 ;
-(void)processModels:(id)arg0 ;
-(void)removeActionForType:(id)arg0 ;
-(void)removeVisibleActionItems:(id)arg0 ;
-(void)reset;
-(void)setupGroupActions;
-(void)setupSingleContactActions;
-(void)updateActionItem:(id)arg0 withDefaultAction:(id)arg1 ;
-(void)updateDesiredTitleFontSizeIfNeeded;
-(void)updateVisibleActionItems:(id)arg0 ;


@end


#endif