// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTUPDATEPREFERENCESREQUEST_H
#define PKPEERPAYMENTUPDATEPREFERENCESREQUEST_H



#import "PKPeerPaymentWebServiceRequest.h"
#import "PKPeerPaymentPreferences.h"

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest

@property (retain, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences; // ivar: _peerPaymentPreferences


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithPeerPaymentPreferences:(id)arg0 ;


@end


#endif