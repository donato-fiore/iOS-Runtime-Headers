// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHWIDGETINTRODUCTIONFEATUREINTRODUCTIONITEM_H
#define SBHWIDGETINTRODUCTIONFEATUREINTRODUCTIONITEM_H

@class NSString, NSMutableArray, NSMutableDictionary, SBHomeScreenDefaults, NSDictionary;
@protocol SBHFeatureIntroductionProviding;


#import "SBHFeatureIntroductionItem.h"
#import "SBHIconManager.h"
#import "SBModalWidgetIntroductionViewController.h"
#import "SBHTrialClientManager.h"

@interface SBHWidgetIntroductionFeatureIntroductionItem : SBHFeatureIntroductionItem <SBHFeatureIntroductionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *defaultWidgetsBumpedIconUsageRanking; // ivar: _defaultWidgetsBumpedIconUsageRanking
@property (retain, nonatomic) NSMutableDictionary *defaultWidgetsIconsRestoringRecord; // ivar: _defaultWidgetsIconsRestoringRecord
@property (retain, nonatomic) NSMutableArray *defaultWidgetsIconsRestoringRecordOriginalIndex; // ivar: _defaultWidgetsIconsRestoringRecordOriginalIndex
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIntroductionIdentifier;
@property (nonatomic) BOOL forceShowWidgetIntroduction; // ivar: _forceShowWidgetIntroduction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHomeScreenDefaults *homeScreenDefaults; // ivar: _homeScreenDefaults
@property (weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (nonatomic) BOOL isVerticalWidgetIntroduction; // ivar: _isVerticalWidgetIntroduction
@property (retain, nonatomic) SBModalWidgetIntroductionViewController *modalIntroductionViewController; // ivar: _modalIntroductionViewController
@property (copy, nonatomic) NSDictionary *originalIconStateBeforeWidgetDiscoverability; // ivar: _originalIconStateBeforeWidgetDiscoverability
@property (nonatomic) BOOL shouldDisplayWidgetIntroduction; // ivar: _shouldDisplayWidgetIntroduction
@property (nonatomic) BOOL stopUpdatingDefaultWidgetsBumpedIconRecord; // ivar: _stopUpdatingDefaultWidgetsBumpedIconRecord
@property (readonly) Class superclass;
@property (retain, nonatomic) SBHTrialClientManager *trialClientManager; // ivar: _trialClientManager
@property (nonatomic) BOOL widgetDiscoverabilityIsRunning; // ivar: _widgetDiscoverabilityIsRunning


-(BOOL)deviceTypeSupportModalWidgetIntroduction;
-(BOOL)overrideShouldAddDefaultWidgetsToHomeScreenWhenNeeded;
-(BOOL)shouldDeferAlertsAtLocations:(NSUInteger)arg0 ;
-(BOOL)shouldDisplayFeatureIntroductionAtLocations:(NSUInteger)arg0 ;
-(BOOL)shouldPauseUserInteractionAtLocations:(NSUInteger)arg0 ;
-(BOOL)shouldSetupFeatureIntroductionAtLocations:(NSUInteger)arg0 ;
-(BOOL)widgetDiscoverabilityServerSideEnabled;
-(id)defaultWidgetsIconsRestoringRecordKeyForIcon:(id)arg0 ;
-(id)init;
-(id)prewarmModalWidgetIntroductionWithCompletion:(id)arg0 ;
// -(void)animateModalWidgetDiscoverabilityIntroductionWhenNeededWithPresentCompletion:(id)arg0 dismissCompletion:(unk)arg1  ;
// -(void)displayFeatureIntroductionAtLocations:(NSUInteger)arg0 presentCompletion:(id)arg1 dismissCompletion:(unk)arg2  ;
-(void)immediateDownloadSpringBoardHomeTrialSettingsWhenNeeded;
-(void)prewarmModalWidgetIntroductionViewController;
-(void)resetDefaultWidgetsUndoInfo;
-(void)setupFeatureIntroductionAtLocations:(NSUInteger)arg0 ;


@end


#endif