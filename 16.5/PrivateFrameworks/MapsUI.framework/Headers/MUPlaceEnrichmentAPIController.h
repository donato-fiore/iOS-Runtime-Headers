// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEENRICHMENTAPICONTROLLER_H
#define MUPLACEENRICHMENTAPICONTROLLER_H

@class GEOObserverHashTable, NSString, GEOEnrichmentData, MKMapItem, GEOMapServiceTraits;
@protocol MUPlaceEnrichmentFetcher, MUPlaceEnrichmentDataProvider, MKMapServicePlaceEnrichmentTicket;

#import <Foundation/Foundation.h>


@interface MUPlaceEnrichmentAPIController : NSObject <MUPlaceEnrichmentFetcher, MUPlaceEnrichmentDataProvider>

 {
    GEOObserverHashTable *_observers;
}


@property (readonly, nonatomic) NSInteger currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOEnrichmentData *enrichmentData; // ivar: _enrichmentData
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<MKMapServicePlaceEnrichmentTicket> *ticket; // ivar: _ticket
@property (retain, nonatomic) GEOMapServiceTraits *traits; // ivar: _traits


+(id)sharedPlaceEnrichmentAPIController;
-(id)initInternal;
-(id)placeEnrichmentData;
-(void)cancelFetchingPlaceEnrichment;
-(void)configureWithMapItem:(id)arg0 traits:(id)arg1 ;
-(void)fetchPlaceEnrichment:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)resetConfiguration;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif