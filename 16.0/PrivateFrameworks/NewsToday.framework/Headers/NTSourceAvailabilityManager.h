// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTSOURCEAVAILABILITYMANAGER_H
#define NTSOURCEAVAILABILITYMANAGER_H

@class NSOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTSourceAvailabilityManager : NSObject

@property (copy, nonatomic) NSOrderedSet *availabilityEntriesInPreferredOrder; // ivar: _availabilityEntriesInPreferredOrder
@property (readonly, nonatomic) Class likelyPreferredSourceFetchDescriptorClass;
@property (copy, nonatomic) id *preferredSourceChangedNotificationBlock; // ivar: _preferredSourceChangedNotificationBlock
@property (nonatomic) Class preferredSourceFetchDescriptorClass; // ivar: _preferredSourceFetchDescriptorClass
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initWithAvailabilityEntriesInPreferredOrder:(id)arg0 queue:(id)arg1 ;
-(void)_recomputePreferredAvailableTodayResultsSource;
-(void)_setPreferredAvailableTodayResultsSource:(Class)arg0 ;


@end


#endif