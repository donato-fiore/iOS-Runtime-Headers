// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKINVITEEALTERNATIVETIMESEARCHER_H
#define EKINVITEEALTERNATIVETIMESEARCHER_H

@class NSOperationQueue, NSString, NSMutableArray, NSDate, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EKSource.h"

@interface EKInviteeAlternativeTimeSearcher : NSObject

@property (nonatomic) BOOL availabilityRequestInProgress; // ivar: _availabilityRequestInProgress
@property (retain, nonatomic) NSOperationQueue *availabilityRequestsQueue; // ivar: _availabilityRequestsQueue
@property (nonatomic) CGFloat availabilitySearchDurationMultiplier; // ivar: _availabilitySearchDurationMultiplier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSString *ignoredEventID; // ivar: _ignoredEventID
@property (retain, nonatomic) NSMutableArray *internalOriginalConflictedParticipants; // ivar: _internalOriginalConflictedParticipants
@property (retain, nonatomic) NSDate *internalOriginalEndDate; // ivar: _internalOriginalEndDate
@property (retain, nonatomic) NSDate *internalOriginalStartDate; // ivar: _internalOriginalStartDate
@property (retain, nonatomic) NSMutableArray *internalProposedStarts; // ivar: _internalProposedStarts
@property (retain, nonatomic) NSMutableArray *internalProposedTimes; // ivar: _internalProposedTimes
@property (nonatomic) BOOL internalSearchingForMoreTimesWhenAllAttendeesCanAttend; // ivar: _internalSearchingForMoreTimesWhenAllAttendeesCanAttend
@property (nonatomic) BOOL internalSearchingForMoreTimesWhenSomeAttendeesCanAttend; // ivar: _internalSearchingForMoreTimesWhenSomeAttendeesCanAttend
@property (retain, nonatomic) NSMutableArray *internalTimesWhenAllAttendeesCanAttend; // ivar: _internalTimesWhenAllAttendeesCanAttend
@property (retain, nonatomic) NSMutableArray *internalTimesWhenSomeAttendeesCanAttend; // ivar: _internalTimesWhenSomeAttendeesCanAttend
@property (retain, nonatomic) NSMutableArray *leftoverSpans; // ivar: _leftoverSpans
@property (retain, nonatomic) NSDate *nextAvailabilityRangeStartDate; // ivar: _nextAvailabilityRangeStartDate
@property (nonatomic) BOOL noConflictRequired; // ivar: _noConflictRequired
@property (retain, nonatomic) NSString *organizerAddress; // ivar: _organizerAddress
@property (readonly, nonatomic) NSArray *originalConflictedParticipants;
@property (readonly, nonatomic) NSDate *originalEndDate;
@property (retain, nonatomic) NSDate *originalRangeStartDate; // ivar: _originalRangeStartDate
@property (readonly, nonatomic) NSDate *originalStartDate;
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToParticipants; // ivar: _participantAddressesToParticipants
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) NSArray *proposedTimes;
@property (nonatomic) NSUInteger remainingSearchAttempts; // ivar: _remainingSearchAttempts
@property (readonly, nonatomic) BOOL searchingForMoreTimesWhenAllAttendeesCanAttend;
@property (readonly, nonatomic) BOOL searchingForMoreTimesWhenSomeAttendeesCanAttend;
@property (retain, nonatomic) EKSource *source; // ivar: _source
@property (copy, nonatomic) id *stateChanged; // ivar: _stateChanged
@property (readonly, nonatomic) NSArray *timesWhenAllAttendeesCanAttend;
@property (readonly, nonatomic) NSArray *timesWhenSomeAttendeesCanAttend;


+(BOOL)_span:(id)arg0 hasSameConflictedParticipantsAsSpan:(id)arg1 ;
+(NSInteger)_binarySearchForIndexOfTimeSpanInArray:(id)arg0 containingDate:(id)arg1 ;
+(NSInteger)_invalidBinarySearchIndex;
+(id)_addressesForParticipants:(id)arg0 ;
+(id)_allButFirstItemInArray:(id)arg0 ;
+(id)_allButLastItemInArray:(id)arg0 ;
+(id)_findHighestRankedNonOptimalTimeSpans:(id)arg0 ;
+(id)_findLeftoverSpans:(id)arg0 usingFreeTimes:(id)arg1 andNonOptimalTimes:(id)arg2 ;
+(id)_rankNonOptimalTimeSpans:(id)arg0 ;
+(id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)arg0 ;
+(id)stateAsString:(NSInteger)arg0 ;
+(void)_insertUniqueParticipants:(id)arg0 intoExistingParticipantsArray:(id)arg1 ;
+(void)_validateSpans:(id)arg0 ;
-(id)_filterOutUnreasonableTimeSlots:(id)arg0 ;
-(id)_generateNonOptimalTimesFromTimeSpans:(id)arg0 ;
-(id)_generateOpenFreeTimesFromTimeSpans:(id)arg0 ;
-(id)_generateTimeSpansForResults:(id)arg0 betweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)arg0 ;
-(id)_participantforParticipantAddress:(id)arg0 ;
-(id)_spliceLeftTimeSpans:(id)arg0 andNewTimeSpans:(id)arg1 ;
-(id)initWithStateChangedCallback:(id)arg0 ;
-(void)_attemptSearch;
-(void)_haltSearchWithError:(BOOL)arg0 ;
-(void)_processResults:(id)arg0 betweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_resetSearchFallbackNumbers;
-(void)_sendStateChange:(NSInteger)arg0 ;
-(void)_transitionToConflictFoundStateAndSearch;
-(void)dealloc;
-(void)resetWithEvent:(id)arg0 organizerAddressForNewlyScheduledEvent:(id)arg1 ;
-(void)searchForMoreTimesWhenAllAttendeesCanAttend;
-(void)searchForMoreTimesWhenSomeAttendeesCanAttend;


@end


#endif