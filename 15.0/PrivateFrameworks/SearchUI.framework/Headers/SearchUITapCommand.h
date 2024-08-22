// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUITAPCOMMAND_H
#define SEARCHUITAPCOMMAND_H

@class UIViewController;


#import "SearchUICommand.h"

@interface SearchUITapCommand : SearchUICommand

@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg0 ;
-(BOOL)prefersModalPresentation;
-(BOOL)presentViewController:(id)arg0 completion:(id)arg1 ;
-(BOOL)presentsViewController;
-(BOOL)shouldDeselectPreviousSelection;
-(id)cardSectionEngagementFeedback;
-(id)resultEngagementFeedback;
-(id)setupViewController;
-(void)openApplication:(id)arg0 completion:(id)arg1 ;
-(void)openUserActivity:(id)arg0 withApplicationBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)performCommandWithCompletion:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)requestAuthIfNecessaryAndPresentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)sendAllFeedback;
-(void)sendCommandFeedback;
-(void)showViewController:(id)arg0 ;


@end


#endif