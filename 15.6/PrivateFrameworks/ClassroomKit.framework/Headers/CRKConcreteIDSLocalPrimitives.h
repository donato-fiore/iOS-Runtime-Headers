// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCONCRETEIDSLOCALPRIMITIVES_H
#define CRKCONCRETEIDSLOCALPRIMITIVES_H

@class IDSAccountController, NSArray, NSMutableArray, NSString, NSDictionary, NSHashTable, IDSService;
@protocol IDSServiceDelegate, IDSAccountControllerDelegate, CRKConcreteIDSMessageDidSendSubscriptionDelegate, CRKConcreteIDSMessageDidReceiveSubscriptionDelegate, CRKIDSLocalPrimitives;

#import <Foundation/Foundation.h>

#import "CRKArrayDifferenceEngine.h"

@interface CRKConcreteIDSLocalPrimitives : NSObject <IDSServiceDelegate, IDSAccountControllerDelegate, CRKConcreteIDSMessageDidSendSubscriptionDelegate, CRKConcreteIDSMessageDidReceiveSubscriptionDelegate, CRKIDSLocalPrimitives>



@property (readonly, nonatomic) IDSAccountController *accountController; // ivar: _accountController
@property (readonly, copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) CRKArrayDifferenceEngine *accountsDifferenceEngine; // ivar: _accountsDifferenceEngine
@property (readonly, nonatomic) NSMutableArray *backingAccounts; // ivar: _backingAccounts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSHashTable *didReceiveSubscriptions; // ivar: _didReceiveSubscriptions
@property (readonly, nonatomic) NSHashTable *didSendSubscriptions; // ivar: _didSendSubscriptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(id)makeAccountsDifferenceEngineForPrimitives:(id)arg0 ;
-(BOOL)sendMessage:(id)arg0 toAddress:(id)arg1 fromID:(id)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)subscribeToMessageReceivesWithHandler:(id)arg0 ;
-(id)subscribeToMessageSendsWithHandler:(id)arg0 ;
-(void)accountController:(id)arg0 accountAdded:(id)arg1 ;
-(void)accountController:(id)arg0 accountRemoved:(id)arg1 ;
-(void)didReceiveSubscriptionDidCancel:(id)arg0 ;
-(void)didReceiveSubscriptionDidResume:(id)arg0 ;
-(void)didSendSubscriptionDidCancel:(id)arg0 ;
-(void)didSendSubscriptionDidResume:(id)arg0 ;
-(void)insertAccounts:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertObject:(id)arg0 inAccountsAtIndex:(NSUInteger)arg1 ;
-(void)publishAccountChanges;
-(void)removeAccountsAtIndexes:(id)arg0 ;
-(void)removeObjectFromAccountsAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectInAccountsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif