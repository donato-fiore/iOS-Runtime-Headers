// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXLTCLIENT_H
#define AXLTCLIENT_H

@class NSMutableDictionary, NSXPCConnection;
@protocol AXLTXPCClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXLTClient : NSObject <AXLTXPCClientProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) NSMutableDictionary *dataReceivers; // ivar: _dataReceivers
@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection


// -(BOOL)startTranscribing:(NSInteger)arg0 client:(id)arg1 callbackBlock:(id)arg2 error:(unk)arg3  ;
// -(BOOL)startTranscribing:(NSInteger)arg0 targetPID:(int)arg1 client:(id)arg2 callbackBlock:(id)arg3 error:(unk)arg4  ;
-(BOOL)stopTranscribing:(NSInteger)arg0 client:(id)arg1 error:(*id)arg2 ;
-(BOOL)stopTranscribing:(NSInteger)arg0 targetPID:(int)arg1 client:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(void)initializeServiceConnection;
-(void)pingServiceWithHandler:(id)arg0 ;
-(void)registerForTranscriptionIfNecessary;
-(void)transcribedData:(id)arg0 ;


@end


#endif