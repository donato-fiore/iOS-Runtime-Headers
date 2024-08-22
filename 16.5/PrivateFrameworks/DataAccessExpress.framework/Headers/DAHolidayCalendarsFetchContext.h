// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAHOLIDAYCALENDARSFETCHCONTEXT_H
#define DAHOLIDAYCALENDARSFETCHCONTEXT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DAHolidayCalendarsFetchContext : NSObject

@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) id *resultsBlock; // ivar: _resultsBlock


// -(id)initWithResultsBlock:(id)arg0 completionBlock:(unk)arg1  ;
-(void)finishedWithError:(id)arg0 ;
-(void)resultsReturned:(id)arg0 ;


@end


#endif