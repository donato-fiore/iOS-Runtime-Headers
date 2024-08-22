// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBAPPDOCKVIEWCONTROLLER_H
#define DBAPPDOCKVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UIColor, UIStackView;
@protocol DBNavigationStateObserving, DBNowPlayingDelegate, SiriPresentationIntentUsageDelegate, DBAppDockViewControllerDelegate, DBIconProviding;


#import "DBAppHistory.h"
#import "DBAppDockButton.h"
#import "DBEnvironmentConfiguration.h"
#import "DBNowPlayingObserver.h"

@interface DBAppDockViewController : UIViewController <DBNavigationStateObserving, DBNowPlayingDelegate, SiriPresentationIntentUsageDelegate>



@property (copy, nonatomic) NSString *activeBundleIdentifier; // ivar: _activeBundleIdentifier
@property (weak, nonatomic) NSObject<DBAppDockViewControllerDelegate> *appDockViewControllerDelegate; // ivar: _appDockViewControllerDelegate
@property (readonly, nonatomic) DBAppHistory *appHistory; // ivar: _appHistory
@property (retain, nonatomic) DBAppDockButton *audioAppButton; // ivar: _audioAppButton
@property (retain, nonatomic) NSArray *audioAppButtonSizeConstraints; // ivar: _audioAppButtonSizeConstraints
@property (retain, nonatomic) UIColor *buttonFocusHighlightColor; // ivar: _buttonFocusHighlightColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDockEnabled) BOOL dockEnabled; // ivar: _dockEnabled
@property (retain, nonatomic) UIStackView *dockItemStackView; // ivar: _dockItemStackView
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<DBIconProviding> *iconProvider; // ivar: _iconProvider
@property (retain, nonatomic) DBAppDockButton *navigationAppButton; // ivar: _navigationAppButton
@property (retain, nonatomic) NSArray *navigationAppButtonSizeConstraints; // ivar: _navigationAppButtonSizeConstraints
@property (retain, nonatomic) DBNowPlayingObserver *nowPlayingObserver; // ivar: _nowPlayingObserver
@property (retain, nonatomic) NSArray *orderedAppItems; // ivar: _orderedAppItems
@property (retain, nonatomic) DBAppDockButton *otherAppButton; // ivar: _otherAppButton
@property (retain, nonatomic) NSArray *otherAppButtonSizeConstraints; // ivar: _otherAppButtonSizeConstraints
@property (readonly) Class superclass;


-(id)_buttonSizeConstraintsForButton:(id)arg0 ;
-(id)_generateOrderedAppItems;
-(id)initWithAppHistory:(id)arg0 iconProvider:(id)arg1 environmentConfiguration:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_dockButtonPressed:(id)arg0 ;
-(void)_refreshAppDock;
-(void)_updateAudioButtonSizeConstraints;
-(void)_updateNavigationBundleIdentifier:(BOOL)arg0 ;
-(void)_updateNavigationButtonSizeConstraints;
-(void)_updateNowPlayingBundleIdentifier:(BOOL)arg0 ;
-(void)_updateOtherButtonSizeConstraints;
-(void)activeIntentWithBundleId:(id)arg0 ;
-(void)dealloc;
-(void)navigationStateProvider:(id)arg0 navigatingIdentifiersDidChange:(id)arg1 ;
-(void)nowPlayingObserver:(id)arg0 didChangeNowPlayingApplication:(id)arg1 ;
-(void)nowPlayingObserver:(id)arg0 didUpdatePlaybackState:(BOOL)arg1 inApplication:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif