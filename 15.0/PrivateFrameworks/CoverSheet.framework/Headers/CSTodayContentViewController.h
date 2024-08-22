// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSTODAYCONTENTVIEWCONTROLLER_H
#define CSTODAYCONTENTVIEWCONTROLLER_H

@class NSString, SBUISpotlightBarNavigationController, SPUISearchBarController;
@protocol SBFLegibilitySettingsProviderDelegate;


#import "CSCoverSheetViewControllerBase.h"
#import "CSTodayViewController.h"

@interface CSTodayContentViewController : CSCoverSheetViewControllerBase <SBFLegibilitySettingsProviderDelegate>



@property (nonatomic, getter=isBouncing) BOOL bouncing; // ivar: _bouncing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBUISpotlightBarNavigationController *spotlightNavigationController; // ivar: _spotlightNavigationController
@property (retain, nonatomic) SPUISearchBarController *spotlightSearchBarViewController; // ivar: _spotlightSearchBarViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) CSTodayViewController *todayViewController; // ivar: _todayViewController


+(Class)viewClass;
-(id)_todayContentView;
-(id)init;
-(void)_updateSpotlightLegibility;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)providerLegibilitySettingsChanged:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif