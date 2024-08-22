// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPANALYTICSSCREENMANAGER_H
#define CPANALYTICSSCREENMANAGER_H

@class NSDate, NSString, NSMutableArray, NSSet;
@protocol CPAnalyticsDynamicPropertyProvider;

#import <Foundation/Foundation.h>

#import "CPAnalytics.h"

@interface CPAnalyticsScreenManager : NSObject <CPAnalyticsDynamicPropertyProvider>



@property (nonatomic) NSInteger appVisiblePeriodSignpostID; // ivar: _appVisiblePeriodSignpostID
@property (weak, nonatomic) CPAnalytics *cpAnalyticsInstance; // ivar: _cpAnalyticsInstance
@property (retain, nonatomic) NSDate *currentScreenStartTime; // ivar: _currentScreenStartTime
@property (retain, nonatomic) NSString *currentTabIdentifierDescription; // ivar: _currentTabIdentifierDescription
@property (retain, nonatomic) NSMutableArray *currentlyOpenViews; // ivar: _currentlyOpenViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger foregroundEventCount; // ivar: _foregroundEventCount
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *namesOfViewsToIgnore; // ivar: _namesOfViewsToIgnore
@property (retain, nonatomic) NSSet *namesOfViewsToTrack; // ivar: _namesOfViewsToTrack
@property (retain, nonatomic) NSString *pendingTabIdentifierDescription; // ivar: _pendingTabIdentifierDescription
@property (retain, nonatomic) NSMutableArray *priorViews; // ivar: _priorViews
@property (readonly, nonatomic) NSUInteger priorViewsMaxIndex; // ivar: _priorViewsMaxIndex
@property (nonatomic) NSInteger screensViewCount; // ivar: _screensViewCount
@property (readonly) Class superclass;


+(BOOL)_isValidTabIdentifierChangedEvent:(id)arg0 ;
+(BOOL)isDebugScreenForViewName:(id)arg0 ;
+(BOOL)isValidScreenViewEvent:(id)arg0 ;
+(id)combinedViewName:(id)arg0 withID:(id)arg1 ;
+(id)viewNameFromCombined:(id)arg0 ;
-(id)currentScreenViewName;
-(id)getDynamicProperty:(id)arg0 forEventName:(id)arg1 payloadForSystemPropertyExtraction:(id)arg2 ;
-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(id)lastScreenName;
-(id)screenViewNameAt:(NSUInteger)arg0 ;
-(void)_handleUnknownViewIfNeeded:(id)arg0 ;
-(void)_initializeScreenViewTrackers:(id)arg0 ;
-(void)_resetSessionWithTime:(id)arg0 ;
-(void)_sendCPAnalyticsScreenViewEventWithEndTime:(id)arg0 ;
-(void)_trackView:(id)arg0 withEventName:(id)arg1 viewID:(id)arg2 eventTime:(id)arg3 ;
-(void)_updateAppLifeCycle:(id)arg0 ;
-(void)_updateCurrentScreenToViewName:(id)arg0 withEventTime:(id)arg1 ;
-(void)_updateCurrentTabIdentifier:(id)arg0 ;
-(void)_updateScreenTracking:(id)arg0 ;
-(void)_updateTabTracking:(id)arg0 ;
-(void)processEvent:(id)arg0 ;
-(void)registerSystemProperties:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif