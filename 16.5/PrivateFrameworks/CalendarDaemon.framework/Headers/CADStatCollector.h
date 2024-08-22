// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSTATCOLLECTOR_H
#define CADSTATCOLLECTOR_H


#import <Foundation/Foundation.h>


@interface CADStatCollector : NSObject

@property (readonly, nonatomic) BOOL wantsCalendars;
@property (readonly, nonatomic) BOOL wantsEvents;
@property (readonly, nonatomic) BOOL wantsOccurrences;
@property (readonly, nonatomic) BOOL wantsStores;


+(BOOL)enabled;
+(id)eventName;
-(BOOL)enabled;
-(id)desiredOccurrenceRange;
-(id)eventDictionaries;
-(id)eventName;
-(void)prepareWithContext:(id)arg0 ;
-(void)processBirthdayCalendarEvents:(id)arg0 ;
-(void)processCalendars:(id)arg0 inStore:(*void)arg1 ;
-(void)processEvents:(id)arg0 ;
-(void)processOccurrences:(id)arg0 ;
-(void)processSignificantEventWithPredictedLocation:(BOOL)arg0 onSharedCalendar:(BOOL)arg1 ;
-(void)processStores:(id)arg0 ;


@end


#endif