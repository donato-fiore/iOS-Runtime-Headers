// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIALTERNATEPROVIDERRESULT_H
#define SAUIALTERNATEPROVIDERRESULT_H

@class NSArray, NSNumber, NSString;


#import "SADomainObject.h"
#import "SAUIImageResource.h"

@interface SAUIAlternateProviderResult : SADomainObject

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *numberOfResults;
@property (retain, nonatomic) SAUIImageResource *providerImage;
@property (copy, nonatomic) NSString *providerName;


+(id)alternateProviderResult;
+(id)alternateProviderResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif