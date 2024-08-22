// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSAWDLOGGING_H
#define IDSAWDLOGGING_H

@class AWDServerConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSAWDLogging : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly) AWDServerConnection *AWDServerConnection; // ivar: _AWDServerConnection


+(id)sharedInstance;
-(BOOL)_shouldSubmit;
-(id)_metricContainerForMetricType:(unsigned int)arg0 ;
-(id)init;
-(void)IDSCoreAnalyticsQuickRelayEventType:(id)arg0 eventSubType:(id)arg1 duration:(id)arg2 resultCode:(id)arg3 providerType:(id)arg4 transportType:(id)arg5 interfaceType:(id)arg6 skeEnabled:(id)arg7 isInitiator:(id)arg8 protocolVersion:(id)arg9 retryCount:(id)arg10 serviceName:(id)arg11 subServiceName:(id)arg12 participantCount:(id)arg13 ;
-(void)IDSQuickRelayEventType:(id)arg0 eventSubType:(id)arg1 duration:(id)arg2 resultCode:(id)arg3 providerType:(id)arg4 transportType:(id)arg5 interfaceType:(id)arg6 skeEnabled:(id)arg7 isInitiator:(id)arg8 protocolVersion:(id)arg9 retryCount:(id)arg10 serviceName:(id)arg11 subServiceName:(id)arg12 participantCount:(id)arg13 ;
-(void)_submitAWDMetric:(id)arg0 withContainer:(id)arg1 ;
-(void)submitMetric:(id)arg0 withIdentifier:(unsigned int)arg1 ;


@end


#endif