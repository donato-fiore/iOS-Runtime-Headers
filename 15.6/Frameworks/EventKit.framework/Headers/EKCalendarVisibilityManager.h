// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARVISIBILITYMANAGER_H
#define EKCALENDARVISIBILITYMANAGER_H

@class NSArray, CalDarwinNotificationListener;
@protocol CalActivatable;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"
#import "EKSource.h"

@interface EKCalendarVisibilityManager : NSObject <CalActivatable>



@property BOOL active; // ivar: _active
@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (retain, nonatomic) NSArray *invisibleCalendars; // ivar: _invisibleCalendars
@property (readonly, nonatomic) NSArray *invisibleCalendarsForAllIdentities;
@property (retain, nonatomic) EKSource *limitedToSource; // ivar: _limitedToSource
@property (readonly, nonatomic) CalDarwinNotificationListener *notificationListener; // ivar: _notificationListener
@property (readonly, nonatomic) id *visibilityChangedCallback; // ivar: _visibilityChangedCallback
@property (readonly, nonatomic) NSArray *visibleCalendars;
@property (readonly, nonatomic) NSArray *visibleCalendarsForAllIdentities;


+(id)_defaultQueue;
+(id)visibilityChangedNotificationName;
-(id)_calendarsThatAreVisible:(BOOL)arg0 filteredByIdentity:(BOOL)arg1 ;
-(id)_deselectedCalendarIdentifiers;
-(id)initWithEventStore:(id)arg0 limitedToSource:(id)arg1 visibilityChangedCallback:(id)arg2 ;
// -(id)initWithEventStore:(id)arg0 limitedToSource:(id)arg1 visibilityChangedCallback:(id)arg2 queue:(unk)arg3  ;
// -(id)initWithEventStore:(id)arg0 limitedToSource:(id)arg1 visibilityChangedCallback:(id)arg2 queue:(unk)arg3 activate:(id)arg4  ;
-(id)initWithEventStore:(id)arg0 visibilityChangedCallback:(id)arg1 ;
// -(id)initWithEventStore:(id)arg0 visibilityChangedCallback:(id)arg1 queue:(unk)arg2  ;
-(void)activate;
-(void)deactivate;
-(void)dealloc;


@end


#endif