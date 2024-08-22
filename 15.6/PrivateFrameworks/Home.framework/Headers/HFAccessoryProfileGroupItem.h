// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYPROFILEGROUPITEM_H
#define HFACCESSORYPROFILEGROUPITEM_H

@class NSString, NSNumber, NSSet;
@protocol HFAccessoryProfileVendor, NSCopying, HFCharacteristicValueSource;


#import "HFItemGroupItem.h"

@interface HFAccessoryProfileGroupItem : HFItemGroupItem <HFAccessoryProfileVendor, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *profiles; // ivar: _profiles
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)_buildProfileItems;
-(id)accessories;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithProfiles:(id)arg0 groupIdentifier:(id)arg1 valueSource:(id)arg2 ;


@end


#endif