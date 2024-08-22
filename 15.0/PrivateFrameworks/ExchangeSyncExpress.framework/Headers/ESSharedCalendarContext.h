// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESSHAREDCALENDARCONTEXT_H
#define ESSHAREDCALENDARCONTEXT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ESSharedCalendarContext : NSObject

@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSString *calendarID; // ivar: _calendarID
@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL shouldSyncCalendar; // ivar: _shouldSyncCalendar


-(id)initWithCalendarID:(id)arg0 accountID:(id)arg1 queue:(id)arg2 completionBlock:(id)arg3 ;
-(void)finishedWithError:(id)arg0 ;


@end


#endif