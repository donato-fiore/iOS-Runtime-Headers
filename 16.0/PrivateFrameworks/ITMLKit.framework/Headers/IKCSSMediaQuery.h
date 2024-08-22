// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCSSMEDIAQUERY_H
#define IKCSSMEDIAQUERY_H


#import <Foundation/Foundation.h>

#import "IKCSSMediaQueryList.h"

@interface IKCSSMediaQuery : NSObject

@property (readonly) BOOL evaluated; // ivar: _evaluated
@property (readonly) BOOL evaluationResult; // ivar: _evaluationResult
@property (readonly, nonatomic) IKCSSMediaQueryList *queryList; // ivar: _queryList


+(id)buildMediaQuery:(id)arg0 offset:(NSUInteger)arg1 consumed:(*NSUInteger)arg2 ;
+(id)buildMediaQueryExpression:(id)arg0 ;
+(id)buildMediaQueryList:(id)arg0 offset:(NSUInteger)arg1 consumed:(*NSUInteger)arg2 ;
+(id)mediaQueryFromTokenList:(id)arg0 ;
-(BOOL)evaluate;
-(id)description;
-(id)initWithQueryList:(id)arg0 ;
-(id)queryExpression;
-(void)setNeedsReEvaluation;


@end


#endif