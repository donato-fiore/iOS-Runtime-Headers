// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAPPEARANCESETTINGCONTENTITEM_H
#define WFAPPEARANCESETTINGCONTENTITEM_H

@class WFContentItem;


#import "WFAppearanceSettingValue.h"

@interface WFAppearanceSettingContentItem : WFContentItem

@property (readonly, nonatomic) WFAppearanceSettingValue *settingValue;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;


@end


#endif