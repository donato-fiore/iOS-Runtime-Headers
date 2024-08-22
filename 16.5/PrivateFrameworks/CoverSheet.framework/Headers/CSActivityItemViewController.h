// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSACTIVITYITEMVIEWCONTROLLER_H
#define CSACTIVITYITEMVIEWCONTROLLER_H

@class UIViewController, NSArray, ACUISActivityHostViewController, NSString;
@protocol CSActivityItemContentViewSizeProviding, NCNotificationListSupplementaryViewPresentable, CSListItemHosting, SBFBacklightSceneHostEnvironmentProviding, BSInvalidatable, CSListItemSceneHostEnvironmentObserving;



@interface CSActivityItemViewController : UIViewController <CSActivityItemContentViewSizeProviding, NCNotificationListSupplementaryViewPresentable, CSListItemHosting, SBFBacklightSceneHostEnvironmentProviding>



@property (readonly, nonatomic) NSArray *activityHostTouchRestrictedRects;
@property (retain, nonatomic) ACUISActivityHostViewController *activityHostViewController; // ivar: _activityHostViewController
@property (nonatomic) CGFloat containerCornerRadius;
@property (nonatomic, getter=isContentVisible) BOOL contentVisible; // ivar: _contentVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isListAppeared) BOOL listAppeared; // ivar: _listAppeared
@property (retain, nonatomic) NSObject<BSInvalidatable> *restrictsTouchesAssertion; // ivar: _restrictsTouchesAssertion
@property (weak, nonatomic) NSObject<CSListItemSceneHostEnvironmentObserving> *sceneHostEnvironmentObserver; // ivar: _sceneHostEnvironmentObserver
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // ivar: _screenOn
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)initWithActivityHostViewController:(id)arg0 ;
-(id)sceneHostEnvironmentEntriesForBacklightSession;
-(struct CGSize )contentSizeForContentView:(id)arg0 ;
-(void)_invalidateRestrictsTouchesAssertion;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)_updatePresentationModeWithReason:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)notificationListSupplementaryViewPresentableContentWillBecomeVisible:(BOOL)arg0 ;
-(void)restrictsTouchesOnHostedScene:(BOOL)arg0 ;
-(void)setPresentationMode:(NSUInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif