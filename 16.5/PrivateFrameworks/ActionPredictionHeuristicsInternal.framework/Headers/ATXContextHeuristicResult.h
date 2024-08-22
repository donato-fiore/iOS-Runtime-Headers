// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTEXTHEURISTICRESULT_H
#define ATXCONTEXTHEURISTICRESULT_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface ATXContextHeuristicResult : NSObject

@property (readonly, nonatomic) NSSet *additionalRefreshTriggers; // ivar: _additionalRefreshTriggers
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


-(id)init;
-(id)initWithSuggestions:(id)arg0 additionalRefreshTriggers:(id)arg1 ;


@end


#endif