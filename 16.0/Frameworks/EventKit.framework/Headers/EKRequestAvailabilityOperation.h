// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKREQUESTAVAILABILITYOPERATION_H
#define EKREQUESTAVAILABILITYOPERATION_H

@class NSOperation, NSDate, NSString, NSArray, NSError;
@protocol OS_dispatch_queue;


#import "EKAvailabilityCache.h"

@interface EKRequestAvailabilityOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    EKAvailabilityCache *_availabilityCache;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    id *_resultsBlock;
    id *_requestID;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSError *error; // ivar: _error


-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)description;
-(id)init;
-(id)initWithSource:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(id)arg5 ;
-(void)_finishWithError:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)start;


@end


#endif