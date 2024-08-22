// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDPDEVICEMETRICSCOLLECTOR_H
#define SGDPDEVICEMETRICSCOLLECTOR_H

@class IDSService, SGQuickResponsesStore, NSString;
@protocol IDSServiceDelegate, SGXPCActivityManagerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SGDPDeviceMetricsCollector : NSObject <IDSServiceDelegate>

 {
    id<SGXPCActivityManagerProtocol> *_xpcActivityManager;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_queue;
    SGQuickResponsesStore *_store;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)recordEngagementMetrics:(id)arg0 selectedRecorder:(id)arg1 ignoredRecorder:(id)arg2 ;
+(BOOL)recordResponse:(id)arg0 numTimesToLog:(NSUInteger)arg1 recorder:(id)arg2 prefix:(id)arg3 ;
+(BOOL)sendEngagementToDPUsingData:(id)arg0 ;
+(id)getActiveTrialInformationWithWithXPCActivityManager:(id)arg0 activity:(id)arg1 ;
+(id)getPrefixFromRolloutID:(id)arg0 factorPackId:(id)arg1 experimentId:(id)arg2 treatmentId:(id)arg3 ;
+(id)onCompletionWithXPCActivityManager:(SEL)arg0 activity:(id)arg1 engagementMetrics:(id)arg2 idsService:(id)arg3 destinationDevice:(id)arg4 ;
+(id)onDeltaRowWithXPCActivityManager:(SEL)arg0 activity:(id)arg1 engagementMetrics:(id)arg2 ;
+(id)recorderForKey:(id)arg0 ;
-(BOOL)collectDeviceQREngagement:(id)arg0 ;
-(BOOL)syncQREngagementToPairedDeviceWithActivity:(id)arg0 ;
-(id)initAsDelegate;
-(id)initWithActivityManager:(id)arg0 ;
-(id)initWithActivityManager:(id)arg0 idsService:(id)arg1 queue:(id)arg2 store:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif