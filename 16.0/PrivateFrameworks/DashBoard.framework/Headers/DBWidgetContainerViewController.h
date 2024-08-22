// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBWIDGETCONTAINERVIEWCONTROLLER_H
#define DBWIDGETCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, NSMutableSet;
@protocol DBSmartWidgetAnimating, BSInvalidatable, DBWidgetSizeManaging, DBEnvironment;


#import "DBSmartWidgetEngine.h"
#import "DBInCallWidgetViewController.h"
#import "DBMapsWidgetViewController.h"
#import "DBNowPlayingWidgetViewController.h"
#import "DBWidgetStackViewController.h"
#import "DBSmartWidgetViewController.h"

@interface DBWidgetContainerViewController : UIViewController <DBSmartWidgetAnimating, BSInvalidatable, DBWidgetSizeManaging>



@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DBSmartWidgetEngine *engine; // ivar: _engine
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (nonatomic) BOOL hasActiveNavigation; // ivar: _hasActiveNavigation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DBInCallWidgetViewController *inCallWidgetController; // ivar: _inCallWidgetController
@property (nonatomic, getter=isInCallWidgetHidden) BOOL inCallWidgetHidden; // ivar: _inCallWidgetHidden
@property (nonatomic) BOOL initialConstraintsSetup; // ivar: _initialConstraintsSetup
@property (retain, nonatomic) NSArray *landscapePortraitConstraints; // ivar: _landscapePortraitConstraints
@property (nonatomic) NSUInteger layoutType; // ivar: _layoutType
@property (readonly, nonatomic) DBMapsWidgetViewController *mapsWidgetController; // ivar: _mapsWidgetController
@property (readonly, nonatomic) DBNowPlayingWidgetViewController *nowPlayingWidgetController; // ivar: _nowPlayingWidgetController
@property (retain, nonatomic) DBWidgetStackViewController *primaryWidgetStackViewController; // ivar: _primaryWidgetStackViewController
@property (retain, nonatomic) NSArray *sceneWidgetControllers; // ivar: _sceneWidgetControllers
@property (nonatomic) BOOL sceneWidgetsActive; // ivar: _sceneWidgetsActive
@property (nonatomic) BOOL sceneWidgetsEnabled; // ivar: _sceneWidgetsEnabled
@property (nonatomic) BOOL sceneWidgetsForeground; // ivar: _sceneWidgetsForeground
@property (retain, nonatomic) DBWidgetStackViewController *secondaryWidgetStackViewController; // ivar: _secondaryWidgetStackViewController
@property (retain, nonatomic) NSMutableSet *smartWidgetChangeVisibilityDisabledRequesters; // ivar: _smartWidgetChangeVisibilityDisabledRequesters
@property (readonly, nonatomic) DBSmartWidgetViewController *smartWidgetController; // ivar: _smartWidgetController
@property (nonatomic, getter=isSmartWidgetHidden) BOOL smartWidgetHidden; // ivar: _smartWidgetHidden
@property (retain, nonatomic) NSArray *squareConstraints; // ivar: _squareConstraints
@property (readonly) Class superclass;


-(BOOL)_canChangeSmartWidgetVisible;
-(BOOL)_smartWidgetShouldBeHidden;
-(id)initWithEnvironment:(id)arg0 animationManager:(id)arg1 ;
-(id)linearFocusItems;
-(void)_callStatusChanged:(id)arg0 ;
-(void)_reloadConstraints;
-(void)_setupConstraints;
-(void)_smartWidgetHiddenDefaultChanged;
-(void)_updateMapWidgetSizes;
-(void)_updateSmartWidgetVisibleIfNecessary;
// -(void)_updateStackViewsWithUpdates:(id)arg0 completion:(unk)arg1  ;
// -(void)animateSmartWidget:(id)arg0 completion:(unk)arg1  ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateConstraints;
-(void)requestSizeChange;
-(void)setSmartWidgetCanChangeVisibilityDisabled:(BOOL)arg0 forRequester:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif