// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMUTABLEHOMEWALLETKEYDEVICESTATE_H
#define HMMUTABLEHOMEWALLETKEYDEVICESTATE_H

@class NSString;


#import "HMHomeWalletKeyDeviceState.h"
#import "HMHomeWalletKey.h"

@interface HMMutableHomeWalletKeyDeviceState : HMHomeWalletKeyDeviceState

@property BOOL canAddWalletKey;
@property NSInteger canAddWalletKeyErrorCode;
@property (copy) NSString *expressEnablementConflictingPassDescription;
@property (copy) HMHomeWalletKey *walletKey;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif