// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYNETWORKPROTECTIONGROUP_H
#define HMDACCESSORYNETWORKPROTECTIONGROUP_H

@class NSNumber, NSString, NSUUID;
@protocol NSSecureCoding, HMDBackingStoreObjectProtocol;

#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDAccessoryNetworkProtectionGroup : NSObject <NSSecureCoding, HMDBackingStoreObjectProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSNumber *category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetProtectionMode; // ivar: _targetProtectionMode
@property (readonly) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithUUID:(id)arg0 manufacturer:(id)arg1 category:(id)arg2 targetProtectionMode:(NSInteger)arg3 ;
-(id)modelForVersion:(NSInteger)arg0 ;
-(id)modelWithObjectChangeType:(NSUInteger)arg0 ;
-(void)configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif