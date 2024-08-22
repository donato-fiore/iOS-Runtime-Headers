// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTOCKSEARCH_H
#define SASTOCKSEARCH_H

@class NSArray;


#import "SADomainCommand.h"

@interface SAStockSearch : SADomainCommand

@property (copy, nonatomic) NSArray *stockReferences;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif