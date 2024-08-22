// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCERTIFICATEEXCHANGEBROADCASTHANDLER_H
#define CRKCERTIFICATEEXCHANGEBROADCASTHANDLER_H

@protocol CRKIDSMessageBroadcastHandling, CRKIDSPrimitives, CRKAppleIDProviding, CRKCertificateExchangeBroadcastHandlerDelegate;

#import <Foundation/Foundation.h>


@interface CRKCertificateExchangeBroadcastHandler : NSObject <CRKIDSMessageBroadcastHandling>



@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *IDSPrimitives; // ivar: _IDSPrimitives
@property (readonly, nonatomic) NSObject<CRKAppleIDProviding> *appleIDProvider; // ivar: _appleIDProvider
@property (weak, nonatomic) NSObject<CRKCertificateExchangeBroadcastHandlerDelegate> *delegate; // ivar: _delegate


-(id)initWithIDSPrimitives:(id)arg0 appleIDProvider:(id)arg1 ;
-(void)processMessage:(id)arg0 senderAppleID:(id)arg1 senderAddress:(id)arg2 ;


@end


#endif