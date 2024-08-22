// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASYNCSIRIKITAPPVOCABULARY_H
#define SASYNCSIRIKITAPPVOCABULARY_H

@class NSString, NSDictionary;


#import "SADomainObject.h"

@interface SASyncSiriKitAppVocabulary : SADomainObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSDictionary *customVocabularyMap;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif