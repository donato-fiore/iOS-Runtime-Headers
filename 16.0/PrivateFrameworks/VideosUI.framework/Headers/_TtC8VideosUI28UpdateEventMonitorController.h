// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI28UPDATEEVENTMONITORCONTROLLER_H
#define _TTC8VIDEOSUI28UPDATEEVENTMONITORCONTROLLER_H

@protocol VUIAppDocumentUpdateEventMonitorObserving;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUI28UpdateEventMonitorController : NSObject <VUIAppDocumentUpdateEventMonitorObserving>

 {
    ? isDocumentDirty;
    ? viewModel;
    ? controllerName;
    ? isCollectionChildrenUpdateMode;
    ? eventEligibleViewModels;
    ? isOptimizedTTLRefreshEnabled;
    ? $__lazy_storage_$_foregroundTTLExpirationMap;
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