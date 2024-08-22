// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAYLOADUPLOADAGENT_H
#define PAYLOADUPLOADAGENT_H

@class NSMutableDictionary, NWUsageMonitor;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PayloadUploadAgent : NSObject {
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSMutableDictionary *_pendingUploadMap;
    id *_foregroundStateObserver;
    NWUsageMonitor *_usageMonitor;
}




+(BOOL)uploadPayload:(id)arg0 ;
+(id)sharedInstance;
+(void)reportFailureMetricForPayload:(id)arg0 ;
-(id)init;
-(void)processPendingUploadRequestFor:(id)arg0 ;
-(void)scheduleUploadFor:(id)arg0 ;
-(void)scheduleUserPermissionRequestFor:(id)arg0 ;
-(void)uploadPayloadsToRadarWithCaseID:(id)arg0 radarID:(id)arg1 token:(id)arg2 urgency:(NSInteger)arg3 apnsIdentifier:(NSUInteger)arg4 ;


@end


#endif