// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDSTOREKITCLIENTBROKER_H
#define ASDSTOREKITCLIENTBROKER_H

@class NSMapTable, NSString;
@protocol ASDStoreKitClientProtocol;

#import <Foundation/Foundation.h>


@interface ASDStoreKitClientBroker : NSObject <ASDStoreKitClientProtocol>

 {
    NSMapTable *_clients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultBroker;
-(id)init;
-(void)askToShowMessageWithReplyBlock:(id)arg0 ;
-(void)downloadAdded:(id)arg0 ;
-(void)downloadRemoved:(id)arg0 ;
-(void)downloadStatusChanged:(id)arg0 ;
-(void)handleAuthenticateRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)receivedStatuses:(id)arg0 ;
-(void)receivedTransactions:(id)arg0 ;
-(void)registerClient:(id)arg0 withIdentifier:(id)arg1 ;
-(void)removedEntitlementsForProductIdentifiers:(id)arg0 ;
-(void)removedTransactions:(id)arg0 ;
-(void)storefrontChanged:(id)arg0 ;
-(void)unregisterClientWithIdentifier:(id)arg0 ;
-(void)updatedTransactions:(id)arg0 ;


@end


#endif