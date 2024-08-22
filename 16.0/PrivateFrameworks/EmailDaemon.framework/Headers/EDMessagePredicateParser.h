// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDMESSAGEPREDICATEPARSER_H
#define EDMESSAGEPREDICATEPARSER_H


#import <Foundation/Foundation.h>

#import "EDMessageQueryParser.h"

@interface EDMessagePredicateParser : NSObject

@property (readonly, nonatomic) EDMessageQueryParser *queryParser; // ivar: _queryParser


+(id)parserForPredicate:(id)arg0 queryParser:(id)arg1 ;
-(id)initWithQueryParser:(id)arg0 ;
-(id)parseResultsFromPredicate:(id)arg0 ;


@end


#endif