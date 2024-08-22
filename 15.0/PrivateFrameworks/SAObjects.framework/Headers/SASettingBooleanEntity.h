// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGBOOLEANENTITY_H
#define SASETTINGBOOLEANENTITY_H

@class NSNumber;


#import "SASettingEntity.h"

@interface SASettingBooleanEntity : SASettingEntity

@property (copy, nonatomic) NSNumber *previousValue;
@property (nonatomic) BOOL value;


+(id)booleanEntity;
+(id)booleanEntityWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)booleanEntityWithValue:(BOOL)arg0 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithValue:(BOOL)arg0 ;


@end


#endif