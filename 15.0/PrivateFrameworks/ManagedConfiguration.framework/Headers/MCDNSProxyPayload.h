// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCDNSPROXYPAYLOAD_H
#define MCDNSPROXYPAYLOAD_H

@class NSString, NSDictionary;


#import "MCPayload.h"

@interface MCDNSProxyPayload : MCPayload

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, copy, nonatomic) NSString *providerBundleIdentifier; // ivar: _providerBundleIdentifier
@property (readonly, copy, nonatomic) NSDictionary *providerConfiguration; // ivar: _providerConfiguration


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif