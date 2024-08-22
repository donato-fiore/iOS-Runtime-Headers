// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTUPDATEPREFERENCESRESPONSE_H
#define PKPEERPAYMENTUPDATEPREFERENCESRESPONSE_H



#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPeerPaymentPreferences.h"

@interface PKPeerPaymentUpdatePreferencesResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences; // ivar: _peerPaymentPreferences


-(id)initWithData:(id)arg0 ;


@end


#endif