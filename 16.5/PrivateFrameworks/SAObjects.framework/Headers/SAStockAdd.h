// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTOCKADD_H
#define SASTOCKADD_H

@class NSArray;


#import "SADomainCommand.h"

@interface SAStockAdd : SADomainCommand

@property (copy, nonatomic) NSArray *stocks;


+(id)add;
+(id)addWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif