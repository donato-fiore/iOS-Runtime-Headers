// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERMODEL_H
#define HMDUSERMODEL_H

@class NSNumber, NSString, NSDictionary;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"
#import "HMDAccountHandle.h"
#import "HMDAccountIdentifier.h"

@interface HMDUserModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, nonatomic) NSNumber *announceAccessAllowed;
@property (retain, nonatomic) NSNumber *announceAccessLevel;
@property (retain, nonatomic) NSNumber *camerasAccessLevel;
@property (retain, nonatomic) NSString *changeTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *remoteAccessAllowed;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *userID;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;


@end


#endif