// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSWRMEXCHANGE_H
#define IDSWRMEXCHANGE_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "IDSWRMMetricContainer.h"

@interface IDSWRMExchange : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSUInteger _recommendedLinkType;
    NSUInteger _activeLinkType;
    NSUInteger _activeRecommendationType;
    BOOL _registered;
    BOOL _subscribed;
    NSUInteger _reportInterval;
    BOOL _shouldSendReport;
    IDSWRMMetricContainer *_metrics;
    unsigned short _connectCount;
    NSUInteger _nearbyOverWiFi;
    BOOL _isPaired;
    BOOL _isNearby;
    BOOL _isConnected;
    int _isPairedNotifyToken;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id *_delegateBlock;
}




+(id)sharedInstance;
-(BOOL)_isXPCDictionary:(id)arg0 ;
-(BOOL)_processLinkPreferenceNotificationEvent:(id)arg0 ;
-(BOOL)_processMetricsConfigEvent:(id)arg0 ;
-(BOOL)_processXPCMessage:(id)arg0 ;
-(BOOL)_setRecommendedLinkType:(NSUInteger)arg0 ;
-(BOOL)isBTRecommended;
-(BOOL)isWiFiRecommended;
-(NSUInteger)recommendedLinkType;
-(id)_newMetricReportMessage;
-(id)_newPrefSubscribeMessage:(BOOL)arg0 ;
-(id)_newRegisterMessage;
-(id)_newSubscribeMessage;
-(id)_newSubscribeStatusUpdateMessage;
-(id)_newSubscribeStatusUpdateMessage:(BOOL)arg0 nearby:(BOOL)arg1 ;
-(id)_newUnsubscribeMessage;
-(id)init;
-(void)_dispatchAfter:(CGFloat)arg0 block:(id)arg1 ;
-(void)_notifyDelegate;
-(void)_processXPCEvent:(id)arg0 ;
-(void)_reconnectUntilTimeout;
-(void)_registerWithWRM;
-(void)_resetLocalMetric;
-(void)_restartClient;
-(void)_restartSubscriptionIfNeeded;
-(void)_sendMetricReport;
-(void)_sendMetricReportPeriodically;
-(void)_sendXPCMessage:(id)arg0 ;
-(void)_setReportInterval:(NSUInteger)arg0 ;
-(void)_startXPCConnection;
-(void)_stopXPCConnection;
-(void)_submitBlockAsync:(id)arg0 ;
-(void)_updateLocalMetric:(id)arg0 ;
-(void)dealloc;
-(void)handleActiveLinkChange:(NSUInteger)arg0 ;
-(void)handleNetworkStateChangeUpdate:(BOOL)arg0 nearby:(BOOL)arg1 ;
-(void)submitMetric:(id)arg0 ;
-(void)subscribeForRecommendation:(id)arg0 recommendationType:(NSUInteger)arg1 block:(id)arg2 ;
-(void)unsubscribeForRecommendation;


@end


#endif