// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPZKWQUERYTASK_H
#define SPZKWQUERYTASK_H



#import "SPQueryTask.h"

@interface SPZKWQueryTask : SPQueryTask



+(int)maxSuggestedApps;
+(void)initialize;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
-(void)addApplicationResultsFromPredictionResponse:(id)arg0 toSection:(id)arg1 queryIdent:(NSUInteger)arg2 ;
-(void)start;


@end


#endif