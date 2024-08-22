// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPORTSSTANDINGSSNIPPET_H
#define SASPORTSSTANDINGSSNIPPET_H

@class NSArray;


#import "SASportsSnippet.h"

@interface SASportsStandingsSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSArray *selectedEntities;
@property (nonatomic) BOOL showCardinalPositions;


+(id)standingsSnippet;
+(id)standingsSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif