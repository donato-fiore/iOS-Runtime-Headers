// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGAPPEARANCEENTITY_H
#define SASETTINGAPPEARANCEENTITY_H

@class NSString;


#import "SASettingEntity.h"

@interface SASettingAppearanceEntity : SASettingEntity

@property (copy, nonatomic) NSString *previousValue;
@property (copy, nonatomic) NSString *value;


+(id)appearanceEntity;
+(id)appearanceEntityWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif