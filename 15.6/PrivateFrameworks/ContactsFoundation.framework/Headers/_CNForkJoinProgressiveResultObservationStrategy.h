// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNFORKJOINPROGRESSIVERESULTOBSERVATIONSTRATEGY_H
#define _CNFORKJOINPROGRESSIVERESULTOBSERVATIONSTRATEGY_H

@class NSArray, NSMutableIndexSet, NSString;
@protocol CNForkJoinResultReportingStrategy;

#import <Foundation/Foundation.h>


@interface _CNForkJoinProgressiveResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy>

 {
    NSArray *_results;
    NSUInteger _activeObservableIdx;
    NSMutableIndexSet *_finishedObservables;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)observableAtIndex:(NSUInteger)arg0 didCompleteForObserver:(id)arg1 ;
-(void)receiveResult:(id)arg0 fromObservableAtIndex:(NSUInteger)arg1 observer:(id)arg2 ;


@end


#endif