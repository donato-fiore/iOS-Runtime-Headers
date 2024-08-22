// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSSERVERSIDEFILTER_H
#define MAPSSUGGESTIONSSERVERSIDEFILTER_H

@class NSString;
@protocol MapsSuggestionsFilter;


#import "MapsSuggestionsBaseFilter.h"

@interface MapsSuggestionsServerSideFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>

 {
    BOOL _enabledEntryTypeUnknown;
    BOOL _enabledEntryTypeHome;
    BOOL _enabledEntryTypeWork;
    BOOL _enabledEntryTypeCalendarEvent;
    BOOL _enabledEntryTypeFrequentLocation;
    BOOL _enabledEntryTypeRecentHistory;
    BOOL _enabledEntryTypeOldPreYukonFavorite;
    BOOL _enabledEntryTypeParkedCar;
    BOOL _enabledEntryTypeRestaurantReservation;
    BOOL _enabledEntryTypeRidesharing;
    BOOL _enabledEntryTypeCarPlayLowEnergy;
    BOOL _enabledEntryTypeResumeRoute;
    BOOL _enabledEntryTypeAppConnection;
    BOOL _enabledEntryTypeHotel;
    BOOL _enabledEntryTypeCarRental;
    BOOL _enabledEntryTypeTravelFlight;
    BOOL _enabledEntryTypeTicketedEvent;
    BOOL _enabledEntryTypePortrait;
    BOOL _enabledEntryTypeUserPlace;
    BOOL _enabledEntryTypeSchool;
    BOOL _enabledEntryTypeVehicleSetup;
    BOOL _enabledEntryTypeFavoriteButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
-(BOOL)shouldKeepEntry:(id)arg0 ;
-(id)init;


@end


#endif