// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATTASKBLOCKSERVER_H
#define CATTASKBLOCKSERVER_H

@class NSMutableDictionary, NSMutableSet, NSMapTable, NSArray, NSString;
@protocol CATTaskServerDelegate;

#import <Foundation/Foundation.h>

#import "CATTaskServer.h"

@interface CATTaskBlockServer : NSObject <CATTaskServerDelegate>

 {
    CATTaskServer *mServer;
    NSMutableDictionary *mOperationBlocksByRequestClassName;
    NSMutableSet *mLongRunningOperationRequestClassNames;
    NSMapTable *mLongRunningOperationsByUUID;
}


@property (readonly, copy, nonatomic) NSArray *clientSessions; // ivar: _clientSessions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didInvalidate; // ivar: _didInvalidate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *sessionDidConnect; // ivar: _sessionDidConnect
@property (copy, nonatomic) id *sessionDidDisconnect; // ivar: _sessionDidDisconnect
@property (copy, nonatomic) id *sessionDidInterruptWithError; // ivar: _sessionDidInterruptWithError
@property (copy, nonatomic) id *sessionDidInvalidate; // ivar: _sessionDidInvalidate
@property (copy, nonatomic) id *sessionDidReceiveNotification; // ivar: _sessionDidReceiveNotification
@property (readonly) Class superclass;


-(id)createClientTransport;
-(id)init;
-(id)server:(id)arg0 clientSession:(id)arg1 operationForRequest:(id)arg2 error:(*id)arg3 ;
-(void)cancelLongRunningOperationsForRequestClass:(Class)arg0 ;
-(void)dealloc;
-(void)disconnectAllClientSessions;
-(void)invalidate;
-(void)postNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
// -(void)registerBlock:(id)arg0 forRequestClass:(unk)arg1  ;
-(void)registerLongRunningOperationForRequestClass:(Class)arg0 ;
-(void)server:(id)arg0 clientSession:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)server:(id)arg0 clientSession:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)server:(id)arg0 clientSessionDidConnect:(id)arg1 ;
-(void)server:(id)arg0 clientSessionDidDisconnect:(id)arg1 ;
-(void)server:(id)arg0 clientSessionDidInvalidate:(id)arg1 ;
-(void)serverDidInvalidate:(id)arg0 ;


@end


#endif