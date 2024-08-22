// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSESSIONITEMVIEWCONTROLLER_H
#define CSSESSIONITEMVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, SNUISessionHostViewController;
@protocol CSSessionItemContentViewSizeProviding, CSListItemHosting, SBFBacklightSceneHostEnvironmentProviding, CSListItemSceneHostEnvironmentObserving;



@interface CSSessionItemViewController : UIViewController <CSSessionItemContentViewSizeProviding, CSListItemHosting, SBFBacklightSceneHostEnvironmentProviding>



@property (nonatomic) CGFloat containerCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSListItemSceneHostEnvironmentObserving> *sceneHostEnvironmentObserver; // ivar: _sceneHostEnvironmentObserver
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // ivar: _screenOn
@property (readonly, nonatomic) NSArray *sessionHostTouchRestrictedRects;
@property (retain, nonatomic) SNUISessionHostViewController *sessionHostViewController; // ivar: _sessionHostViewController
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)initWithSessionHostViewController:(id)arg0 ;
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