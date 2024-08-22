// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCNETWORKUSAGERULESPAYLOAD_H
#define MCNETWORKUSAGERULESPAYLOAD_H

@class NSArray;


#import "MCPayload.h"

@interface MCNetworkUsageRulesPayload : MCPayload

@property (copy, nonatomic) NSArray *SIMRules; // ivar: _SIMRules
@property (copy, nonatomic) NSArray *applicationRules; // ivar: _applicationRules


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)verboseDescription;


@end


#endif