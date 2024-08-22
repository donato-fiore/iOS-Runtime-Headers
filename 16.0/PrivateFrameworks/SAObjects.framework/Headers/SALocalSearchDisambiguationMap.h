// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHDISAMBIGUATIONMAP_H
#define SALOCALSEARCHDISAMBIGUATIONMAP_H

@class NSArray;


#import "SAUISnippet.h"

@interface SALocalSearchDisambiguationMap : SAUISnippet

@property (copy, nonatomic) NSArray *items;


+(id)disambiguationMap;
+(id)disambiguationMapWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif