// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNGROUPIDENTITYINLINEACTIONSVIEWCONTROLLER_H
#define CNGROUPIDENTITYINLINEACTIONSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol CNContactInlineActionsViewControllerDelegate_Internal, CNUIObjectViewControllerDelegate, CNGroupIdentityActionItemDelegate, CNGroupIdentityInlineActionsViewControllerDelegate;


#import "CNGroupIdentityInlineActionsViewConfiguration.h"
#import "CNGroupIdentity.h"
#import "CNContactInlineActionsViewController.h"

@interface CNGroupIdentityInlineActionsViewController : UIViewController <CNContactInlineActionsViewControllerDelegate_Internal, CNUIObjectViewControllerDelegate, CNGroupIdentityActionItemDelegate>



@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNGroupIdentityInlineActionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNGroupIdentity *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController; // ivar: _inlineActionsViewController
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(BOOL)contactInlineActionsViewController:(id)arg0 canPerformGroupActionOfType:(id)arg1 ;
-(BOOL)contactInlineActionsViewController:(id)arg0 overrideEnabledStateForActionOfType:(id)arg1 ;
-(BOOL)contactInlineActionsViewController:(id)arg0 shouldOverrideEnabledStateForActionOfType:(id)arg1 ;
-(BOOL)contactInlineActionsViewController:(id)arg0 shouldPresentDisambiguationUIForActionOfType:(id)arg1 ;
-(BOOL)shouldOverrideEnabledStateForActionItem:(id)arg0 ;
-(CGFloat)actionsViewHeightThatFits:(struct CGSize )arg0 ;
-(id)actionsContainerView;
-(id)actionsView;
-(id)contactInlineActionsViewController:(id)arg0 overrideImageForActionOfType:(id)arg1 ;
-(id)contactInlineActionsViewController:(id)arg0 overrideTitleForActionOfType:(id)arg1 ;
-(id)hostingViewControllerForController:(id)arg0 ;
-(id)initWithGroupIdentity:(id)arg0 actionsViewConfiguration:(id)arg1 ;
-(id)viewForActionAtIndex:(NSUInteger)arg0 ;
-(void)contactInlineActionsViewController:(id)arg0 didPerformActionOfType:(id)arg1 fromDisambiguation:(BOOL)arg2 ;
-(void)contactInlineActionsViewController:(id)arg0 didSelectActionOfType:(id)arg1 ;
-(void)contactInlineActionsViewController:(id)arg0 willPresentDisambiguationUIForActionType:(id)arg1 ;
-(void)groupIdentityActionItem:(id)arg0 didUpdateActionBlock:(id)arg1 ;
-(void)groupIdentityActionItem:(id)arg0 didUpdateOverrideEnabledState:(BOOL)arg1 ;
-(void)setupActionsView;
-(void)updateActionsViewForUpdatedActionItem:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif