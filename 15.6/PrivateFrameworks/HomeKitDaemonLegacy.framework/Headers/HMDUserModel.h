// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERMODEL_H
#define HMDUSERMODEL_H

@class NSNumber, NSString, NSDictionary;


#import "HMDBackingStoreModelObject.h"
#import "HMDAccountHandle.h"
#import "HMDAccountIdentifier.h"

@interface HMDUserModel : HMDBackingStoreModelObject

@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, nonatomic) NSNumber *announceAccessAllowed;
@property (retain, nonatomic) NSNumber *announceAccessLevel;
@property (retain, nonatomic) NSNumber *camerasAccessLevel;
@property (retain, nonatomic) NSString *changeTag;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) NSString *userID;


+(id)properties;


@end


#endif