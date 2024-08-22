// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARVISIBILITYMANAGER_H
#define EKCALENDARVISIBILITYMANAGER_H

@class NSString, NSArray, CalDarwinNotificationListener;
@protocol CalActivatable, CADCalendarVisibilityManager;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"
#import "EKSource.h"

@interface EKCalendarVisibilityManager : NSObject <CalActivatable, CADCalendarVisibilityManager>



@property BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *invisibleCalendars;
@property (readonly, nonatomic) NSArray *invisibleCalendarsForAllIdentities;
@property (readonly, nonatomic) EKSource *limitedToSource; // ivar: _limitedToSource
@property (readonly, nonatomic) CalDarwinNotificationListener *notificationListener; // ivar: _notificationListener
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *visibilityChangedCallback; // ivar: _visibilityChangedCallback
@property (readonly, nonatomic) NSArray *visibleCalendars;
@property (readonly, nonatomic) NSArray *visibleCalendarsForAllIdentities;


+(id)_defaultQueue;
+(id)deselectedCalendarIdentifiers;
+(id)focusModeConfigurationChangedName;
+(id)unselectedCalendarIdentifiersForFocusMode;
+(id)unselectedCalendarsForFocusModeInEventStore:(id)arg0 ;
+(id)visibilityChangedNotificationName;
+(void)setUnselectedCalendarIdentifiersForFocusMode:(id)arg0 ;
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