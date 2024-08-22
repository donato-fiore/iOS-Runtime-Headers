// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRESIDENTUSER_H
#define HMDRESIDENTUSER_H



#import "HMDUser.h"
#import "HMDDevice.h"

@interface HMDResidentUser : HMDUser

@property (readonly, getter=isBlocked) BOOL blocked;
@property NSUInteger configurationState; // ivar: _configurationState
@property (readonly) HMDDevice *device; // ivar: _device


+(BOOL)supportsSecureCoding;
-(BOOL)refreshDisplayName;
-(BOOL)requiresMakoSupport;
-(BOOL)updateWithDevice:(id)arg0 ;
-(id)displayName;
-(id)encodingRemoteDisplayName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 home:(id)arg1 pairingIdentity:(id)arg2 configurationState:(NSUInteger)arg3 ;
-(id)initWithModelObject:(id)arg0 ;
-(id)legacyUser;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)userID;
-(void)configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)registerIdentity;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif