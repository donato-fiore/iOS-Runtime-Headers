// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYNETWORKPROTECTIONGROUP_H
#define HMACCESSORYNETWORKPROTECTIONGROUP_H

@class NSArray, NSString, NSUUID;
@protocol HMObjectMerge, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessoryCategory.h"
#import "HMHome.h"

@interface HMAccessoryNetworkProtectionGroup : NSObject <HMObjectMerge, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSArray *accessories;
@property (retain) HMAccessoryCategory *category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMHome *home; // ivar: _home
@property (copy) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) Class superclass;
@property NSInteger targetProtectionMode; // ivar: _targetProtectionMode
@property (readonly) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 manufacturer:(id)arg1 category:(id)arg2 protectionMode:(NSInteger)arg3 ;
-(void)_configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateProtectionMode:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif