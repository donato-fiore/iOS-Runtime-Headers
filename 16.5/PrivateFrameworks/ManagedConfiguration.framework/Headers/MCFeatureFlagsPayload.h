// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCFEATUREFLAGSPAYLOAD_H
#define MCFEATUREFLAGSPAYLOAD_H

@class NSDictionary;


#import "MCPayload.h"

@interface MCFeatureFlagsPayload : MCPayload

@property (readonly, nonatomic) NSUInteger disclosureCount; // ivar: _disclosureCount
@property (readonly, nonatomic) NSUInteger featureFlagCount; // ivar: _featureFlagCount
@property (readonly, nonatomic) NSDictionary *featureFlagsConfiguration; // ivar: _featureFlagsConfiguration


+(BOOL)isConfigurationValid:(id)arg0 error:(*id)arg1 ;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)isAllowedToWriteFeatureFlags;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)invalidConfigurationErrorWithUnderlyingError:(id)arg0 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)title;
-(id)verboseDescription;


@end


#endif