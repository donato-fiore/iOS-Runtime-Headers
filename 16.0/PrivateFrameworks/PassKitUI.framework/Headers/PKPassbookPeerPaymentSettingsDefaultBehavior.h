// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSBOOKPEERPAYMENTSETTINGSDEFAULTBEHAVIOR_H
#define PKPASSBOOKPEERPAYMENTSETTINGSDEFAULTBEHAVIOR_H

@class PKPaymentWebService, PKPeerPaymentWebService, NSString;
@protocol PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate;

#import <Foundation/Foundation.h>


@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate>

 {
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentWebService *_peerPaymentWebService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)peerPaymentWebService;
-(void)_registerForPeerPaymentWithCompletion:(id)arg0 ;
-(void)_unregisterForPeerPaymentWithCompletion:(id)arg0 ;
-(void)peerPaymentRegistrationStatusHasChanged:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif