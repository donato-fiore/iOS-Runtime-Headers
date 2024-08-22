// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNETWORKPROTECTIONMODEOPTIONITEM_H
#define HUNETWORKPROTECTIONMODEOPTIONITEM_H

@class HFItem, HMAccessoryNetworkProtectionGroup;



@interface HUNetworkProtectionModeOptionItem : HFItem

@property (readonly, copy, nonatomic) HMAccessoryNetworkProtectionGroup *group; // ivar: _group
@property (readonly, nonatomic) NSInteger targetProtectionModeOption; // ivar: _targetProtectionModeOption


+(NSInteger)_priorityForTargetProtectionMode:(NSInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithGroup:(id)arg0 targetProtectionModeOption:(NSInteger)arg1 ;


@end


#endif