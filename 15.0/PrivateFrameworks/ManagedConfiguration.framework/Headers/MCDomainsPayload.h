// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDOMAINSPAYLOAD_H
#define MCDOMAINSPAYLOAD_H

@class NSDictionary;


#import "MCPayload.h"

@interface MCDomainsPayload : MCPayload

@property (retain, nonatomic) NSDictionary *restrictions; // ivar: _restrictions


+(BOOL)isPatternValid:(id)arg0 outError:(*id)arg1 ;
+(id)invalidDomainPatternErrorWithPattern:(id)arg0 ;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;


@end


#endif