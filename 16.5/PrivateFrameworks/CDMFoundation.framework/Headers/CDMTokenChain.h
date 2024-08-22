// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMTOKENCHAIN_H
#define CDMTOKENCHAIN_H

@class NSMutableArray, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CDMTokenChain : NSObject <NSCopying>

 {
    NSMutableArray *_characterToTokenIndexMapping;
}


@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


+(id)convertCDMTokenChainToProtoTokenChain:(id)arg0 ;
-(id)cleanStringFromToken:(NSInteger)arg0 toToken:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dropInsignificantTokens;
-(id)dropWhitespaceTokens;
-(id)extractTokens;
-(id)initWithProtoTokenChain:(id)arg0 ;
-(id)initWithString:(id)arg0 locale:(id)arg1 ;
-(id)initWithString:(id)arg0 locale:(id)arg1 tokens:(id)arg2 ;
-(id)normalizedString;
-(int)tokenIndexFromCharacterIndex:(NSInteger)arg0 ;
-(void)addToken:(id)arg0 ;


@end


#endif