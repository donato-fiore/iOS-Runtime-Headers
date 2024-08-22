// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIASYSTEMCOMPONENT_H
#define HMDMEDIASYSTEMCOMPONENT_H

@class HMFObject, NSString, HMMediaSystemRole, NSUUID;
@protocol NSSecureCoding, HMFDumpState, HMFLogging, HMFLocking, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDMediaProfile.h"

@interface HMDMediaSystemComponent : HMFObject <NSSecureCoding, HMFDumpState, HMFLogging>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDMediaProfile *mediaProfile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // ivar: _propertyQueue
@property (readonly, nonatomic) HMMediaSystemRole *role; // ivar: _role
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)decodeComponents:(id)arg0 leftUUID:(*id)arg1 leftAccessory:(*id)arg2 rightUUID:(*id)arg3 rightAccessory:(*id)arg4 ;
+(BOOL)supportsSecureCoding;
+(id)accessoryForMediaSystemComponentWithDictionary:(id)arg0 home:(id)arg1 ;
+(id)componentsWithLeftComponent:(id)arg0 leftAccessory:(id)arg1 rightComponent:(id)arg2 rightAccessory:(id)arg3 ;
+(id)logCategory;
+(id)mediaSystemComponentWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)attributeDescriptions;
-(id)dumpState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 accessory:(id)arg1 role:(id)arg2 ;
-(id)logIdentifier;
-(id)privateDescription;
-(id)serialize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif