// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCDOMAINSPAYLOAD_H
#define MCDOMAINSPAYLOAD_H

@class NSDictionary;


#import "MCPayload.h"

@interface MCDomainsPayload : MCPayload

@property (retain, nonatomic) NSDictionary *restrictions; // ivar: _restrictions


+(BOOL)isPatternValid:(id)arg0 forField:(id)arg1 outError:(*id)arg2 ;
+(id)invalidDomainPatternErrorWithPattern:(id)arg0 field:(id)arg1 ;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)tooManyEntriesErrorWithMaxCount:(id)arg0 field:(id)arg1 ;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;


@end


#endif