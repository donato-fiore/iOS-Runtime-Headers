// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKIDSWAITANDSENDIDSMESSAGEOPERATION_H
#define CRKIDSWAITANDSENDIDSMESSAGEOPERATION_H

@class CATOperation, NSString, NSDictionary;
@protocol CRKIDSLocalPrimitives, CRKIDSReadinessEvaluating;


#import "CRKIDSMessageOptions.h"

@interface CRKIDSWaitAndSendIDSMessageOperation : CATOperation

@property (readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives; // ivar: _IDSLocalPrimitives
@property (readonly, copy, nonatomic) NSString *destinationAddress; // ivar: _destinationAddress
@property (retain, nonatomic) CATOperation *evaluateReadinessOperation; // ivar: _evaluateReadinessOperation
@property (readonly, copy, nonatomic) NSDictionary *message; // ivar: _message
@property (readonly, nonatomic) CRKIDSMessageOptions *options; // ivar: _options
@property (readonly, nonatomic) NSObject<CRKIDSReadinessEvaluating> *readinessEvaluator; // ivar: _readinessEvaluator
@property (retain, nonatomic) CATOperation *sendMessageOperation; // ivar: _sendMessageOperation
@property (readonly, copy, nonatomic) NSString *sourceAppleID; // ivar: _sourceAppleID


-(BOOL)isAsynchronous;
-(id)initWithIDSLocalPrimitives:(id)arg0 IDSReadinessEvaluator:(id)arg1 message:(id)arg2 destinationAddress:(id)arg3 sourceAppleID:(id)arg4 options:(id)arg5 ;
-(void)cancel;
-(void)evaluateReadinessOperationDidFinish:(id)arg0 ;
-(void)main;
-(void)run;
-(void)sendMessage;
-(void)sendMessageOperationDidFinish:(id)arg0 ;


@end


#endif