// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSBOOKSETTINGSDEFAULTBEHAVIOR_H
#define PKPASSBOOKSETTINGSDEFAULTBEHAVIOR_H

@class PKPassLibraryDefaultDataProvider, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults, NSString;
@protocol PKPassbookSettingsDataSource, PKPaymentSetupDelegate;

#import <Foundation/Foundation.h>

#import "PKPassbookPeerPaymentSettingsDefaultBehavior.h"

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource>

 {
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentOptionsDefaults *_options;
    PKPassbookPeerPaymentSettingsDefaultBehavior *_peerPaymentDefaultBehavior;
    id<PKPaymentSetupDelegate> *_setupDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)deviceSupportsInAppPayments;
-(BOOL)hasFelicaSecureElement;
-(BOOL)secureElementIsProductionSigned;
-(BOOL)supportsCredentialType:(NSInteger)arg0 ;
-(id)deviceName;
-(id)init;
-(id)optionsDelegate;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)peerPaymentDataSource;
-(id)peerPaymentDelegate;
-(id)secureElementID;
-(id)setupDelegate;
-(void)dealloc;
-(void)setSetupDelegate:(id)arg0 ;


@end


#endif