// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTSTALENESSEVENTTRACKER_H
#define NCNOTIFICATIONLISTSTALENESSEVENTTRACKER_H

@class NSMutableDictionary, PETScalarEventTracker, NCNotificationListSection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NCNotificationStructuredSectionList.h"

@interface NCNotificationListStalenessEventTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_lastDisplayedDateByNotificationMetadata;
    PETScalarEventTracker *_stalenessEventTracker;
}


@property (weak, nonatomic) NCNotificationListSection *notificationList; // ivar: _notificationList
@property (weak, nonatomic) NCNotificationStructuredSectionList *structuredSectionList; // ivar: _structuredSectionList


+(id)_allMetricsSafeBundleIdentifiers;
+(id)_metricsSafeBundleIdentifierByBundleIdentifier;
+(id)_metricsSafeBundleIdentifierForBundleIdentifier:(id)arg0 ;
+(id)eventTrackerWithAutomaticCollation;
-(id)init;
-(void)_handleListPresentedEvent;
-(void)_queue_collateAndRecordMetrics;
-(void)_queue_processRequests:(id)arg0 timestamp:(id)arg1 ;
-(void)_startAutocollation;
-(void)_stopAutocollation;
-(void)collateAndRecordMetrics;
-(void)dealloc;
-(void)handleEvent:(NSUInteger)arg0 ;


@end


#endif