// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITDEPARTURESSECTIONCONTROLLER_H
#define MKTRANSITDEPARTURESSECTIONCONTROLLER_H

@class NSString, NSArray, NSMapTable, NSDictionary;


#import "MKTransitSectionController.h"
#import "MKTransitDepartureServiceGapFormatter.h"

@interface MKTransitDeparturesSectionController : MKTransitSectionController {
    NSString *_direction;
    NSString *_departureSequenceContainer;
    NSArray *_sequences;
    NSMapTable *_sequencesToInclude;
    NSDictionary *_serviceGapStrings;
    BOOL _needsFindRowForServiceGap;
    BOOL _needsFindDeparturesAreVehicleSpecific;
}


@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific; // ivar: _departuresAreVehicleSpecific
@property (retain, nonatomic) MKTransitDepartureServiceGapFormatter *serviceGapFormatter; // ivar: _serviceGapFormatter
@property (readonly, nonatomic) BOOL showOperatingHours;


-(BOOL)_isDateLastDeparture:(id)arg0 withNextDepartureDate:(id)arg1 forSequence:(id)arg2 ;
-(BOOL)_newStationCardUIEnabled;
-(id)_nextLastDepartureDateForSequence:(id)arg0 afterDate:(id)arg1 ;
-(id)_pagingFilter;
-(id)init;
-(id)initWithMapItem:(id)arg0 system:(id)arg1 ;
-(id)initWithMapItem:(id)arg0 system:(id)arg1 departureSequenceContainer:(id)arg2 ;
-(id)initWithMapItem:(id)arg0 system:(id)arg1 direction:(id)arg2 ;
-(id)sequenceForRow:(NSInteger)arg0 outIsNewLine:(*BOOL)arg1 outNextLineIsSame:(*BOOL)arg2 ;
-(id)sequences;
-(id)serviceGapDescriptionForRow:(NSInteger)arg0 ;
-(void)_buildRows;
-(void)_serviceGapDate:(*id)arg0 string:(*id)arg1 forSequence:(id)arg2 withDepartureIndex:(NSUInteger)arg3 ;
-(void)_setNeedsBuildRows;
-(void)_sharedSetup;
-(void)setDepartureCutoffDate:(id)arg0 ;


@end


#endif