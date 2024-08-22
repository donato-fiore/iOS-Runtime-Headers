// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSTARKACTIONSCONTROLLER_H
#define CNSTARKACTIONSCONTROLLER_H

@class UIViewController, CNContact, NSString, NSArray, UITraitCollection;
@protocol CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNStarkActionViewDelegate, UINavigationControllerDelegate;


#import "CNStarkActionView.h"
#import "CNContactQuickActionsController.h"

@interface CNStarkActionsController : UIViewController <CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNStarkActionViewDelegate, UINavigationControllerDelegate>



@property (readonly, nonatomic) CNStarkActionView *callActionView; // ivar: _callActionView
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNStarkActionView *directionsActionView; // ivar: _directionsActionView
@property (weak, nonatomic) UIViewController *disambiguationViewController; // ivar: _disambiguationViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (readonly, nonatomic) CNStarkActionView *messageActionView; // ivar: _messageActionView
@property (weak, nonatomic) NSObject<UINavigationControllerDelegate> *phoneNavigationControllerDelegate; // ivar: _phoneNavigationControllerDelegate
@property (readonly, nonatomic) CNContactQuickActionsController *quickActionsController; // ivar: _quickActionsController
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) CGFloat willTransitionToBoundsWidth; // ivar: _willTransitionToBoundsWidth


+(id)descriptorForRequiredKeys;
-(id)initWithContact:(id)arg0 ;
-(id)viewForActionType:(id)arg0 ;
-(void)actionViewTapped:(id)arg0 ;
-(void)addForwardingDelegate;
-(void)contactQuickActionsController:(id)arg0 dismissDisambiguationViewController:(id)arg1 forActionType:(id)arg2 ;
-(void)contactQuickActionsController:(id)arg0 presentDisambiguationViewController:(id)arg1 forActionType:(id)arg2 ;
-(void)forwardDelegateForNavigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeForwardingDelegate;
-(void)setupLayoutConstraints;
-(void)setupViews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateViews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif