// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYACCESSTOKEN_H
#define HMDRELAYACCESSTOKEN_H

@class HMFObject, NSData, NSUUID, NSString;
@protocol HMFDumpState, HMDBackingStoreObjectProtocol, NSSecureCoding;


#import "HMDHAPAccessory.h"
#import "HMDRelayAccessTokenModel.h"
#import "HMDUser.h"

@interface HMDRelayAccessToken : HMFObject <HMFDumpState, HMDBackingStoreObjectProtocol, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *accessToken; // ivar: _accessToken
@property (weak, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSUUID *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) HMDRelayAccessTokenModel *model;
@property (readonly) Class superclass;
@property (weak, nonatomic) HMDUser *user; // ivar: _user
@property (retain, nonatomic) NSUUID *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)deleteTokenInAccessoryModel;
-(id)dumpState;
-(id)init;
-(id)initWithAccessToken:(id)arg0 consentToken:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 model:(id)arg1 ;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(void)configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fixupUserIdentifier;
-(void)migrateCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif