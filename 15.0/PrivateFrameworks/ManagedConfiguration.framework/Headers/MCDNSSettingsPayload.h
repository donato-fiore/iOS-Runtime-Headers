// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDNSSETTINGSPAYLOAD_H
#define MCDNSSETTINGSPAYLOAD_H

@class NSDictionary, NSArray, NSNumber;


#import "MCPayload.h"

@interface MCDNSSettingsPayload : MCPayload

@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, copy, nonatomic) NSDictionary *dnsSettings; // ivar: _dnsSettings
@property (readonly, copy, nonatomic) NSArray *onDemandRules; // ivar: _onDemandRules
@property (readonly, copy, nonatomic) NSNumber *prohibitDisablement; // ivar: _prohibitDisablement


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