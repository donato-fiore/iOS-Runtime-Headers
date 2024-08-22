// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCCERTIFICATETRANSPARENCYPAYLOAD_H
#define MCCERTIFICATETRANSPARENCYPAYLOAD_H

@class NSArray;


#import "MCPayload.h"

@interface MCCertificateTransparencyPayload : MCPayload

@property (readonly, nonatomic) NSArray *domainRules; // ivar: _domainRules
@property (readonly, nonatomic) NSArray *hashDictionaries; // ivar: _hashDictionaries


+(BOOL)isValidDomainRule:(id)arg0 ;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)verboseDescription;


@end


#endif