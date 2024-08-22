// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHASMCERTIFICATESOPERATION_H
#define CRKFETCHASMCERTIFICATESOPERATION_H

@class CATOperation, DMFControlGroupIdentifier, NSString, NSData;
@protocol CRKIDSPrimitives, CRKIDSAddressTranslator, CRKCancelable;



@interface CRKFetchASMCertificatesOperation : CATOperation

@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *IDSPrimitives; // ivar: _IDSPrimitives
@property (readonly, nonatomic) NSObject<CRKIDSAddressTranslator> *addressTranslator; // ivar: _addressTranslator
@property (readonly, nonatomic) DMFControlGroupIdentifier *controlGroupIdentifier; // ivar: _controlGroupIdentifier
@property (readonly, copy, nonatomic) NSString *destinationAppleID; // ivar: _destinationAppleID
@property (readonly, copy, nonatomic) NSString *destinationDeviceIdentifier; // ivar: _destinationDeviceIdentifier
@property (readonly, nonatomic) NSInteger destinationRole; // ivar: _destinationRole
@property (retain, nonatomic) NSObject<CRKCancelable> *messageReceiveSubscription; // ivar: _messageReceiveSubscription
@property (readonly, copy, nonatomic) NSData *requesterCertificate; // ivar: _requesterCertificate
@property (readonly, copy, nonatomic) NSString *sourceAppleID; // ivar: _sourceAppleID
@property (readonly, nonatomic) NSInteger sourceRole; // ivar: _sourceRole


-(BOOL)isAsynchronous;
-(id)initWithIDSPrimitives:(id)arg0 addressTranslator:(id)arg1 controlGroupIdentifier:(id)arg2 destinationAppleID:(id)arg3 sourceAppleID:(id)arg4 destinationDeviceIdentifier:(id)arg5 sourceRole:(NSInteger)arg6 destinationRole:(NSInteger)arg7 requesterCertificate:(id)arg8 ;
-(void)cancel;
-(void)didSendMessage:(id)arg0 ;
-(void)main;
-(void)operationWillFinish;
-(void)processMessage:(id)arg0 senderAppleID:(id)arg1 requestIdentifier:(id)arg2 ;


@end


#endif