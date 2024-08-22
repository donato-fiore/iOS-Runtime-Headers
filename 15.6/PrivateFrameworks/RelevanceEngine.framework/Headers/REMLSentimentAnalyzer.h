// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLSENTIMENTANALYZER_H
#define REMLSENTIMENTANALYZER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "REContentRanker.h"

@interface REMLSentimentAnalyzer : NSObject <NSCopying>

 {
    REContentRanker *_contentRanker;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentRanker:(id)arg0 ;
-(id)sentimentForText:(id)arg0 ;
-(id)sentimentForTokens:(id)arg0 ;


@end


#endif