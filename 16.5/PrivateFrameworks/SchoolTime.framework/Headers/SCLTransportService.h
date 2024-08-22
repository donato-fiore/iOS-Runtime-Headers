// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLTRANSPORTSERVICE_H
#define SCLTRANSPORTSERVICE_H

@class NSString, IDSService, NSHashTable;
@protocol IDSServiceDelegate, IDSServiceDelegatePrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SCLTransportService : NSObject <IDSServiceDelegate, IDSServiceDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (readonly, nonatomic) NSHashTable *transportControllers; // ivar: _transportControllers


-(BOOL)sendProtobuf:(id)arg0 toDevice:(id)arg1 options:(id)arg2 identifier:(*id)arg3 error:(*id)arg4 ;
-(id)initWithTargetQueue:(id)arg0 service:(id)arg1 ;
-(id)transportControllerForDevice:(id)arg0 ;
-(void)addTransportController:(id)arg0 ;
-(void)removeTransportController:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 fromID:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)start;


@end


#endif