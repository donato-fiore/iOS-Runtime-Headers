// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOWEBCONTENTFILTERPOLICYSETTINGMETADATA_H
#define MOWEBCONTENTFILTERPOLICYSETTINGMETADATA_H



#import "MOSettingMetadata.h"
#import "MOWebContentFilterPolicy.h"

@interface MOWebContentFilterPolicySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) MOWebContentFilterPolicy *defaultValue;
@property (readonly, nonatomic) NSUInteger maximumAutoAllowCount; // ivar: _maximumAutoAllowCount
@property (readonly, nonatomic) NSUInteger maximumNeverAllowCount; // ivar: _maximumNeverAllowCount
@property (readonly, nonatomic) NSUInteger maximumOnlyAllowCount; // ivar: _maximumOnlyAllowCount


-(id)_combine:(id)arg0 with:(id)arg1 ;
-(id)combinePersistableValue:(id)arg0 with:(id)arg1 ;
-(id)initWithDefaultPolicy:(id)arg0 maximumAutoAllowCount:(NSUInteger)arg1 maximumNeverAllowCount:(NSUInteger)arg2 maximumOnlyAllowCount:(NSUInteger)arg3 isPublic:(BOOL)arg4 ;
-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif