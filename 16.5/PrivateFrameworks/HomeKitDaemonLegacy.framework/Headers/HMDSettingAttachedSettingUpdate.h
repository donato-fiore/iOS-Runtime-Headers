// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSETTINGATTACHEDSETTINGUPDATE_H
#define HMDSETTINGATTACHEDSETTINGUPDATE_H

@class HMFObject, NSString, HMSettingValue;



@interface HMDSettingAttachedSettingUpdate : HMFObject

@property (readonly) NSString *keyPath; // ivar: _keyPath
@property (readonly) HMSettingValue *settingValue; // ivar: _settingValue


-(id)initWithKeyPath:(id)arg0 settingValue:(id)arg1 ;


@end


#endif