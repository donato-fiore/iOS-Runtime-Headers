// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPINGSESSIONMONITOR_H
#define TITYPINGSESSIONMONITOR_H

@class NSMutableArray, TIKeyboardLayout, NSString;
@protocol TITypingSessionMonitoringProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TIBiomeObserver.h"
#import "TIKeyboardInputManagerConfig.h"
#import "TICoreAnalyticsEventDispatcher.h"
#import "TITypingSession.h"
#import "TITypingDESRecordWriter.h"
#import "TIDPEventDispatcher.h"
#import "TIFeatureUsageMetricsCache.h"
#import "TIMetricDescriptorRegistry.h"
#import "TISKMetricCollector.h"
#import "TIKBUserModel.h"

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (retain, nonatomic) NSMutableArray *aggregatedEventObservers; // ivar: _aggregatedEventObservers
@property (readonly, nonatomic) TIBiomeObserver *biomeObserver; // ivar: _biomeObserver
@property (retain, nonatomic) TIKeyboardInputManagerConfig *config; // ivar: _config
@property (readonly, nonatomic) TICoreAnalyticsEventDispatcher *coreAnalyticsEventDispatcher; // ivar: _coreAnalyticsEventDispatcher
@property (retain, nonatomic) TIKeyboardLayout *currentLayout; // ivar: _currentLayout
@property (retain, nonatomic) TITypingSession *currentTypingSession; // ivar: _currentTypingSession
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TITypingDESRecordWriter *desRecordWriter; // ivar: _desRecordWriter
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TIDPEventDispatcher *differentialPrivacyEventDispatcher; // ivar: _differentialPrivacyEventDispatcher
@property (readonly, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache; // ivar: _featureUsageMetricsCache
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TIMetricDescriptorRegistry *metricDescriptorRegistry; // ivar: _metricDescriptorRegistry
@property (readonly, nonatomic) TISKMetricCollector *sensorKitMetricCollector; // ivar: _sensorKitMetricCollector
@property (readonly) Class superclass;
@property (readonly, nonatomic) TIKBUserModel *userModel; // ivar: _userModel


+(BOOL)shouldRecordSession:(id)arg0 ;
+(id)loadAllStoredSessions;
+(id)temporaryKeyboardsDirectory;
-(id)endTypingSession;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithConfig:(id)arg0 metricDescriptorRegistry:(id)arg1 ;
-(id)observeSession:(id)arg0 sessionParams:(id)arg1 ;
-(void)_lazyLoadAggregatedEventObservers;
-(void)_loadAggregatedEventObservers;
-(void)keyboardDidSuspend:(id)arg0 withSessionParams:(id)arg1 ;
-(void)layoutDidChange:(id)arg0 keyboardState:(id)arg1 ;
-(void)tearDown;


@end


#endif