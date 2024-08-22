// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSSERVICEMANAGER_H
#define CLSSERVICEMANAGER_H

@class NSURL, NSString;
@protocol CLSSocialServiceContactsDelegate;

#import <Foundation/Foundation.h>

#import "CLSLRUMemoryCache.h"
#import "CLSSocialServiceCalendar.h"
#import "CLSSocialServiceContacts.h"
#import "CLSSocialServiceCoreDuet.h"
#import "CLSSocialServiceCoreNameParser.h"
#import "CLSPersonIdentity.h"
#import "CLSRoutineService.h"

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate>

 {
    CLSLRUMemoryCache *_personsCache;
}


@property (readonly, nonatomic) NSURL *applicationDataURL; // ivar: _applicationDataURL
@property (readonly, nonatomic) CLSSocialServiceCalendar *calendarService; // ivar: _calendarService
@property (readonly, nonatomic) CLSSocialServiceContacts *contactsService; // ivar: _contactsService
@property (readonly, nonatomic) CLSSocialServiceCoreDuet *coreDuetService; // ivar: _coreDuetService
@property (readonly, nonatomic) CLSSocialServiceCoreNameParser *coreNameParserService; // ivar: _coreNameParserService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccessToContactsStore; // ivar: _hasAccessToContactsStore
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLSPersonIdentity *mePerson; // ivar: _mePerson
@property (readonly, nonatomic) CLSRoutineService *routineService; // ivar: _routineService
@property (readonly, nonatomic) NSObject *routineServiceLockObject; // ivar: _routineServiceLockObject
@property (readonly) Class superclass;


+(id)sharedManager;
+(id)sharedManagerWithURL:(id)arg0 ;
-(BOOL)canAccessContactsStore;
-(BOOL)hasAddressesForMePerson;
-(BOOL)isRemoteLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(BOOL)routineIsAvailable;
-(BOOL)shutdownForPhotoLibraryURL:(id)arg0 ;
-(CGFloat)pinningVisitsRatio;
-(NSUInteger)numberOfCloseByLocationMatches;
-(NSUInteger)numberOfLocationsOfInterest;
-(NSUInteger)numberOfMatchRequests;
-(NSUInteger)numberOfRemoteLocationMatches;
-(NSUInteger)numberOfTimeMatches;
-(NSUInteger)numberOfVisits;
-(NSUInteger)relationshipHintForPerson:(id)arg0 usingLocales:(id)arg1 ;
-(NSUInteger)sexHintForPerson:(id)arg0 usingLocales:(id)arg1 ;
-(id)contactHistoryCollector;
-(id)contactsForIdentifiers:(id)arg0 ;
-(id)coreDuetPersonSuggestionsOnDate:(id)arg0 ;
-(id)eventsForClueCollection:(id)arg0 ;
-(id)eventsForDates:(id)arg0 ;
-(id)fetchImportantLocationsOfInterest;
-(id)fetchLocationOfInterestVisitsAtLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)lastLocationOfInterestVisit;
-(id)locationOfInterestAtLocation:(id)arg0 ;
-(id)locationOfInterestCloseToLocation:(id)arg0 inDateInterval:(id)arg1 ;
-(id)matchingDictionaryForContactIdentifier:(id)arg0 ;
-(id)mePersonAddressesOfType:(NSUInteger)arg0 ;
-(id)personForIdentifier:(id)arg0 ;
-(id)personForPersonHandle:(id)arg0 ;
-(id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg0 usingPersonsModel:(id)arg1 ;
-(id)personResultForName:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)personResultsForName:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)personsFromEventParticipants:(id)arg0 excludeCurrentUser:(BOOL)arg1 ;
-(id)predominantLocationMobilityForDateInterval:(id)arg0 confidence:(*CGFloat)arg1 ;
-(id)workCalendarEventsMatchingContactIdentifiers:(id)arg0 fromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 ;
-(void)enumerateAllPersonsUsingBlock:(id)arg0 ;
-(void)enumerateEventsFromUniversalDate:(id)arg0 toUniversalDate:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonsAndRelationshipUsingBlock:(id)arg0 ;
-(void)enumeratePersonsForFullname:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonsForIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)flushSocialServicesAtURL:(id)arg0 ;
-(void)invalidateMomentaryMemoryCaches;
-(void)invalidatePermanentMemoryCaches;
-(void)invalidatePersonsCacheForPersonsWithNames:(id)arg0 ;
-(void)postProcessLocationsOfInterest;
-(void)prefetchEventsFromUniversalDate:(id)arg0 toUniversalDate:(id)arg1 forAssetCollectionsSortedByStartDate:(id)arg2 usingBlock:(id)arg3 ;


@end


#endif