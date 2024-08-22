// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SARESTAURANTRESTAURANTSSNIPPET_H
#define SARESTAURANTRESTAURANTSSNIPPET_H

@class NSArray, NSDictionary;


#import "SAUISirilandSnippet.h"

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (copy, nonatomic) NSArray *attributionOrder;
@property (copy, nonatomic) NSArray *contributingProviderIds;
@property (copy, nonatomic) NSDictionary *providerPunchOutMap;
@property (copy, nonatomic) NSArray *restaurants;


+(id)restaurantsSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif