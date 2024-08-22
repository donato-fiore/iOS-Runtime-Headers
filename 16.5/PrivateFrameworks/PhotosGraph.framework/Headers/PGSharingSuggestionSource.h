// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSHARINGSUGGESTIONSOURCE_H
#define PGSHARINGSUGGESTIONSOURCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGSharingSuggestionSource : NSObject

@property (readonly, nonatomic) NSString *details;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat weight;


-(BOOL)canRunWithInput:(id)arg0 ;
-(BOOL)canRunWithOptions:(id)arg0 ;
-(id)description;
-(id)sourceDescription;
-(id)suggestedResultsForInput:(id)arg0 withOptions:(id)arg1 ;
-(id)suggestionResultWithPerson:(id)arg0 ;
-(id)suggestionResultWithPerson:(id)arg0 weight:(CGFloat)arg1 ;
-(id)suggestionResultsWithPersons:(id)arg0 ;


@end


#endif