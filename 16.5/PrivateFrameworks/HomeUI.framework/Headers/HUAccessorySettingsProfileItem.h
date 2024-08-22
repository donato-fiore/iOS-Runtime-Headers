// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYSETTINGSPROFILEITEM_H
#define HUACCESSORYSETTINGSPROFILEITEM_H

@class HFItem, MCProfile, HMSetting, NSUUID;



@interface HUAccessorySettingsProfileItem : HFItem

@property (readonly, nonatomic) MCProfile *profile; // ivar: _profile
@property (readonly, nonatomic) HMSetting *setting; // ivar: _setting
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProfile:(id)arg0 setting:(id)arg1 ;


@end


#endif