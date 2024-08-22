// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMFQUERY_H
#define EMFQUERY_H

@class NSArray, NSString, NSLocale;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EMFStringStemmer.h"

@interface EMFQuery : NSObject <NSCopying>

 {
    NSArray *_queryTokens;
    NSArray *_queryTokensAnalyzed;
    NSString *_normalizedString;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *normalizedQueryString;
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (retain, nonatomic) EMFStringStemmer *stringStemmer; // ivar: _stringStemmer
@property (retain, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSString *trimmedQueryString;


-(id)_finalTokenAnalyzed:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)finalTokenAnalyzed;
-(id)finalTokenUnanalyzed;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithQueryString:(id)arg0 andLocale:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 andQueryTokens:(id)arg1 andLocale:(id)arg2 ;
-(id)initWithQueryTokens:(id)arg0 andLocale:(id)arg1 ;
-(id)tokenCounts;
-(void)reset;


@end


#endif