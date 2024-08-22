// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESDCLIENTCALENDARAVAILABILITYRESPONSEDELEGATE_H
#define ESDCLIENTCALENDARAVAILABILITYRESPONSEDELEGATE_H

@class NSDate, NSString, NSArray;
@protocol DAEventsCalendarAvailabilityResponseConsumer, OS_dispatch_queue;


#import "ESDClientDelegate.h"

@interface ESDClientCalendarAvailabilityResponseDelegate : ESDClientDelegate <DAEventsCalendarAvailabilityResponseConsumer>

 {
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    id *_requestID;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountID:(id)arg0 client:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 ;
-(void)calendarAvailabilityRequestFinishedWithError:(id)arg0 ;
-(void)calendarAvailabilityRequestReturnedResults:(id)arg0 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)performRequest;


@end


#endif