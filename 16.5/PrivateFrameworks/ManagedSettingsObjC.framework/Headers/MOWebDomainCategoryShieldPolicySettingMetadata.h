// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOWEBDOMAINCATEGORYSHIELDPOLICYSETTINGMETADATA_H
#define MOWEBDOMAINCATEGORYSHIELDPOLICYSETTINGMETADATA_H



#import "MOSettingMetadata.h"
#import "MOWebDomainCategoryShieldPolicy.h"

@interface MOWebDomainCategoryShieldPolicySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) MOWebDomainCategoryShieldPolicy *defaultValue;
@property (readonly, nonatomic) NSUInteger maximumActivityCount; // ivar: _maximumActivityCount
@property (readonly, nonatomic) NSUInteger maximumCategoryCount; // ivar: _maximumCategoryCount


-(id)_combine:(id)arg0 with:(id)arg1 ;
-(id)combinePersistableValue:(id)arg0 with:(id)arg1 ;
-(id)initWithDefaultPolicy:(id)arg0 maximumCategoryCount:(NSUInteger)arg1 maximumActivityCount:(NSUInteger)arg2 isPublic:(BOOL)arg3 ;
-(id)persistableValueFromValue:(id)arg0 ;
-(id)sanitizePersistableValue:(id)arg0 ;
-(id)valueFromPersistableValue:(id)arg0 ;


@end


#endif