// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKREQUESTPERFORMERBACKEDIDSPRIMITIVES_H
#define CRKREQUESTPERFORMERBACKEDIDSPRIMITIVES_H

@class NSDictionary, CATOperationQueue;
@protocol CRKIDSPrimitives, CRKRequestPerformingProtocol;

#import <Foundation/Foundation.h>


@interface CRKRequestPerformerBackedIDSPrimitives : NSObject <CRKIDSPrimitives>



@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSObject<CRKRequestPerformingProtocol> *requestPerformer; // ivar: _requestPerformer


-(id)initWithRequestPerformer:(id)arg0 operationQueue:(id)arg1 ;
-(void)addAllowedAppleIDsToFirewall:(id)arg0 completion:(id)arg1 ;
-(void)fetchFirewallAllowedAppleIDs:(id)arg0 ;
-(void)removeAllowedAppleIDsFromFirewall:(id)arg0 completion:(id)arg1 ;
-(void)sendMessage:(id)arg0 destinationAddress:(id)arg1 sourceAppleID:(id)arg2 completion:(id)arg3 ;
-(void)sendMessage:(id)arg0 destinationAddress:(id)arg1 sourceAppleID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
// -(void)subscribeToMessagesWithHandler:(id)arg0 completion:(unk)arg1  ;


@end


#endif