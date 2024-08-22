// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUILOCATIONSEARCHMODEL_H
#define EKUILOCATIONSEARCHMODEL_H

@class CLLocationManager, CLInUseAssertion, MKLocalSearchCompleter, CLLocation, CLGeocoder, MKLocalSearch, CNContactStore, EKEventStore, EKOccurrenceCacheLocationSearch, NSCharacterSet, NSOperationQueue, NSMutableArray, NSMutableDictionary, NSArray, EKStructuredLocation, NSString;
@protocol CLLocationManagerDelegate, MKSearchCompleterDelegate, CNCancelable, OS_dispatch_queue, EKUILocationSearchModelDelegate, GEOMapServiceCompletionTicket;

#import <Foundation/Foundation.h>


@interface EKUILocationSearchModel : NSObject <CLLocationManagerDelegate, MKSearchCompleterDelegate>

 {
    CLLocationManager *_locationManager;
    CLInUseAssertion *_locationAssertion;
    MKLocalSearchCompleter *_completer;
    CLLocation *_currentImpreciseLocation;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    CNContactStore *_contactStore;
    id<CNCancelable> *_contactsSearchToken;
    NSObject<OS_dispatch_queue> *_recentsQueue;
    NSObject<OS_dispatch_queue> *_eventsQueue;
    NSObject<OS_dispatch_queue> *_customConferenceQueue;
    EKEventStore *_eventStore;
    EKOccurrenceCacheLocationSearch *_eventsSearch;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSObject<OS_dispatch_queue> *_conferenceRoomProcessingQueue;
    NSOperationQueue *_conferenceRoomOperationQueue;
    NSMutableArray *_mutableConferenceRoomSearchResults;
    NSMutableDictionary *_conferenceRoomAddressesToConferenceRooms;
    NSMutableArray *_allPossibleVirtualConferenceRooms;
}


@property (readonly, nonatomic) NSArray *conferenceRoomSearchResults;
@property (readonly, nonatomic) NSArray *contactsSearchResults; // ivar: _contactsSearchResults
@property (retain, nonatomic) EKStructuredLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKUILocationSearchModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *eventsSearchResults; // ivar: _eventsSearchResults
@property (readonly, nonatomic) NSArray *frequentsSearchResults; // ivar: _frequentsSearchResults
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<GEOMapServiceCompletionTicket> *lastTicket;
@property (readonly, nonatomic) NSArray *mapCompletionSearchResults; // ivar: _mapCompletionSearchResults
@property (readonly, nonatomic) NSArray *recentsSearchResults; // ivar: _recentsSearchResults
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedSearchTypes; // ivar: _supportedSearchTypes
@property (readonly, nonatomic) NSArray *textualSearchResults; // ivar: _textualSearchResults
@property (readonly, nonatomic) NSArray *virtualConferenceCustomSearchResults; // ivar: _virtualConferenceCustomSearchResults
@property (readonly, nonatomic) NSArray *virtualConferenceRoomSearchResults; // ivar: _virtualConferenceRoomSearchResults


+(id)URLsFromSource:(id)arg0 ;
+(id)_dataDetector;
+(id)_linksInSource:(id)arg0 ;
-(BOOL)removeRecentLocation:(id)arg0 ;
// -(id)availabilityRequestForConferenceRooms:(id)arg0 duringEvent:(id)arg1 resultsBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(id)initWithEventStore:(id)arg0 ;
-(id)splitEventLocations:(id)arg0 ;
-(void)_addDiscoveredConferenceRooms:(id)arg0 ;
-(void)_handleAvailabilityResults:(id)arg0 forOperation:(id)arg1 ;
-(void)_processDirectorySearchResultSet:(id)arg0 forOperation:(id)arg1 ;
-(void)_updateAllPossibleVirtualConferenceResultsWithRoomTypes:(id)arg0 ;
-(void)_updateContactsSearchWithResults:(id)arg0 forToken:(id)arg1 ;
-(void)_updateVirtualConferenceCustomOptions:(id)arg0 ;
-(void)_updateVirtualConferenceOptions:(id)arg0 ;
-(void)addConferenceRoomToRecents:(id)arg0 fromSource:(id)arg1 ;
-(void)addLocationToRecents:(id)arg0 addressString:(id)arg1 ;
-(void)beginSearchForTerm:(id)arg0 ;
-(void)cancelSearch;
-(void)completerDidFail:(id)arg0 error:(id)arg1 ;
-(void)completerDidUpdateResults:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)dedupeResults;
-(void)getCurrentLocation;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)resetSearchResults:(BOOL)arg0 ;
-(void)searchConferenceRooms:(id)arg0 ;
-(void)searchFrequentLocations:(id)arg0 ;
-(void)selectCurrentLocation;
-(void)selectLocation:(id)arg0 ;
-(void)selectMapSearchCompletion:(id)arg0 ;
-(void)selectVirtualConferenceRoomType:(id)arg0 ;
-(void)stopUpdatingLocation;
-(void)updateConferenceRoomAvailability:(id)arg0 duringEvent:(id)arg1 completionBlock:(id)arg2 ;
-(void)updateContacts:(id)arg0 ;
-(void)updateEventLocations:(id)arg0 ;
-(void)updateRecents:(id)arg0 ;
-(void)updateVirtualConferenceRoomOptions:(id)arg0 ;


@end


#endif