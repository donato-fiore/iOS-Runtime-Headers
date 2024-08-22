// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIPRESENTATIONSPRINGBOARDMAINSCREENVIEWCONTROLLER_H
#define SIRIPRESENTATIONSPRINGBOARDMAINSCREENVIEWCONTROLLER_H

@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate;


#import "SiriPresentationViewController.h"

@interface SiriPresentationSpringBoardMainScreenViewController : SiriPresentationViewController {
    BOOL _shouldDismissForTapOutsideContent;
    BOOL _shouldDismissForTapsOutsideContent;
}


@property (readonly, nonatomic) BOOL shareHomeGesture; // ivar: _shareHomeGesture
@property (readonly, nonatomic) BOOL shouldDismissForSwipesOutsideContent; // ivar: _shouldDismissForSwipesOutsideContent
@property (readonly, nonatomic) BOOL shouldPassTapsThrough; // ivar: _shouldPassTapsThrough
@property (readonly, nonatomic) BOOL shouldPassTouchesThroughToSpringBoard; // ivar: _shouldPassTouchesThroughToSpringBoard
@property (weak, nonatomic) NSObject<SiriPresentationSpringBoardMainScreenViewControllerDelegate> *siriPresentationControllerDelegate;
@property (readonly, nonatomic) BOOL tapsOutsideContentDismissAssistant; // ivar: _tapsOutsideContentDismissAssistant


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldDismissForTapOutsideContent;
-(BOOL)shouldDismissForTapsOutsideContent;
-(BOOL)showAppsBehindSiri;
-(id)init;
-(id)initWithIdentifier:(NSInteger)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 hostedPresentationFrame:(struct CGRect )arg1 ;
-(void)loadView;
-(void)requestPasscodeUnlockWithCompletion:(id)arg0 ;
-(void)requestStatusBarVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)resetGestureBehaviors;
-(void)setDockFrame:(struct CGRect )arg0 ;
-(void)setFluidDismissalState:(id)arg0 ;
-(void)setShouldDismissForTapOutsideContent:(BOOL)arg0 ;
-(void)setShouldDismissForTapsOutsideContent:(BOOL)arg0 ;
-(void)setShowsStatusBar:(BOOL)arg0 ;
-(void)updateHomeGestureSharingForSiriSetup:(BOOL)arg0 ;


@end


#endif