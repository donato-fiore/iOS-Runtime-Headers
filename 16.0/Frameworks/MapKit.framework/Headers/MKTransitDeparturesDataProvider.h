// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITDEPARTURESDATAPROVIDER_H
#define MKTRANSITDEPARTURESDATAPROVIDER_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSMapTable, NSDictionary, NSString, NSDate, NSSet, NSArray;
@protocol MKTransitMapItemUpdaterDelegate, GEOTransitSystem, MKTransitDeparturesDataProviderDelegate, GEOMapItemTransitInfo;

#import <Foundation/Foundation.h>

#import "MKTransitItemIncidentsController.h"
#import "MKTransitMapItemUpdater.h"
#import "MKMapItem.h"

@interface MKTransitDeparturesDataProvider : NSObject <MKTransitMapItemUpdaterDelegate>

 {
    NSMutableArray *_sections;
    NSMutableDictionary *_sectionControllers;
    MKTransitItemIncidentsController *_incidentsController;
    NSMutableSet *_hiddenSections;
    NSMutableSet *_pagedSectionIdentifiers;
    BOOL _wantsSystemSectionCollapsing;
    NSMutableDictionary *_cachedSequencesForSection;
    NSMapTable *_cachedDirectionsForSystem;
    NSMapTable *_cachedSystemHasInactiveLines;
    MKTransitMapItemUpdater *_mapItemUpdater;
    NSInteger _lastFailureDiagnosis;
    NSDictionary *_lineLookupBySection;
    id<GEOTransitSystem> *_systemSelected;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic, getter=allowsSystemSectionCollapsing) BOOL allowsSystemSectionCollapsing;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKTransitDeparturesDataProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDate *departureCutoffDate; // ivar: _departureCutoffDate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *disabledSections; // ivar: _disabledSections
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) BOOL isStuckWithExpiredInfo;
@property (retain, nonatomic) NSDate *lastCutoffDateWithValidSchedule; // ivar: _lastCutoffDateWithValidSchedule
@property (readonly, nonatomic) NSDate *lastInfoRefreshDate; // ivar: _lastInfoRefreshDate
@property (readonly, copy, nonatomic) NSString *lastInfoRefreshErrorDescription; // ivar: _lastInfoRefreshErrorDescription
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic, getter=isRefreshing) BOOL refreshing; // ivar: _refreshing
@property (readonly, nonatomic) NSArray *sectionControllers;
@property (readonly, nonatomic) NSArray *stationSystems; // ivar: _stationSystems
@property (readonly) Class superclass;
@property (nonatomic, getter=supportsSystemSectionCollapsing) BOOL supportSystemSectionCollapsing; // ivar: _supportSystemSectionCollapsing
@property (readonly, nonatomic) NSObject<GEOMapItemTransitInfo> *transitInfo;


-(BOOL)_hasConnectionsSection;
-(BOOL)_hasIncidentsSection;
-(BOOL)_hasPlaceCardMessageSection;
-(BOOL)_isSectionTypeEnabled:(NSInteger)arg0 ;
-(BOOL)_newStationCardUIEnabled;
-(BOOL)_systemHasInactiveLines:(id)arg0 ;
-(BOOL)isHidingDeparturesForSystem:(id)arg0 ;
-(BOOL)isLastSectionForSystem:(id)arg0 ;
-(NSInteger)_numberOfDeparturesSectionsForSystem:(id)arg0 ;
-(NSInteger)_sectionForIdentifier:(id)arg0 ;
-(NSInteger)departureSequenceFrequencyTypeForSection:(NSInteger)arg0 ;
-(NSInteger)indexOfFirstSectionWithType:(NSInteger)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)sectionForIdentifier:(id)arg0 ;
-(NSInteger)sectionTypeAtIndex:(NSInteger)arg0 ;
-(id)_blockedIncidentEntities;
-(id)_controllerForSection:(NSInteger)arg0 ;
-(id)_departureCutoffDateForLine:(id)arg0 ;
-(id)_departureCutoffDateForSequence:(id)arg0 ;
-(id)_departureSequencesForSection:(NSInteger)arg0 ;
-(id)_directionsForSystem:(id)arg0 hasSequencesWithNoDirection:(*BOOL)arg1 ;
-(id)_identifierForSection:(NSInteger)arg0 ;
-(id)_identifierForSequence:(id)arg0 ;
-(id)_identifierForSystem:(id)arg0 ;
-(id)_inactiveLinesControllerForSection:(NSInteger)arg0 ;
-(id)_inactiveLinesForSystem:(id)arg0 ;
-(id)_indexSetForHidingShowingSystem:(id)arg0 ;
-(id)_systemForSection:(NSInteger)arg0 directionIndex:(*NSInteger)arg1 ;
-(id)departuresControllerForSection:(NSInteger)arg0 ;
-(id)directionForSection:(NSInteger)arg0 ;
-(id)dominantIncidentForDepartureSequence:(id)arg0 ;
-(id)identifierForSection:(NSInteger)arg0 ;
-(id)inactiveLinesForSection:(NSInteger)arg0 ;
-(id)incidentsForSystemIncidentsSection:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)possibleActions;
-(id)sectionControllerForSection:(NSInteger)arg0 ;
-(id)systemForSection:(NSInteger)arg0 ;
-(id)ticketForTransitMapItemUpdater:(id)arg0 ;
-(void)_updateRefreshFailureErrorDescription;
-(void)hideDeparturesForSystem:(id)arg0 removedIndices:(*id)arg1 ;
-(void)refreshSections;
-(void)reloadData;
-(void)showDeparturesForSystem:(id)arg0 insertedIndices:(*id)arg1 ;
-(void)showNextPageInSection:(NSInteger)arg0 ;
-(void)systemSelected:(id)arg0 ;
-(void)transitItemReferenceDateUpdater:(id)arg0 didUpdateToReferenceDate:(id)arg1 ;
-(void)transitMapItemUpdater:(id)arg0 updatedMapItem:(id)arg1 error:(id)arg2 ;
-(void)transitMapItemUpdater:(id)arg0 willUpdateMapItem:(id)arg1 ;


@end


#endif