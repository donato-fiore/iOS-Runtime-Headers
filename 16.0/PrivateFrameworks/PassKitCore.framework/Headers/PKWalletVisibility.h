// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWALLETVISIBILITY_H
#define PKWALLETVISIBILITY_H


#import <Foundation/Foundation.h>


@interface PKWalletVisibility : NSObject



+(BOOL)isWalletRestricted;
+(BOOL)isWalletVisible;
+(id)setOfActiveRestrictionUUIDs;
+(void)isWalletPrefPaneVisibleWithCompletion:(id)arg0 ;
+(void)isWalletPreferencesAndPaymentSetupAvailableWithWebService:(id)arg0 completion:(id)arg1 ;
+(void)updateWalletVisibility;


@end


#endif