// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKLOCALBACKEDIDSPRIMITIVES_H
#define CRKLOCALBACKEDIDSPRIMITIVES_H

@class NSDictionary, CATOperationQueue;
@protocol CRKIDSPrimitives, CRKIDSLocalPrimitives;

#import <Foundation/Foundation.h>


@interface CRKLocalBackedIDSPrimitives : NSObject <CRKIDSPrimitives>



@property (readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives; // ivar: _IDSLocalPrimitives
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue


-(id)initWithIDSLocalPrimitives:(id)arg0 ;
-(id)initWithIDSLocalPrimitives:(id)arg0 operationQueue:(id)arg1 ;
-(id)operationDebugInfo;
-(void)sendMessage:(id)arg0 destinationAddress:(id)arg1 sourceAppleID:(id)arg2 completion:(id)arg3 ;
-(void)sendMessage:(id)arg0 destinationAddress:(id)arg1 sourceAppleID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
// -(void)subscribeToMessagesWithHandler:(id)arg0 completion:(unk)arg1  ;


@end


#endif