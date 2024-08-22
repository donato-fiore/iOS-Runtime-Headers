// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCULATETOKENIZER_H
#define CALCULATETOKENIZER_H

@class NSArray, NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "CalculateToken.h"
#import "Trie.h"
#import "UnitsInfo.h"

@interface CalculateTokenizer : NSObject

@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) CalculateToken *lastToken; // ivar: _lastToken
@property (retain, nonatomic) NSArray *locales; // ivar: _locales
@property (nonatomic) NSUInteger peekIndex; // ivar: _peekIndex
@property (retain, nonatomic) NSMutableArray *peekTokens; // ivar: _peekTokens
@property (retain, nonatomic) NSString *string; // ivar: _string
@property (nonatomic) NSUInteger stringLength; // ivar: _stringLength
@property (retain, nonatomic) Trie *trie; // ivar: _trie
@property (retain, nonatomic) UnitsInfo *unitsInfo; // ivar: _unitsInfo
@property (retain, nonatomic) NSMutableArray *wordBreakIndices; // ivar: _wordBreakIndices
@property (nonatomic) NSUInteger wordBreakIndicesIndex; // ivar: _wordBreakIndicesIndex


+(id)tokenizerWithUnits:(id)arg0 ;
+(int)displayNameExponent:(id)arg0 ;
-(id)initWithUnits:(id)arg0 ;
-(id)nextToken;
-(id)peekToken;
-(void)_findTokens;
-(void)_loadIfNeeded;
-(void)reset;


@end


#endif