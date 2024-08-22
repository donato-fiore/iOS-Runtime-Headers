// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPZKWSEARCHQUERYTASK_H
#define SPZKWSEARCHQUERYTASK_H

@class NSArray;


#import "SPQueryTask.h"

@interface SPZKWSearchQueryTask : SPQueryTask {
    NSArray *_mutableSections;
}


@property NSUInteger queryID; // ivar: _queryID


+(int)maxSuggestedApps;
+(void)initialize;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
-(void)addApplicationResultsFromPredictionResponse:(id)arg0 toSection:(id)arg1 queryIdent:(NSUInteger)arg2 ;
-(void)start;


@end


#endif