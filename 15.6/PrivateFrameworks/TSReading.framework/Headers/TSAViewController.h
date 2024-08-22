// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAVIEWCONTROLLER_H
#define TSAVIEWCONTROLLER_H

@class UIViewController, UIColor, NSArray, NSString;



@interface TSAViewController : UIViewController

@property (readonly, nonatomic) UIColor *applicationBackgroundColor;
@property (readonly, nonatomic) UIColor *applicationToolbarBackgroundColor;
@property (readonly, nonatomic) UIColor *applicationToolbarTintColor;
@property (readonly, nonatomic) UIColor *applicationToolbarTitleColor;
@property (readonly, nonatomic) id *coachingTipsButton;
@property (nonatomic) BOOL coachingTipsWereShowingBeforeRotation; // ivar: _coachingTipsWereShowingBeforeRotation
@property (nonatomic) BOOL firstLaunchCoachingTipsWereShowingBeforeRotation; // ivar: _firstLaunchCoachingTipsWereShowingBeforeRotation
@property (readonly, nonatomic) BOOL isLayoutBelowApplicationToolbar;
@property (readonly, nonatomic) BOOL isViewVisible;
@property (retain, nonatomic) NSArray *leftApplicationToolbarItems; // ivar: _leftApplicationToolbarItems
@property (readonly, nonatomic) CGFloat leftToolbarItemsInset; // ivar: _leftToolbarItemsInset
@property (nonatomic) CGFloat leftToolbarItemsMaximumWidth; // ivar: _leftToolbarItemsMaximumWidth
@property (readonly, nonatomic, getter=isPresentingModalViewController) BOOL presentingModalViewController;
@property (retain, nonatomic) NSArray *rightApplicationToolbarItems; // ivar: _rightApplicationToolbarItems
@property (readonly, nonatomic) CGFloat rightToolbarItemsInset; // ivar: _rightToolbarItemsInset
@property (nonatomic) CGFloat rightToolbarItemsMaximumWidth; // ivar: _rightToolbarItemsMaximumWidth
@property (nonatomic) BOOL shouldShowHelpOnAppear; // ivar: _shouldShowHelpOnAppear
@property (nonatomic) BOOL showFirstLaunchCoachingTipAfterViewAppears; // ivar: _showFirstLaunchCoachingTipAfterViewAppears
@property (readonly, nonatomic) NSString *toolbarButtonModalGearImageName;
@property (nonatomic) BOOL viewDidAppear; // ivar: _viewDidAppear


-(BOOL)isFirstLaunchCoachingTipShowing;
-(BOOL)modalToolbarSupportsUndo;
-(id)firstLaunchCoachingTipShownUserDefaultKey;
-(id)imageViewFromSnapshotOfView:(id)arg0 ;
-(id)toolbarButtonForCoachingTipsWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)toolbarButtonForModalDone;
-(id)toolbarButtonForModalDoneWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)toolbarButtonForUndoWithIsModal:(BOOL)arg0 ;
-(id)toolbarButtonItemForCoachingTipsWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)toolbarButtonWithImageName:(id)arg0 disabledImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)toolbarButtonWithImageName:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(id)toolbarButtonWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 isModal:(BOOL)arg3 ;
-(void)dealloc;
-(void)dismissCoachingTips;
-(void)dismissHelpWithCompletion:(id)arg0 ;
-(void)hideFirstLaunchCoachingTipIfNecessary;
-(void)p_startListeningForVoiceOverNotifications;
-(void)p_stopListeningForVoiceOverNotifications;
-(void)p_voiceOverStatusDidChange;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)showFirstLaunchCoachingTipIfNecessary;
-(void)showHelpWithTopicId:(id)arg0 completion:(id)arg1 ;
-(void)toggleCoachingTips:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willHideCoachingTips;
-(void)willSetupApplicationToolbar;
-(void)willShowCoachingTips;


@end


#endif