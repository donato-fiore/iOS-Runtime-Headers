// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXVOICEMAILOBSERVERXPCCLIENT_H
#define CXVOICEMAILOBSERVERXPCCLIENT_H

@class NSXPCConnection, NSString, NSHashTable, NSMutableDictionary, NSDictionary;
@protocol CXVoicemailObserverDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXVoicemailObserverXPCClient : NSObject <CXVoicemailObserverDataSource>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *mutableVoicemailUUIDToVoicemailMap; // ivar: _mutableVoicemailUUIDToVoicemailMap
@property (readonly, nonatomic) int notifyToken; // ivar: _notifyToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *voicemailUUIDToVoicemailMap;


+(id)sharedXPCClient;
+(id)sharedXPCClientSemaphore;
+(void)releaseSharedXPCClient;
-(id)_init;
// -(id)_remoteObjectProxyWithErrorHandler:(id)arg0 isSynchronous:(unk)arg1  ;
-(id)init;
-(void)_addOrUpdateVoicemails:(id)arg0 ;
-(void)_invalidate;
-(void)_removeVoicemails:(id)arg0 ;
-(void)_requestVoicemails;
-(void)addDelegate:(id)arg0 ;
-(void)addOrUpdateVoicemails:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeDelegate:(id)arg0 ;
-(void)removeVoicemails:(id)arg0 ;
-(void)requestTransaction:(id)arg0 completion:(id)arg1 ;


@end


#endif