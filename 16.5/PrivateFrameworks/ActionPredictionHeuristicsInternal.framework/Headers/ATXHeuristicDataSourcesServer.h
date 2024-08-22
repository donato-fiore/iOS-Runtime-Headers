// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICDATASOURCESSERVER_H
#define ATXHEURISTICDATASOURCESSERVER_H

@class NSXPCListener, NSString, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, ATXHeuristicDataSources;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXHeuristicDataSourcesServer : NSObject <NSXPCListenerDelegate, ATXHeuristicDataSources>

 {
    ATXHeuristicDevice *_device;
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(void)alarmTimeOfDay:(id)arg0 ;
-(void)alarmsFromDate:(id)arg0 toDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)allHandlesForContact:(id)arg0 callback:(id)arg1 ;
-(void)appLaunchCountForBundleId:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 limit:(NSUInteger)arg3 callback:(id)arg4 ;
-(void)batteryInformationWithCallback:(id)arg0 ;
-(void)bestAppSuggestionWithCallback:(id)arg0 ;
-(void)bestHandleForContact:(id)arg0 service:(id)arg1 callback:(id)arg2 ;
-(void)birthdaysWithCallback:(id)arg0 ;
-(void)calendarEventsFromStartDate:(id)arg0 toEndDate:(id)arg1 callback:(id)arg2 ;
-(void)callNewerThan:(CGFloat)arg0 showIncoming:(BOOL)arg1 showOutgoing:(BOOL)arg2 missedOnly:(BOOL)arg3 callback:(id)arg4 ;
-(void)contactsWithEmail:(id)arg0 callback:(id)arg1 ;
-(void)contactsWithIdentifiers:(id)arg0 callback:(id)arg1 ;
-(void)contactsWithName:(id)arg0 callback:(id)arg1 ;
-(void)contactsWithPhone:(id)arg0 callback:(id)arg1 ;
-(void)contentsWithCallback:(id)arg0 ;
-(void)dealloc;
-(void)duetInteractionCountForHandles:(id)arg0 sinceDate:(id)arg1 callback:(id)arg2 ;
-(void)favoritesWithContacts:(id)arg0 callback:(id)arg1 ;
-(void)fetchWidgetMetadataForAppBundleIds:(id)arg0 callback:(id)arg1 ;
-(void)flightStatusForFlight:(id)arg0 callback:(id)arg1 ;
-(void)getEventsWithProminentFeature:(id)arg0 callback:(id)arg1 ;
-(void)getLocationForMostRelevantTripInRangeFrom:(id)arg0 to:(id)arg1 callback:(id)arg2 ;
-(void)holidaysFromStartDate:(id)arg0 toEndDate:(id)arg1 callback:(id)arg2 ;
-(void)hourOfDayInteractionProbabilitiesWithContact:(id)arg0 callback:(id)arg1 ;
-(void)isDNDActive:(id)arg0 ;
-(void)modeCorrelatedAppsInCurrentModeWithCallback:(id)arg0 ;
-(void)nlEventsWithCallback:(id)arg0 ;
-(void)obtainOneTimeLocationWithCallback:(id)arg0 ;
-(void)passesWithStyle:(id)arg0 callback:(id)arg1 ;
-(void)peopleSuggestionsWithCallback:(id)arg0 ;
-(void)preferredAppForIntentName:(id)arg0 andParameterCombination:(id)arg1 callback:(id)arg2 ;
-(void)timeIntervalSinceUserWakeupWithCallback:(id)arg0 ;
-(void)travelTimeInfoForEventID:(id)arg0 location:(id)arg1 expectedArrivalDate:(id)arg2 transportType:(id)arg3 localOnlyAfterFirstUpdate:(BOOL)arg4 callback:(id)arg5 ;
-(void)unreadMessagesWithLimit:(NSInteger)arg0 callback:(id)arg1 ;
-(void)vipsWithCallback:(id)arg0 ;
-(void)visibleCalendarsWithCallback:(id)arg0 ;


@end


#endif