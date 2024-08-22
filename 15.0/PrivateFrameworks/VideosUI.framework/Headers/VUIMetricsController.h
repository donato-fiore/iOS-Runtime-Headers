// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMETRICSCONTROLLER_H
#define VUIMETRICSCONTROLLER_H

@class MTMetricsKit, NSDictionary, NSString, MTPerfKit, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VUIMetricsPageEventData.h"

@interface VUIMetricsController : NSObject {
    BOOL _isInternalBuild;
    BOOL _isAppJustLaunched;
    BOOL _isAppJustDeepLinkOpened;
    BOOL _isGDPRConsented;
}


@property (retain, nonatomic) MTMetricsKit *activeMetricsKit; // ivar: _activeMetricsKit
@property (copy, nonatomic) NSDictionary *baseFields; // ivar: _baseFields
@property (readonly, copy, nonatomic) NSDictionary *baseFieldsForVPAF;
@property (retain, nonatomic) NSDictionary *cachedEnterEvent; // ivar: _cachedEnterEvent
@property (retain, nonatomic) NSDictionary *cachedMediaEvent; // ivar: _cachedMediaEvent
@property (retain, nonatomic) NSDictionary *cachedOpenUrlData; // ivar: _cachedOpenUrlData
@property (readonly, copy, nonatomic) NSString *currentTabIdentifier; // ivar: _currentTabIdentifier
@property (retain, nonatomic) NSString *exitEventDestinationUrl; // ivar: _exitEventDestinationUrl
@property (retain, nonatomic) VUIMetricsPageEventData *gdprCachedPageEvent; // ivar: _gdprCachedPageEvent
@property (readonly, copy, nonatomic) NSDictionary *iTunesVPAF;
@property (nonatomic) BOOL isInDebugMode; // ivar: _isInDebugMode
@property (retain, nonatomic) VUIMetricsPageEventData *lastRecordedPageEventData; // ivar: _lastRecordedPageEventData
@property (retain, nonatomic) MTMetricsKit *loggerKit; // ivar: _loggerKit
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsDataDispatchSQ; // ivar: _metricsDataDispatchSQ
@property (retain, nonatomic) MTMetricsKit *metricsKitMain; // ivar: _metricsKitMain
@property (retain, nonatomic) MTMetricsKit *metricsKitUnidentified; // ivar: _metricsKitUnidentified
@property (retain, nonatomic) MTPerfKit *perfMetricsKit; // ivar: _perfMetricsKit
@property (retain, nonatomic) NSHashTable *savedRecentEvents; // ivar: _savedRecentEvents
@property (nonatomic) BOOL shouldFlushMetrics; // ivar: _shouldFlushMetrics
@property (nonatomic) BOOL shouldPostAppLaunchData; // ivar: _shouldPostAppLaunchData


+(id)_baseToVPAFMapping;
+(id)sharedInstance;
-(id)_createDataAddingBaseAndPageFieldsToEventData:(id)arg0 ;
-(id)_createMetricsKitForTopic:(id)arg0 ;
-(id)_createPerfKit;
-(id)_getCurrentMetricsTopic;
-(id)_getLocationAuthorizationStatus;
-(id)getMetricsEnhancedBuyParams:(id)arg0 ;
-(id)getMetricsOverlayForBundleOffer;
-(id)getRecentEventsForDebuggerUI;
-(id)iTunesLibraryPlaybackMediaMetricsForAdamID:(id)arg0 mediaType:(id)arg1 ;
-(id)init;
-(void)_flushMetrics;
-(void)_flushUnreportedEvents:(id)arg0 ;
-(void)_handleGroupActivitiesSessionStateChange:(id)arg0 ;
-(void)_handleServerConfigChange:(id)arg0 ;
-(void)_handleTabBarChange:(id)arg0 ;
-(void)_handleWLKAppLibChange:(id)arg0 ;
-(void)_handleWLKLocationManagerChange:(id)arg0 ;
-(void)_handleWLKSettingsDidChange:(id)arg0 ;
-(void)_initializeBaseFields;
-(void)_recordEnter:(id)arg0 ;
-(void)_recordEvent:(id)arg0 withEventData:(id)arg1 ;
-(void)_recordExit:(id)arg0 ;
-(void)_removeBaseFieldsForKeys:(id)arg0 ;
-(void)_saveRecentEvents:(id)arg0 ;
-(void)_setGDPRConsentStatus:(BOOL)arg0 ;
-(void)_updateBaseFieldsWithData:(id)arg0 ;
-(void)flushMetrics;
-(void)forceGDPRConsentStatus:(BOOL)arg0 ;
-(void)jsDelegateRecordLogEvent:(id)arg0 ;
-(void)recordAppBecameActive;
-(void)recordAppLaunched;
-(void)recordAppWillBackground;
-(void)recordAppWillTerminate;
-(void)recordClick:(id)arg0 ;
-(void)recordDialog:(id)arg0 ;
-(void)recordImpressions:(id)arg0 ;
-(void)recordLog:(id)arg0 ;
-(void)recordMedia:(id)arg0 ;
-(void)recordOpenUrlLaunchWithExtURL:(id)arg0 andOptions:(id)arg1 ;
-(void)recordPage:(id)arg0 ;
-(void)recordPerfEvent:(id)arg0 ;
-(void)recordRawEvent:(id)arg0 ;
-(void)recordSearch:(id)arg0 ;
-(void)registerForBaseFieldChanges;
-(void)setupMetricsController;
-(void)updateGDPRConsentStatus;


@end


#endif