// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCSETUPASSISTANTPAYLOAD_H
#define MCSETUPASSISTANTPAYLOAD_H

@class NSDictionary, NSArray;


#import "MCPayload.h"

@interface MCSetupAssistantPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) NSArray *skipKeys; // ivar: _skipKeys


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)verboseDescription;


@end


#endif