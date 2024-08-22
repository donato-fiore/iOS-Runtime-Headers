// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSTUDENTDAEMONPROXY_H
#define CRKSTUDENTDAEMONPROXY_H

@class CATTaskClient, CATOperationQueue, NSHashTable, NSString;
@protocol CATTaskClientDelegate, CRKRequestPerformingProtocol;

#import <Foundation/Foundation.h>


@interface CRKStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol>

 {
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    NSHashTable *mObservers;
    NSInteger mConnectionAttempt;
    BOOL mConnecting;
}


@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maxConnectionAttempts; // ivar: _maxConnectionAttempts
@property (readonly) Class superclass;
@property (nonatomic) BOOL userExpectsReconnect; // ivar: _userExpectsReconnect


+(id)studentDaemonProxy;
+(void)fetchResourceFromURL:(id)arg0 completion:(id)arg1 ;
+(void)setActiveStudentIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)studentDidAuthenticate:(id)arg0 completion:(id)arg1 ;
-(id)enqueuedOperationForRequest:(id)arg0 ;
-(id)init;
-(id)operationForRequest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)client:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)client:(id)arg0 didReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)clientDidConnect:(id)arg0 ;
-(void)clientDidDisconnect:(id)arg0 ;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)enqueueOperation:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif