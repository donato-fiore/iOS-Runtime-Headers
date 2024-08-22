// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGNOISEMANAGEMENTENTITY_H
#define SASETTINGNOISEMANAGEMENTENTITY_H

@class NSString;


#import "SASettingEntity.h"

@interface SASettingNoiseManagementEntity : SASettingEntity

@property (copy, nonatomic) NSString *previousValue;
@property (copy, nonatomic) NSString *value;


+(id)noiseManagementEntity;
+(id)noiseManagementEntityWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif