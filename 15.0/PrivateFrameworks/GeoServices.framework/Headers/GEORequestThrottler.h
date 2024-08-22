// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOREQUESTTHROTTLER_H
#define GEOREQUESTTHROTTLER_H

@class geo_isolater, NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface GEORequestThrottler : NSObject {
    geo_isolater *_isolater;
    NSMutableDictionary *_enqueuedTickets;
    BOOL _isSubmitting;
    CGFloat _nextSubmissionTime;
    NSObject<OS_dispatch_source> *_submissionTimer;
}




+(id)sharedThrottler;
-(id)init;
-(void)_scheduleTimer:(CGFloat)arg0 ;
-(void)cancelTicket:(id)arg0 ;
-(void)enqueueTicket:(id)arg0 submissionHandler:(id)arg1 ;
-(void)submitTickets;


@end


#endif