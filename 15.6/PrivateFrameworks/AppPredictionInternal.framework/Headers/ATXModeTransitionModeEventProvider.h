// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODETRANSITIONMODEEVENTPROVIDER_H
#define ATXMODETRANSITIONMODEEVENTPROVIDER_H

@class NSString;
@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>


@interface ATXModeTransitionModeEventProvider : NSObject <ATXModeEntityEventProviderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly) Class superclass;


-(BOOL)eventIsDuringThanksgivingShutdown:(id)arg0 ;
-(BOOL)isEventFromProvider:(id)arg0 ;
-(BOOL)publisherIsCoreDuetWrapper;
-(id)aggregationEventsFromEvent:(id)arg0 ;
-(id)biomePublisherWithBookmark:(id)arg0 ;
-(id)bmStoreEventsForLast61DaysWithStartDateToday:(id)arg0 endDateToday:(id)arg1 includeWeekends:(BOOL)arg2 includeHolidays:(BOOL)arg3 ;
-(id)dateIntervalFromEvent:(id)arg0 ;
-(id)eventsFromPublisher;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(void)updateEntitySpecificFeaturesDict:(id)arg0 aggregationEvent:(id)arg1 isLocalToMode:(BOOL)arg2 ;


@end


#endif