// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVQRCONNECTION_H
#define MSVQRCONNECTION_H

@class NSString, NSNumber, IDSGroupSession;
@protocol IDSGroupSessionDelegate, OS_nw_connection, MSVQRConnectionSessionDataSource, MSVQRConnectionDelegate, OS_dispatch_queue, OS_nw_protocol_definition, MSVQRConnectionReportProtocol;

#import <Foundation/Foundation.h>

#import "MSVBlockGuard.h"
#import "MSVQRConnectionMessageCoder.h"

@interface MSVQRConnection : NSObject <IDSGroupSessionDelegate>



@property (retain, nonatomic) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<MSVQRConnectionSessionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSVQRConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_nw_protocol_definition> *framerDefinition; // ivar: _framerDefinition
@property (retain, nonatomic) MSVBlockGuard *guard; // ivar: _guard
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MSVQRConnectionMessageCoder *messageCoder; // ivar: _messageCoder
@property (copy, nonatomic) NSNumber *participantIdentifier; // ivar: _participantIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<MSVQRConnectionReportProtocol> *report; // ivar: _report
@property (retain, nonatomic) IDSGroupSession *session; // ivar: _session
@property (nonatomic) BOOL shouldTerminate; // ivar: _shouldTerminate
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)connectionWithDataSource:(id)arg0 messageCoder:(id)arg1 ;
+(id)createFramerDefinitionWithIdentifier:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 messageCoder:(id)arg1 ;
-(void)_clearState;
-(void)_connectionStateDidChangeWithError:(id)arg0 ;
-(void)_createGroupSession;
-(void)_createQuicConnection;
-(void)_receiveNextMessage;
-(void)_sendPathWithCompletion:(id)arg0 ;
-(void)_terminateWithError:(id)arg0 ;
-(void)dealloc;
-(void)sendMessage:(id)arg0 ;
-(void)session:(id)arg0 didRegisterPluginAllocationInfo:(id)arg1 ;
-(void)sessionDidJoinGroup:(id)arg0 participantUpdate:(id)arg1 error:(id)arg2 ;
-(void)start;
-(void)stop;


@end


#endif