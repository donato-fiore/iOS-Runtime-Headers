// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFNETWORKCONFIGURATIONGROUPITEM_H
#define HFNETWORKCONFIGURATIONGROUPITEM_H

@class NSString, HMAccessoryNetworkProtectionGroup, NSSet;
@protocol HFHomeKitItemProtocol, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItemGroupItem.h"

@interface HFNetworkConfigurationGroupItem : HFItemGroupItem <HFHomeKitItemProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMAccessoryNetworkProtectionGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSSet *profiles;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithGroup:(id)arg0 valueSource:(id)arg1 ;


@end


#endif