// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTQUICKACTIONSCONTROLLER_H
#define CNCONTACTQUICKACTIONSCONTROLLER_H

@class NSDictionary, NSArray, CNContact, NSString, UIViewController;
@protocol CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNCancelable, CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNUINavigationListStyle, CNSchedulerProvider, CNUIUserActionContext, CNUIUserActionListDataSource;

#import <Foundation/Foundation.h>

#import "CNContactActionsController.h"
#import "CNContactQuickActionsDisambiguationMenuPresentation.h"

@interface CNContactQuickActionsController : NSObject <CNUIUserActionListConsumer, CNContactActionsControllerDelegate>



@property (retain, nonatomic) NSObject<CNCancelable> *actionDisoveryToken; // ivar: _actionDisoveryToken
@property (retain, nonatomic) NSDictionary *actionListModelsByActionType; // ivar: _actionListModelsByActionType
@property (readonly, nonatomic) NSArray *actionTypes; // ivar: _actionTypes
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, weak, nonatomic) NSObject<CNContactQuickActionViewContainer> *contactQuickActionViewContainer; // ivar: _contactQuickActionViewContainer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactQuickActionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactActionsController *disambiguationMenuController; // ivar: _disambiguationMenuController
@property (readonly, nonatomic) CNContactQuickActionsDisambiguationMenuPresentation *disambiguationMenuPresentation; // ivar: _disambiguationMenuPresentation
@property (retain, nonatomic) UIViewController *disambiguationMenuViewController; // ivar: _disambiguationMenuViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CNUINavigationListStyle> *navigationListStyle; // ivar: _navigationListStyle
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNUIUserActionContext> *userActionContext; // ivar: _userActionContext
@property (readonly, nonatomic) NSObject<CNUIUserActionListDataSource> *userActionListDataSource; // ivar: _userActionListDataSource


+(id)descriptorForRequiredKeys;
+(id)log;
-(id)allModelsObservable;
-(id)defaultTitleForActionType:(id)arg0 ;
-(id)init;
-(id)initWithActionTypes:(id)arg0 contactQuickActionViewContainer:(id)arg1 ;
-(id)initWithActionTypes:(id)arg0 contactQuickActionViewContainer:(id)arg1 disambiguationMenuPresentation:(id)arg2 ;
-(id)initWithActionTypes:(id)arg0 contactQuickActionViewContainer:(id)arg1 disambiguationMenuPresentation:(id)arg2 userActionListDataSource:(id)arg3 schedulerProvider:(id)arg4 userActionContext:(id)arg5 ;
-(void)cleanUpAfterLatestActionDiscovery;
-(void)contactActionsController:(id)arg0 didSelectAction:(id)arg1 ;
-(void)dealloc;
-(void)disambiguationViewControllerDismissedExternally:(id)arg0 ;
-(void)discoverActions;
-(void)executeLongPressBehaviorForActionType:(id)arg0 ;
-(void)executeTapBehaviorForActionType:(id)arg0 ;
-(void)performAction:(id)arg0 ;
-(void)processDiscoveredModels:(id)arg0 ;
-(void)reportStoredModel:(id)arg0 forActionType:(id)arg1 toQuickActionContainer:(id)arg2 ;
-(void)reportStoredModelsToQuickActionContainer;
-(void)setupDisambiguationMenuForActionType:(id)arg0 ;
-(void)showDisambiguationMenuForActionType:(id)arg0 ;
-(void)storeDiscoveredModels:(id)arg0 ;
-(void)tearDownDisambiguationMenu;


@end


#endif