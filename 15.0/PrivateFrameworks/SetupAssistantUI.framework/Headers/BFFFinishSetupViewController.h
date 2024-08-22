// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BFFFINISHSETUPVIEWCONTROLLER_H
#define BFFFINISHSETUPVIEWCONTROLLER_H

@class UIViewController, FLFollowUpAction, NSMutableArray, NSMutableSet;
@protocol BFFFinishSetupFlowHosting;


#import "BFFNavigationController.h"

@interface BFFFinishSetupViewController : UIViewController <BFFFinishSetupFlowHosting>

 {
    BOOL _setupInProgress;
    BFFNavigationController *_navigationController;
    FLFollowUpAction *_followUpAction;
    NSMutableArray *_flowIdentifiers;
    NSMutableSet *_completedFlowIdentifiers;
    NSMutableSet *_skippedFlowIdentifiers;
    UIViewController *_newRootViewController;
    id *_completion;
    id *_overrideFlowControllerGenerator;
}




+(id)_keyValueDictionaryForURL:(id)arg0 ;
+(id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)arg0 ;
-(BOOL)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)arg0 ;
-(BOOL)didCompleteFlowInFinishSetup:(id)arg0 ;
-(BOOL)didSkipFlowInFinishSetup:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_flowControllerForFlowIdentifier:(id)arg0 ;
-(id)_flowControllerForNextFlowIdentifier;
-(void)_complete;
-(void)_didSatisfyInitializationForFlowController:(id)arg0 ;
-(void)_didSatisfyPreconditionsForFlowController:(id)arg0 ;
-(void)_ensureNavigationControllerWithViewController:(id)arg0 pushCompletion:(id)arg1 ;
-(void)_flowDidFinishForIdentifiers:(id)arg0 result:(NSUInteger)arg1 ;
-(void)_performExtendedInitializationForFlowController:(id)arg0 ;
-(void)_pushViewControllerOntoNavigationController:(id)arg0 completion:(id)arg1 ;
-(void)_startNextFlowIdentifier;
-(void)loadView;
-(void)processURL:(id)arg0 completion:(id)arg1 ;
-(void)setOverrideFlowControllerGenerator:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif