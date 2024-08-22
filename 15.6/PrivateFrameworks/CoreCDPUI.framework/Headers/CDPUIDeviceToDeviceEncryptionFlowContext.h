// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPUIDEVICETODEVICEENCRYPTIONFLOWCONTEXT_H
#define CDPUIDEVICETODEVICEENCRYPTIONFLOWCONTEXT_H

@class NSString, CDPLocalSecret, UIViewController, CDPContext;

#import <Foundation/Foundation.h>


@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject

@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) CDPLocalSecret *cachedLocalSecret; // ivar: _cachedLocalSecret
@property (nonatomic) NSInteger deviceToDeviceEncryptionUpgradeType; // ivar: _deviceToDeviceEncryptionUpgradeType
@property (nonatomic) NSInteger deviceToDeviceEncryptionUpgradeUIStyle; // ivar: _deviceToDeviceEncryptionUpgradeUIStyle
@property (copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (nonatomic) BOOL forceInlinePresentation; // ivar: _forceInlinePresentation
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) CDPContext *repairContext; // ivar: _repairContext
@property (nonatomic) BOOL requiresSynchronousRepair; // ivar: _requiresSynchronousRepair
@property (copy, nonatomic) NSString *securityUpgradeContext; // ivar: _securityUpgradeContext


-(id)initWithAltDSID:(id)arg0 ;


@end


#endif