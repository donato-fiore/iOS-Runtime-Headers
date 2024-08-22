// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHMUTABLETOKENIZEDTEXTRESULTCOLUMN_H
#define CHMUTABLETOKENIZEDTEXTRESULTCOLUMN_H

@class NSArray;


#import "CHTokenizedTextResultColumn.h"

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn

@property (copy, nonatomic) NSArray *tokenRows;


-(NSInteger)addTokenRowWithTokens:(id)arg0 ;
-(id)_mutableTokenRows;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTokenRows:(id)arg0 ;
-(void)removeTokenRowAtIndex:(NSInteger)arg0 ;
-(void)setTokenRowWithTokens:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)sortTokenRows;


@end


#endif