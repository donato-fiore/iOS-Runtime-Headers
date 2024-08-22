// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICEIDXPCCONNECTION_H
#define CSVOICEIDXPCCONNECTION_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceIdXPCConnection : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithConnection:(id)arg0 ;
-(void)_handleClientError:(id)arg0 client:(id)arg1 ;
-(void)_handleClientEvent:(id)arg0 ;
-(void)_handleClientMessage:(id)arg0 client:(id)arg1 ;
-(void)_sendReplyMessageWithResult:(BOOL)arg0 error:(id)arg1 event:(id)arg2 client:(id)arg3 ;
-(void)activateConnection;


@end


#endif