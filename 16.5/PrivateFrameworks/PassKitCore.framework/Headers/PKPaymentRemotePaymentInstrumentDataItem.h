// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREMOTEPAYMENTINSTRUMENTDATAITEM_H
#define PKPAYMENTREMOTEPAYMENTINSTRUMENTDATAITEM_H

@class CNContact;


#import "PKPaymentDataItem.h"
#import "PKPaymentApplication.h"
#import "PKRemoteDevice.h"
#import "PKRemotePaymentInstrument.h"

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) CNContact *billingAddress;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) PKRemoteDevice *remoteDevice;
@property (readonly, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (readonly, nonatomic) BOOL requiresBillingAddress;


+(NSInteger)dataType;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;
-(NSUInteger)peerPaymentAccountState;
-(id)errors;
-(id)paymentContactFormatErrors;
-(id)peerPaymentAccountBalance;


@end


#endif