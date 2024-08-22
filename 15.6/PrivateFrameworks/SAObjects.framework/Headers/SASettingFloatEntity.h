// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGFLOATENTITY_H
#define SASETTINGFLOATENTITY_H

@class NSNumber;


#import "SASettingNumericEntity.h"

@interface SASettingFloatEntity : SASettingNumericEntity

@property (copy, nonatomic) NSNumber *previousValue;
@property (nonatomic) float value;


+(id)floatEntity;
+(id)floatEntityWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)floatEntityWithValue:(float)arg0 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithValue:(float)arg0 ;


@end


#endif