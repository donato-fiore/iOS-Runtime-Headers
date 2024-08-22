// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPROACTIVEHOMESCREENUSAGEOBSERVER_H
#define SBPROACTIVEHOMESCREENUSAGEOBSERVER_H

@class ATXHomeScreenPrediction, NSString, SBHIconManager;
@protocol SBHHomeScreenUsageMonitorObserver, SBProactiveHomeScreenUsageObserverDelegate;

#import <Foundation/Foundation.h>


@interface SBProactiveHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver>



@property (retain, nonatomic) ATXHomeScreenPrediction *currentPrediction; // ivar: _currentPrediction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBProactiveHomeScreenUsageObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (readonly) Class superclass;


-(id)iconModel;
-(id)initWithIconManager:(id)arg0 ;
-(id)proactiveStackForWidgetIcon:(id)arg0 atIndex:(NSUInteger)arg1 gridCellInfo:(id)arg2 ;
-(id)proactiveWidgetForIconDataSource:(id)arg0 ofIcon:(id)arg1 ;
-(id)proactiveWidgetForWidget:(id)arg0 ofIcon:(id)arg1 ;
-(id)rootFolder;
-(id)widgetIdentifiablesDictionaryForIconListModel:(id)arg0 ;
-(void)deviceLockStateDidChange:(id)arg0 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteCurrentPageIndexChanged:(NSUInteger)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteDataSourceDidAppear:(id)arg1 forWidgetIcon:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteDataSourceDidDisappear:(id)arg1 forWidgetIcon:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteRootControllerWillAppearWithPageIndex:(NSUInteger)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteTodayViewAtLocation:(NSInteger)arg1 scrolledWithIconVisibility:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteUserAddedWidgetIconStackSuggestion:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteUserDislikedWidgetIconStackSuggestion:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteUserTappedWidgetIcon:(id)arg1 withURL:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteWidgetIconStackChangedActiveWidget:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 widgetDiscoverabilityDidAcceptSuggestion:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 widgetDiscoverabilityDidRejectSuggestion:(id)arg1 ;
-(void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)arg0 ;
-(void)homeScreenUsageAggregatorDidStartDiscoveringWidgets:(id)arg0 ;
-(void)homeScreenUsageAggregatorWidgetDiscoverabilityDidEnterEditingMode:(id)arg0 ;
-(void)iconModelDidLayout:(id)arg0 ;
-(void)logHomeScreenPageDidAppearWithPageIndex:(NSUInteger)arg0 ;
-(void)logTodayViewDidAppear;
-(void)pushCurrentDockConfiguration;
-(void)pushCurrentHomeScreenConfiguration;
-(void)pushCurrentHomeScreenPagesConfiguration;
-(void)pushCurrentTodayConfiguration;


@end


#endif