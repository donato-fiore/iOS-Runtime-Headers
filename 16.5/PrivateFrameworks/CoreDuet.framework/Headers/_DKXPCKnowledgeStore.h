// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKXPCKNOWLEDGESTORE_H
#define _DKXPCKNOWLEDGESTORE_H

@class NSXPCConnection;
@protocol _DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing;

#import <Foundation/Foundation.h>


@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing>



@property (retain) NSXPCConnection *connection; // ivar: _connection


+(id)XPCKnowledgeStore;
+(id)XPCUserKnowledgeStore;
-(BOOL)confirmConnectionWithError:(*id)arg0 ;
-(BOOL)deleteObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRemoteState:(*id)arg0 ;
-(BOOL)saveObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)synchronizeWithError:(*id)arg0 ;
-(BOOL)synchronizeWithUrgency:(NSUInteger)arg0 client:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)deleteAllEventsInEventStream:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteAllEventsInEventStream:(id)arg0 synchronous:(BOOL)arg1 error:(*id)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(NSUInteger)deleteAllEventsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteAllEventsMatchingPredicate:(id)arg0 synchronous:(BOOL)arg1 error:(*id)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(id)deleteObjects:(id)arg0 synchronous:(BOOL)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(id)deviceUUID;
-(id)executeQuery:(id)arg0 error:(*id)arg1 ;
-(id)executeQuery:(id)arg0 synchronous:(BOOL)arg1 error:(*id)arg2 responseQueue:(id)arg3 withCompletion:(id)arg4 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)saveObjects:(id)arg0 synchronous:(BOOL)arg1 responseQueue:(id)arg2 withCompletion:(id)arg3 ;
-(id)sourceDeviceIdentityFromObject:(id)arg0 error:(*id)arg1 ;
-(id)sourceDeviceIdentityWithError:(*id)arg0 ;
-(void)dealloc;
-(void)deleteAllEventsInEventStream:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteObjects:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)saveObjects:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
// -(void)saveObjects:(id)arg0 tracker:(id)arg1 responseQueue:(unk)arg2 withCompletion:(id)arg3  ;
-(void)synchronizeWithUrgency:(NSUInteger)arg0 client:(id)arg1 responseQueue:(id)arg2 completion:(id)arg3 ;


@end


#endif