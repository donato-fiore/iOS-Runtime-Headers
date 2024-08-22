// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKIDSSENDMESSAGEOPERATION_H
#define CRKIDSSENDMESSAGEOPERATION_H

@class CATOperation, NSString, NSDate, NSDictionary;
@protocol CRKIDSLocalPrimitives, CRKCancelable><CRKResumable;


#import "CRKIDSMessageOptions.h"

@interface CRKIDSSendMessageOperation : CATOperation

@property (readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives; // ivar: _IDSLocalPrimitives
@property (readonly, copy, nonatomic) NSString *destinationAddress; // ivar: _destinationAddress
@property (retain, nonatomic) NSDate *initialSendDate; // ivar: _initialSendDate
@property (readonly, copy, nonatomic) NSDictionary *message; // ivar: _message
@property (copy, nonatomic) NSString *messageSendIdentifier; // ivar: _messageSendIdentifier
@property (retain, nonatomic) NSObject<CRKCancelable><CRKResumable> *messageSendSubscription; // ivar: _messageSendSubscription
@property (readonly, nonatomic) CRKIDSMessageOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *sourceAppleID; // ivar: _sourceAppleID


-(BOOL)isAsynchronous;
-(id)initWithIDSLocalPrimitives:(id)arg0 message:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 options:(id)arg4 ;
-(void)cancel;
-(void)didSendMessageWithIdentifier:(id)arg0 sendSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)main;


@end


#endif