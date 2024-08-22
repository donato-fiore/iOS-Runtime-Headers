// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMEDIASYSTEMCOMPONENT_H
#define HMMEDIASYSTEMCOMPONENT_H

@class HMFUnfairLock, NSString, NSUUID;
@protocol HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "HMMediaProfile.h"
#import "HMMediaSystemRole.h"

@interface HMMediaSystemComponent : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying>

 {
    HMFUnfairLock *_lock;
}


@property (weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMMediaProfile *mediaProfile; // ivar: _mediaProfile
@property (readonly, nonatomic) HMMediaSystemRole *role; // ivar: _role
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)mediaSystemComponentWithDictionary:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaProfile:(id)arg0 role:(id)arg1 ;
-(id)initWithUUID:(id)arg0 mediaProfile:(id)arg1 role:(id)arg2 ;
-(id)logIdentifier;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)serialize;
-(void)_unconfigure;
-(void)_updateAccessoryReference:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif