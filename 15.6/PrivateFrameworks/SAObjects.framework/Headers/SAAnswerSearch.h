// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAANSWERSEARCH_H
#define SAANSWERSEARCH_H

@class NSString, NSArray;


#import "SADomainCommand.h"
#import "SALocation.h"

@interface SAAnswerSearch : SADomainCommand

@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSString *attribute;
@property (copy, nonatomic) NSString *miscQuestion;
@property (copy, nonatomic) NSString *placeAttribute;
@property (copy, nonatomic) NSArray *product;
@property (copy, nonatomic) NSString *timeQuestion;
@property (copy, nonatomic) NSString *verbType;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif