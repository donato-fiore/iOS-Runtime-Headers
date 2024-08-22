// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCARKITSERVICECLIENT_H
#define CRCARKITSERVICECLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CRCarKitServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(id)serviceQueue;
-(id)init;
// -(void)_serviceQueuePerformBlock:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_setupConnection;
-(void)dealloc;
// -(void)performServiceBlock:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)performSynchronousServiceBlock:(id)arg0 errorHandler:(unk)arg1  ;


@end


#endif