// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCLIENTCONNECTION_H
#define STCLIENTCONNECTION_H

@class SiriCoreDataCompressor, NSURL, NSString;
@protocol STMockSessionDJDelegate, OS_dispatch_data;


#import "STProxyConnection.h"
#import "STMockSessionDJ.h"

@interface STClientConnection : STProxyConnection <STMockSessionDJDelegate>

 {
    NSObject<OS_dispatch_data> *_bufferedGeneralOutputData;
    SiriCoreDataCompressor *_outputCompressor;
    CGFloat _lastReplayEvent;
    NSURL *_replayFileURL;
    STMockSessionDJ *_sessionDJ;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasBufferedDataOrOutstandingPings;
-(BOOL)_sendAceCommand:(id)arg0 error:(*id)arg1 ;
-(BOOL)_sendAceEndWithError:(*id)arg0 ;
-(BOOL)_sendAcePongWithId:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithSocket:(id)arg0 handler:(id)arg1 replayFileURL:(id)arg2 ;
-(void)_addStartRequestIDToReplay:(id)arg0 ;
-(void)_bufferGeneralData:(id)arg0 ;
-(void)_checkForReplayTimeout;
-(void)_handleAceEnd;
-(void)_handleAceNop;
-(void)_handleAcePing:(unsigned int)arg0 ;
-(void)_handleAcePong:(unsigned int)arg0 ;
-(void)_handleLoadAssistant:(id)arg0 ;
-(void)_initializeBufferedGeneralOutputDataWithInitialPayload:(BOOL)arg0 ;
-(void)_sendGeneralData:(id)arg0 ;
-(void)_startReplayWithAceID:(id)arg0 atURL:(id)arg1 ;
-(void)_tryToWriteBufferedOutputData;
-(void)handleAceObject:(id)arg0 ;
-(void)handlePacket:(struct ? *)arg0 ;
-(void)sessionDJ:(id)arg0 replayAceCommand:(id)arg1 ;
-(void)sessionDJReplayDidFinish:(id)arg0 ;


@end


#endif