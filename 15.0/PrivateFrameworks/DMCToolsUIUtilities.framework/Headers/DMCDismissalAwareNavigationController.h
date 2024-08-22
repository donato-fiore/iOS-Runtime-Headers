// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCDISMISSALAWARENAVIGATIONCONTROLLER_H
#define DMCDISMISSALAWARENAVIGATIONCONTROLLER_H

@class UINavigationController;



@interface DMCDismissalAwareNavigationController : UINavigationController

@property (nonatomic) BOOL isPresentingAlert; // ivar: _isPresentingAlert
@property (copy, nonatomic) id *transitionCompletionBlock; // ivar: _transitionCompletionBlock


-(id)rootViewController;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentAlert:(id)arg0 animated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif