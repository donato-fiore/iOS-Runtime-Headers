// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUISPOTLIGHTREMOTEVIEWCONTROLLER_H
#define SPUISPOTLIGHTREMOTEVIEWCONTROLLER_H

@class UIViewController, NSString, UIView<UIScenePresentation>, _UILegibilitySettings, FBScene, NSMutableArray, FBApplicationUpdateScenesTransaction;
@protocol SBUIActiveOrientationObserver, FBProcessWatchdogProviding, SPUISpotlightSceneManagerDelegate, FBApplicationUpdateScenesTransactionObserver, FBSceneObserver, UIScenePresenter;



@interface SPUISpotlightRemoteViewController : UIViewController <SBUIActiveOrientationObserver, FBProcessWatchdogProviding, SPUISpotlightSceneManagerDelegate, FBApplicationUpdateScenesTransactionObserver, FBSceneObserver>



@property BOOL crashedWhileForeground; // ivar: _crashedWhileForeground
@property (nonatomic) NSInteger currentOrientation; // ivar: _currentOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIView<UIScenePresentation> *hostView; // ivar: _hostView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain) NSObject<UIScenePresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic) BOOL prewarmSceneInTheBackground; // ivar: _prewarmSceneInTheBackground
@property (retain) FBScene *scene; // ivar: _scene
@property (retain) NSMutableArray *sceneEventsQueue; // ivar: _sceneEventsQueue
@property (retain) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly) Class superclass;
@property (retain) FBApplicationUpdateScenesTransaction *transaction; // ivar: _transaction


-(BOOL)_canShowWhileLocked;
-(id)initWithSceneIdentifier:(id)arg0 ;
-(id)watchdogPolicyForProcess:(id)arg0 eventContext:(id)arg1 ;
-(id)watchdogTerminationRequestForProcess:(id)arg0 error:(id)arg1 ;
-(struct CGRect )sceneSettingsFrameFromRect:(struct CGRect )arg0 ;
-(struct CGSize )initialFittingSize;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)addOrExecuteEventAsNeeded:(id)arg0 ;
-(void)clearEventQueue;
-(void)createSceneIfNeededWithPriority:(NSInteger)arg0 ;
-(void)createSceneWithPriority:(NSInteger)arg0 ;
-(void)didInvalidateSceneWhenForeground;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)setForeground:(BOOL)arg0 ;
-(void)transaction:(id)arg0 didCreateScene:(id)arg1 ;
-(void)updateSafeAreasOnSettings:(id)arg0 ;
-(void)updateTraitCollection;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willLaunchSpotlightInBackground;


@end


#endif