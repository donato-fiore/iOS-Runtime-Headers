// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUIDEVICETODEVICEENCRYPTIONFLOWCONTEXT_H
#define CDPUIDEVICETODEVICEENCRYPTIONFLOWCONTEXT_H

@class NSString, UIViewController;

#import <Foundation/Foundation.h>


@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject

@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) NSInteger deviceToDeviceEncryptionUpgradeType; // ivar: _deviceToDeviceEncryptionUpgradeType
@property (nonatomic) NSInteger deviceToDeviceEncryptionUpgradeUIStyle; // ivar: _deviceToDeviceEncryptionUpgradeUIStyle
@property (copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) NSString *securityUpgradeContext; // ivar: _securityUpgradeContext


-(id)initWithAltDSID:(id)arg0 ;


@end


#endif