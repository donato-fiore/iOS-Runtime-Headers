// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETTINGTRANSFORM_H
#define HMDACCESSORYSETTINGTRANSFORM_H


#import <Foundation/Foundation.h>


@interface HMDAccessorySettingTransform : NSObject



+(id)mergeWithGroupMetadata:(id)arg0 group:(id)arg1 ;
+(id)modelForGroup:(id)arg0 ;
+(id)modelForSetting:(id)arg0 ;
+(id)modelForSetting:(id)arg0 identifier:(id)arg1 parentIdentifier:(id)arg2 ;
+(id)modelsForChangedConstraints:(id)arg0 fromSetting:(id)arg1 ;
+(id)modelsForGroup:(id)arg0 ;
+(id)modelsForGroupDiff:(id)arg0 fromGroup:(id)arg1 ;
+(id)modelsForSetting:(id)arg0 ;
+(id)modelsForSettingDiff:(id)arg0 fromSetting:(id)arg1 ;
+(void)changeAccessorySettingType:(id)arg0 home:(id)arg1 ;


@end


#endif