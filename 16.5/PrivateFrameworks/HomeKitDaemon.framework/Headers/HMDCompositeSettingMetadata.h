// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPOSITESETTINGMETADATA_H
#define HMDCOMPOSITESETTINGMETADATA_H

@class HMFObject, NSString;
@protocol HMDCompositeSettingConstraint;


#import "HMDCompositeSettingPrivileges.h"

@interface HMDCompositeSettingMetadata : HMFObject

@property (readonly) NSObject<HMDCompositeSettingConstraint> *constraint; // ivar: _constraint
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly) HMDCompositeSettingPrivileges *privileges; // ivar: _privileges


-(id)initWithKeyPath:(id)arg0 constraint:(id)arg1 privileges:(id)arg2 ;


@end


#endif