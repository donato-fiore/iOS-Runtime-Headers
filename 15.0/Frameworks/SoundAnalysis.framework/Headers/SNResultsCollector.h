// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNRESULTSCOLLECTOR_H
#define SNRESULTSCOLLECTOR_H

@class NSMutableArray, NSString, NSArray;
@protocol SNResultsObserving;

#import <Foundation/Foundation.h>


@interface SNResultsCollector : NSObject <SNResultsObserving>

 {
    NSMutableArray *_results;
    NSMutableArray *_errors;
}


@property (readonly, nonatomic) NSInteger completeCount; // ivar: _completeCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *results;
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)init;
-(void)clearCompleteCount;
-(void)clearErrors;
-(void)clearResults;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;


@end


#endif