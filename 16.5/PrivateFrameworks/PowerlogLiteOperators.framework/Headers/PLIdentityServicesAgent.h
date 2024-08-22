// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLIDENTITYSERVICESAGENT_H
#define PLIDENTITYSERVICESAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, NSString, NSDate, NSMutableDictionary, NRDeviceMonitor;
@protocol NRDeviceMonitorDelegate;



@interface PLIdentityServicesAgent : PLAgent <NRDeviceMonitorDelegate>



@property (retain) PLXPCListenerOperatorComposition *cloudMessagingHandler; // ivar: _cloudMessagingHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PLXPCListenerOperatorComposition *idsLinkPreferenceRequestHandler; // ivar: _idsLinkPreferenceRequestHandler
@property (retain) PLXPCListenerOperatorComposition *infraWiFiRequestHandler; // ivar: _infraWiFiRequestHandler
@property (retain) NSDate *initialEntryDate; // ivar: _initialEntryDate
@property (retain) PLXPCListenerOperatorComposition *ipsecLinkTypeHandler; // ivar: _ipsecLinkTypeHandler
@property (retain) NSMutableDictionary *lastEntryDatePerCategory; // ivar: _lastEntryDatePerCategory
@property (retain) NSDate *lastLocalDeliveryLogDate; // ivar: _lastLocalDeliveryLogDate
@property (retain) PLXPCListenerOperatorComposition *localLinkTypeHandler; // ivar: _localLinkTypeHandler
@property (retain) PLXPCListenerOperatorComposition *localMessageHandler; // ivar: _localMessageHandler
@property (retain) PLXPCListenerOperatorComposition *networkStatsHandler; // ivar: _networkStatsHandler
@property (retain) NRDeviceMonitor *nrdm; // ivar: _nrdm
@property (retain) NSMutableDictionary *previousStatsByPriority; // ivar: _previousStatsByPriority
@property (readonly) Class superclass;


+(id)entryDefinitionCloudMessaging;
+(id)entryDefinitionIDSMessageStats;
+(id)entryDefinitionIDSSocketStats;
+(id)entryDefinitionLocalInfraWiFiRequests;
+(id)entryDefinitionLocalLink;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventPointDefinitionIDSLinkPreferenceRequest;
+(id)entryEventPointDefinitionIDSLocalMessage;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)createBTAccountingEvents:(id)arg0 ;
-(void)createIDSAccountingEventsWithEntries:(id)arg0 ;
-(void)deviceLinkTypeDidChange:(id)arg0 linkType:(unsigned char)arg1 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)logCloudMessaging:(id)arg0 ;
-(void)logIDSLinkPreference:(id)arg0 ;
-(void)logIDSNetworkEntries:(id)arg0 ;
-(void)logLocalInfraWiFiFrequests:(id)arg0 ;
-(void)logLocalLinkType:(NSUInteger)arg0 ;
-(void)logLocalMessageTopic:(id)arg0 ;
-(void)notifyLinkType:(NSUInteger)arg0 ;
-(void)setCurrentLinkType;


@end


#endif