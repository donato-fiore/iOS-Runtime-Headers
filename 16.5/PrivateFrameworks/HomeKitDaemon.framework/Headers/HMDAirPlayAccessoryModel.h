// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAIRPLAYACCESSORYMODEL_H
#define HMDAIRPLAYACCESSORYMODEL_H

@class NSString, NSNumber, HMFPairingIdentity;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDMediaAccessoryModel.h"

@interface HMDAirPlayAccessoryModel : HMDMediaAccessoryModel <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *minimumUserPriviledge;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSString *password;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;


@end


#endif