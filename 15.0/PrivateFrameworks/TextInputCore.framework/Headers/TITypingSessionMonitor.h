// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPINGSESSIONMONITOR_H
#define TITYPINGSESSIONMONITOR_H

@class NSMutableArray, TIKeyboardLayout, NSString, NSLocale;
@protocol TITypingSessionMonitoringProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TIBiomeObserver.h"
#import "TICoreAnalyticsEventDispatcher.h"
#import "TITypingSession.h"
#import "TITypingDESRecordWriter.h"
#import "TIDPEventDispatcher.h"
#import "TIFeatureUsageMetricsCache.h"
#import "TISKMetricCollector.h"
#import "TIKBUserModel.h"

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _useDODML;
}


@property (retain, nonatomic) NSMutableArray *aggregatedEventObservers; // ivar: _aggregatedEventObservers
@property (readonly, nonatomic) TIBiomeObserver *biomeObserver; // ivar: _biomeObserver
@property (readonly, nonatomic) TICoreAnalyticsEventDispatcher *coreAnalyticsEventDispatcher; // ivar: _coreAnalyticsEventDispatcher
@property (retain, nonatomic) TIKeyboardLayout *currentLayout; // ivar: _currentLayout
@property (retain, nonatomic) TITypingSession *currentTypingSession; // ivar: _currentTypingSession
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TITypingDESRecordWriter *desRecordWriter; // ivar: _desRecordWriter
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TIDPEventDispatcher *differentialPrivacyEventDispatcher; // ivar: _differentialPrivacyEventDispatcher
@property (readonly, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache; // ivar: _featureUsageMetricsCache
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) TISKMetricCollector *sensorKitMetricCollector; // ivar: _sensorKitMetricCollector
@property (readonly) Class superclass;
@property (readonly, nonatomic) TIKBUserModel *userModel; // ivar: _userModel


+(BOOL)shouldRecordSession:(id)arg0 ;
+(id)loadAllStoredSessions;
+(id)pathForTimeTaggedFileName:(id)arg0 ;
+(id)temporaryKeyboardsDirectory;
-(id)endTypingSession;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithConfig:(id)arg0 metricDescriptorRegistry:(id)arg1 ;
-(void)keyboardDidSuspend:(id)arg0 withSessionParams:(id)arg1 ;
-(void)layoutDidChange:(id)arg0 keyboardState:(id)arg1 ;
-(void)observeSession:(id)arg0 sessionParams:(id)arg1 ;
-(void)tearDown;


@end


#endif