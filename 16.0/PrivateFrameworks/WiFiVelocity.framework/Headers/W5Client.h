// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef W5CLIENT_H
#define W5CLIENT_H

@class NSXPCConnection, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface W5Client : NSObject {
    NSXPCConnection *_conn;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _lastRecoveryTimestamp;
    NSMutableArray *_mutableEventIDs;
    NSMutableArray *_mutableUUIDs;
    NSMutableDictionary *_mutableEventCallbackMap;
}


@property (copy, nonatomic) id *eventCallback; // ivar: _eventCallback


+(id)sharedClient;
-(BOOL)__tarballWithSource:(id)arg0 destination:(id)arg1 error:(*id)arg2 ;
-(BOOL)setDebugConfiguration:(id)arg0 peer:(id)arg1 error:(*id)arg2 ;
-(id)__collectBusyFallbackLogsWithReason:(id)arg0 compress:(BOOL)arg1 ;
-(id)__collectJetsamFallbackLogsWithReason:(id)arg0 compress:(BOOL)arg1 ;
-(id)__mostRecentInDirectories:(id)arg0 include:(id)arg1 exclude:(id)arg2 maxAge:(CGFloat)arg3 ;
// -(id)collectLogs:(id)arg0 configuration:(id)arg1 update:(id)arg2 receipts:(unk)arg3 error:(*id)arg4  ;
// -(id)collectLogs:(id)arg0 configuration:(id)arg1 update:(id)arg2 reply:(unk)arg3  ;
-(id)init;
-(id)localPeer;
-(id)peers;
-(id)queryDebugConfigurationForPeer:(id)arg0 error:(*id)arg1 ;
-(id)queryStatusForPeer:(id)arg0 error:(*id)arg1 ;
// -(id)runDiagnostics:(id)arg0 configuration:(id)arg1 update:(id)arg2 error:(unk)arg3  ;
// -(id)runDiagnostics:(id)arg0 configuration:(id)arg1 update:(id)arg2 reply:(unk)arg3  ;
-(id)runWiFiPerformanceLoggingWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)runWiFiPerformanceLoggingWithConfiguration:(id)arg0 reply:(id)arg1 ;
-(id)runWiFiSnifferOnChannel:(id)arg0 duration:(CGFloat)arg1 peer:(id)arg2 error:(*id)arg3 ;
-(id)runWiFiSnifferOnChannel:(id)arg0 duration:(CGFloat)arg1 peer:(id)arg2 reply:(id)arg3 ;
-(void)__cancelAllRequestsAndReply:(id)arg0 ;
-(void)__cancelRequestWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)__log:(id)arg0 timestamp:(BOOL)arg1 reply:(id)arg2 ;
-(void)__logsCollectedWithTemporaryURL:(id)arg0 outputURL:(id)arg1 keepParent:(BOOL)arg2 compress:(BOOL)arg3 reply:(id)arg4 ;
-(void)__purgeFilesInDirectory:(id)arg0 matching:(id)arg1 maxAge:(NSUInteger)arg2 maxCount:(NSUInteger)arg3 ;
-(void)__queryLocalPeerAndReply:(id)arg0 ;
-(void)__startMonitoringEvents:(id)arg0 reply:(id)arg1 ;
-(void)__stopMonitoringEvents:(id)arg0 reply:(id)arg1 ;
-(void)cancelAllRequests;
-(void)cancelRequestWithUUID:(id)arg0 ;
-(void)dealloc;
-(void)log:(id)arg0 timestamp:(BOOL)arg1 ;
-(void)queryDebugConfigurationForPeer:(id)arg0 reply:(id)arg1 ;
-(void)queryStatusForPeer:(id)arg0 reply:(id)arg1 ;
-(void)receivedEvent:(id)arg0 ;
-(void)setDebugConfiguration:(id)arg0 peer:(id)arg1 reply:(id)arg2 ;
-(void)startBrowsing;
-(void)startMonitoringEvents:(id)arg0 ;
-(void)stopBrowsing;
-(void)stopMonitoringEvents:(id)arg0 ;


@end


#endif