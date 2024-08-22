// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONNECTIONSCALENDARSOURCE_H
#define PPCONNECTIONSCALENDARSOURCE_H

@class NSString;
@protocol PPConnectionsLocationSource;


#import "PPConnectionsSource.h"
#import "PPLocalEventStore.h"

@interface PPConnectionsCalendarSource : PPConnectionsSource <PPConnectionsLocationSource>

 {
    PPLocalEventStore *_localEventStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)locationLabelFromEvent:(id)arg0 ;
+(id)locationNameFromEvent:(id)arg0 ;
+(id)locationValueFromEvent:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)isCalendarEventEligibleForLocationPrediction:(id)arg0 ;
-(id)ekEventWithExternalID:(id)arg0 ;
-(id)identifier;
-(id)init;
-(id)locationItemsWithCriteria:(id)arg0 earliest:(id)arg1 latest:(id)arg2 limit:(NSUInteger)arg3 consumer:(NSUInteger)arg4 explanationSet:(id)arg5 ;


@end


#endif