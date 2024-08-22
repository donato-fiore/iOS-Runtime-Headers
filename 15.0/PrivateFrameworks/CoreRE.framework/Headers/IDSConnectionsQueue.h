// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCONNECTIONSQUEUE_H
#define IDSCONNECTIONSQUEUE_H

@class NSMutableDictionary, NSString, NSMutableArray, IDSService;
@protocol IDSSessionDelegatePrivate, IDSServiceDelegatePrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSConnectionsQueue : NSObject <IDSSessionDelegatePrivate, IDSServiceDelegatePrivate>



@property (retain, nonatomic) NSMutableDictionary *allConnections; // ivar: _allConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *endedConnections; // ivar: _endedConnections
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *pendingConnections; // ivar: _pendingConnections
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithIDSService:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)dequeSession:(id)arg0 ;
-(void)queueNewSessionForDestination:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 inviteReceivedForSession:(id)arg2 fromID:(id)arg3 withOptions:(id)arg4 ;
-(void)sessionEnded:(id)arg0 ;
-(void)sessionEnded:(id)arg0 withReason:(unsigned int)arg1 error:(id)arg2 ;
-(void)sessionStarted:(id)arg0 ;


@end


#endif