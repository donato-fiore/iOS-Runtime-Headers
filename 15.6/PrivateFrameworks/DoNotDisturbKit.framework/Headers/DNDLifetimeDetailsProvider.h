// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDLIFETIMEDETAILSPROVIDER_H
#define DNDLIFETIMEDETAILSPROVIDER_H

@class NSTimer, CLLocationManager, _CLPlaceInference, EKEventStore, EKCalendarVisibilityManager, EKEvent, NSArray, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue, DNDLifetimeDetailsProviderDelegate;

#import <Foundation/Foundation.h>


@interface DNDLifetimeDetailsProvider : NSObject <CLLocationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_eventStoreQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _monitoringLifetimes;
    NSTimer *_refreshTimer;
    CLLocationManager *_locationManager;
    _CLPlaceInference *_currentPlaceInference;
    EKEventStore *_eventStore;
    EKCalendarVisibilityManager *_calendarVisibilityManager;
    EKEvent *_relevantEvent;
}


@property (readonly, copy, nonatomic) NSArray *availableLifetimeDetails; // ivar: _availableLifetimeDetails
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDLifetimeDetailsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_eventStoreQueue_eventForCalendarEventLifetime:(id)arg0 ;
-(id)_lifetimeDetailsUntilEveningOrMorningForDate:(id)arg0 ;
-(id)_nextRefreshTimerFireDate;
-(id)init;
-(id)lifetimeDetailsForAssertionDetails:(id)arg0 error:(*id)arg1 ;
-(id)lifetimeForLifetimeDetails:(id)arg0 error:(*id)arg1 ;
-(void)_eventStoreQueue_requestRelevantEvent;
-(void)_queue_gotPlaceInferences:(id)arg0 ;
-(void)_queue_rebuildAvailableLifetimeDetails;
-(void)_queue_requestLifetimeDetails;
-(void)_queue_resetLifetimeDetails;
-(void)_queue_scheduleRefreshTimerIfNeeded;
-(void)_requestRelevantLocationMetadata;
-(void)_scheduleRefreshTimerIfNeeded;
-(void)_systemTimeChanged;
-(void)dealloc;
-(void)lifetimeDetailsWithMetadataForAssertionDetails:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestLifetimeDetails;
-(void)resetLifetimeDetails;
-(void)startUpdatingLifetimeDetailMetadata;
-(void)startUpdatingLifetimeDetails;
-(void)stopUpdatingLifetimeDetailMetadata;
-(void)stopUpdatingLifetimeDetails;


@end


#endif