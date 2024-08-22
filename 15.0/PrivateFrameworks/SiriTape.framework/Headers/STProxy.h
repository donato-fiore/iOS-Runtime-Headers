// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STPROXY_H
#define STPROXY_H

@class NSArray, NSURL, NSMutableArray, NSString;
@protocol OS_dispatch_queue, STAceObjectHandler;

#import <Foundation/Foundation.h>

#import "GCDAsyncSocket.h"
#import "STProxySocketDelegate.h"

@interface STProxy : NSObject {
    GCDAsyncSocket *_socket;
    STProxySocketDelegate *_proxySocketDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _useSpeechLogs;
    BOOL _autoExit;
    NSUInteger _speechLogsIndex;
    NSArray *_speechLogs;
    NSURL *_testSpeechURL;
    NSMutableArray *_replayCompletions;
}


@property (retain, nonatomic) NSObject<STAceObjectHandler> *aceObjectHandler; // ivar: _aceObjectHandler
@property (retain, nonatomic) NSString *previousAccountIdentifier; // ivar: _previousAccountIdentifier


+(id)sharedServer;
-(id)init;
-(void)_loadSpeechLogsFromURL:(id)arg0 ;
-(void)_sendNextSpeechRequest;
-(void)_startProxyWithActiveServerURL:(id)arg0 handler:(id)arg1 replayFileURL:(id)arg2 ;
-(void)addObserverActionForType:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)addReplayCompletion:(id)arg0 ;
-(void)dealloc;
-(void)didFinishedOneRequestAndExpectMore:(BOOL)arg0 ;
-(void)disconnect;
-(void)observeAndLogClientFlowPerformanceMetrics;
-(void)startProxyRecordingWithActiveServerURL:(id)arg0 ;
-(void)startProxyServerWithReplayFileURL:(id)arg0 ;
-(void)startProxyServerWithReplayFileURL:(id)arg0 speechLogURL:(id)arg1 ;
-(void)startProxyWithActiveServerURL:(id)arg0 handler:(id)arg1 ;
-(void)updateLocalScriptsForReplayFile:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif