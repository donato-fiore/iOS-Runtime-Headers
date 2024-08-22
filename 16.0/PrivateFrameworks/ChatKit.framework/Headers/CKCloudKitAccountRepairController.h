// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCLOUDKITACCOUNTREPAIRCONTROLLER_H
#define CKCLOUDKITACCOUNTREPAIRCONTROLLER_H

@class NSString, AAUIDeviceToDeviceEncryptionHelper;
@protocol AAUIDeviceToDeviceEncryptionHelperDelegate;

#import <Foundation/Foundation.h>


@interface CKCloudKitAccountRepairController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AAUIDeviceToDeviceEncryptionHelper *encryptionHelper; // ivar: _encryptionHelper
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)authenticationContextClass;
-(id)AAUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)arg0 ;
-(id)AKSecurityUpgradeContextMessages;
-(id)accountStore;
-(id)authenticationContext;
-(id)primaryAppleAccount;
-(void)beginRepairWithPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)deviceToDeviceEncryptionHelper:(id)arg0 shouldContinueUpgradingUserToHSA2WithCompletion:(id)arg1 ;


@end


#endif