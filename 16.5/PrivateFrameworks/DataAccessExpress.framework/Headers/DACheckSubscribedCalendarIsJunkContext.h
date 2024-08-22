// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACHECKSUBSCRIBEDCALENDARISJUNKCONTEXT_H
#define DACHECKSUBSCRIBEDCALENDARISJUNKCONTEXT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DACheckSubscribedCalendarIsJunkContext : NSObject

@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) NSInteger junkStatus; // ivar: _junkStatus
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSString *urlString; // ivar: _urlString


-(id)initWithURLString:(id)arg0 completionBlock:(id)arg1 ;
-(void)finishedWithError:(id)arg0 ;


@end


#endif