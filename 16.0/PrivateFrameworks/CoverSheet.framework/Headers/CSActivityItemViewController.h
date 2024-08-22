// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSACTIVITYITEMVIEWCONTROLLER_H
#define CSACTIVITYITEMVIEWCONTROLLER_H

@class UIViewController, NSArray, ACUISActivityHostViewController, NSString;
@protocol CSActivityItemContentViewSizeProviding, CSListItemHosting, SBFBacklightSceneHostEnvironmentProviding, CSListItemSceneHostEnvironmentObserving;



@interface CSActivityItemViewController : UIViewController <CSActivityItemContentViewSizeProviding, CSListItemHosting, SBFBacklightSceneHostEnvironmentProviding>



@property (readonly, nonatomic) NSArray *activityHostTouchRestrictedRects;
@property (retain, nonatomic) ACUISActivityHostViewController *activityHostViewController; // ivar: _activityHostViewController
@property (nonatomic) CGFloat containerCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSListItemSceneHostEnvironmentObserving> *sceneHostEnvironmentObserver; // ivar: _sceneHostEnvironmentObserver
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // ivar: _screenOn
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)initWithActivityHostViewController:(id)arg0 ;
-(id)sceneHostEnvironmentEntriesForBacklightSession;
-(struct CGSize )contentSizeForContentView:(id)arg0 ;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)_updatePresentationMode;
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif