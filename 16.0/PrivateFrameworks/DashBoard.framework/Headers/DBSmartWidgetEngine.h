// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSMARTWIDGETENGINE_H
#define DBSMARTWIDGETENGINE_H

@class NSArray, NSString, NSDate, CARObserverHashTable, NSTimer;
@protocol DBDashboardStateObserver, DBSmartWidgetResourceProvider, DBSmartWidgetSourceDelegate, DBEnvironment;

#import <Foundation/Foundation.h>

#import "DBHomeManager.h"

@interface DBSmartWidgetEngine : NSObject <DBDashboardStateObserver, DBSmartWidgetResourceProvider, DBSmartWidgetSourceDelegate>



@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSArray *currentPredictions; // ivar: _currentPredictions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic) BOOL hasHighPriorityPrediction;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) NSDate *lastRefreshRequest; // ivar: _lastRefreshRequest
@property (retain, nonatomic) NSDate *nextRefresh; // ivar: _nextRefresh
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL predictionsFresh; // ivar: _predictionsFresh
@property (retain, nonatomic) NSTimer *refreshTimer; // ivar: _refreshTimer
@property (retain, nonatomic) NSArray *sources; // ivar: _sources
@property (retain, nonatomic) NSTimer *stoppingTimer; // ivar: _stoppingTimer
@property (readonly) Class superclass;
@property (nonatomic) BOOL updatesPending; // ivar: _updatesPending


-(BOOL)_useRangeEnd:(id)arg0 refreshDate:(id)arg1 ;
-(BOOL)_useRangeStart:(id)arg0 now:(id)arg1 refreshDate:(id)arg2 ;
-(id)_sourceForPrediction:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)_postUpdatedCurrentPredictionsIfNeeded;
-(void)_start;
-(void)_stop;
-(void)_updatePredictionsFresh;
-(void)_updateWithDashboardStateProvider:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dashboardStateProvider:(id)arg0 didChangeActiveBundleIdentifier:(id)arg1 ;
-(void)dashboardStateProvider:(id)arg0 didChangeConnectionReady:(BOOL)arg1 ;
-(void)dashboardStateProvider:(id)arg0 didChangeHomeScreenPageType:(NSUInteger)arg1 ;
-(void)dashboardStateProvider:(id)arg0 didChangeLockoutState:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)handleEvent:(id)arg0 ;
-(void)refreshDisabled;
-(void)refreshGarageDoors;
-(void)refreshPredictions;
-(void)removeObserver:(id)arg0 ;
-(void)sourceDidRefresh:(id)arg0 predictionsUpdated:(BOOL)arg1 ;
-(void)startIfNeeded;
-(void)stopIfNeeded;


@end


#endif