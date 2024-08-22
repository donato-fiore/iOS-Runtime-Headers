// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETWORKFLOWREQUESTQUEUE_H
#define WFWIDGETWORKFLOWREQUESTQUEUE_H

@class NSMutableArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface WFWidgetWorkflowRequestQueue : NSObject

@property (nonatomic, getter=isHandlingRequest) BOOL handlingRequest; // ivar: _handlingRequest
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSMutableArray *requests; // ivar: _requests


-(id)init;
-(void)_requeueFailedRequest:(id)arg0 ;
-(void)fetchNextQueuedItem;
-(void)getWidgetWorkflowWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getWidgetWorkflowsInCollectionWithIdentifier:(id)arg0 limit:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif