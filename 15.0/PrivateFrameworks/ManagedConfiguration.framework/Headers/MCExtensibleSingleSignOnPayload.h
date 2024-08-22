// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCEXTENSIBLESINGLESIGNONPAYLOAD_H
#define MCEXTENSIBLESINGLESIGNONPAYLOAD_H

@class NSArray, NSDictionary, NSString;


#import "MCPayload.h"

@interface MCExtensibleSingleSignOnPayload : MCPayload

@property (retain, nonatomic) NSArray *esso_URLs; // ivar: _esso_URLs
@property (retain, nonatomic) NSArray *esso_deniedBundleIdentifiers; // ivar: _esso_deniedBundleIdentifiers
@property (retain, nonatomic) NSDictionary *esso_extensionData; // ivar: _esso_extensionData
@property (retain, nonatomic) NSString *esso_extensionIdentifier; // ivar: _esso_extensionIdentifier
@property (retain, nonatomic) NSArray *esso_hosts; // ivar: _esso_hosts
@property (retain, nonatomic) NSString *esso_realm; // ivar: _esso_realm
@property (retain, nonatomic) NSString *esso_screenLockedBehavior; // ivar: _esso_screenLockedBehavior
@property (retain, nonatomic) NSString *esso_teamIdentifier; // ivar: _esso_teamIdentifier
@property (retain, nonatomic) NSString *esso_type; // ivar: _esso_type


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)_validateHost:(id)arg0 outError:(*id)arg1 ;
-(id)_validateURLString:(id)arg0 outError:(*id)arg1 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)title;
-(id)verboseDescription;


@end


#endif