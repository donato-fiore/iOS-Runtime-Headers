// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNANALYSISCLIENT_H
#define SNANALYSISCLIENT_H

@class NSXPCConnection, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SNAnalysisClient : NSObject {
    id *_connectionToServerGenerator;
    NSXPCConnection *_xpcConnectionToServer;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingInvalidationHandlers;
}




+(id)defaultClient;
// +(id)newConnectionToMachServiceWithName:(id)arg0 lostConnectionHandler:(id)arg1 queue:(unk)arg2  ;
// -(id)_connectionToServerWithInvalidationHandler:(id)arg0 queue:(unk)arg1  ;
// -(id)_createRemoteSystemAudioAnalyzerWithInvalidationHandler:(id)arg0 queue:(unk)arg1  ;
// -(id)_remoteResourceCoordinatorWithInvalidationHandler:(id)arg0 queue:(unk)arg1  ;
// -(id)createRemoteSystemAudioAnalyzerWithInvalidationHandler:(id)arg0 queue:(unk)arg1  ;
-(id)init;
-(id)initToConnectToMachServiceWithName:(id)arg0 queue:(id)arg1 ;
// -(id)initWithConnectionGenerator:(id)arg0 queue:(unk)arg1  ;
-(void)_handleLostConnection;


@end


#endif