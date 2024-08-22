// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKADDPASSESCARDSTACKVIEWCONTROLLER_H
#define PKADDPASSESCARDSTACKVIEWCONTROLLER_H

@class UIViewController, NSArray, PKPassesXPCContainer, PKGroupsController, NSString;
@protocol PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKPaymentSetupViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, UIScrollViewDelegate, PKAddPassesCardStackViewControllerDelegate;


#import "PKPassGroupStackView.h"

@interface PKAddPassesCardStackViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKPaymentSetupViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, UIScrollViewDelegate>

 {
    NSArray *_passes;
    PKPassesXPCContainer *_passesContainer;
    NSArray *_passDataArray;
    PKGroupsController *_groupsController;
    PKPassGroupStackView *_passGroupStackView;
    NSString *_personalizatonToken;
    NSUInteger _presentationSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddPassesCardStackViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasDiscoveryContent;
-(BOOL)isInField;
-(BOOL)supportsExternalPresentation;
-(NSUInteger)indexOfGroup:(id)arg0 ;
-(NSUInteger)indexOfSeparationGroup;
-(NSUInteger)numberOfGroups;
-(NSUInteger)suppressedContent;
-(id)groupAtIndex:(NSUInteger)arg0 ;
-(id)initWithPasses:(id)arg0 orPassesContainer:(id)arg1 fromPresentationSource:(NSUInteger)arg2 ;
-(void)_addButtonPressed:(id)arg0 ;
-(void)_addPassesWithCompletion:(id)arg0 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_configureAddOrNextButtonItemAsPending:(BOOL)arg0 ;
-(void)_configureNavigationItemTitle;
-(void)_nextButtonPressedForAutomaticPresentation:(id)arg0 ;
-(void)_nextButtonPressedForPersonalization:(id)arg0 ;
-(void)dealloc;
-(void)evaluateBrightness;
-(void)groupStackView:(id)arg0 deleteConfirmedForPass:(id)arg1 ;
-(void)groupStackView:(id)arg0 didTransitionToState:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg0 ;
-(void)groupStackViewDidEndReordering:(id)arg0 ;
-(void)groupsController:(id)arg0 didInsertGroup:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)groupsController:(id)arg0 didMoveGroup:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3 ;
-(void)groupsController:(id)arg0 didRemoveGroup:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)passPersonalizationViewController:(id)arg0 didFinishPersonalizingPass:(id)arg1 ;
-(void)reloadGroupsForGroupStackView:(id)arg0 ;
-(void)resetBrightness;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif