// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAIRPLAYACCESSORYMODEL_H
#define HMDAIRPLAYACCESSORYMODEL_H

@class NSNumber, HMFPairingIdentity, NSString;


#import "HMDMediaAccessoryModel.h"

@interface HMDAirPlayAccessoryModel : HMDMediaAccessoryModel

@property (retain, nonatomic) NSNumber *minimumUserPriviledge;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSString *password;


+(id)properties;


@end


#endif