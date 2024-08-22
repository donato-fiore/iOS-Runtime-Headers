// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI30DOCUMENTEVENTMONITORCONTROLLER_H
#define _TTC8VIDEOSUI30DOCUMENTEVENTMONITORCONTROLLER_H

@protocol VUIAppDocumentUpdateEventMonitorObserving;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUI30DocumentEventMonitorController : NSObject <VUIAppDocumentUpdateEventMonitorObserving>

 {
    ? isDocumentDirty;
    ? templateViewModel;
    ? controllerName;
    ? eventEligibleViewModels;
    ? $__lazy_storage_$_updateEventStore;
    ? documentEventIterable;
    ? lastMonitoringReason;
    ? hasRefreshEvents;
    ? isDocumentDirtyForRefreshEvents;
    ? registrationHandler;
    ? isSuspended;
}




-(id)init;
-(void)appDocumentDidReceiveEvent:(id)arg0 ;
-(void)appDocumentHasBecomeActive;


@end


#endif