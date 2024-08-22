// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMOMENTSEVENTDATAEVENT_H
#define BMMOMENTSEVENTDATAEVENT_H

@class BMEventBase, NSString, NSArray, NSDate;
@protocol BMStoreData;


#import "BMMomentsEventDataPR.h"

@interface BMMomentsEventDataEvent : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_startDate;
    CGFloat _raw_startDate;
    BOOL _hasRaw_endDate;
    CGFloat _raw_endDate;
    BOOL _hasRaw_creationDate;
    CGFloat _raw_creationDate;
    BOOL _hasRaw_sourceCreationDate;
    CGFloat _raw_sourceCreationDate;
    BOOL _hasRaw_expirationDate;
    CGFloat _raw_expirationDate;
}


@property (readonly, nonatomic) BOOL callLikeMechanismIncluded; // ivar: _callLikeMechanismIncluded
@property (readonly, nonatomic) int category; // ivar: _category
@property (readonly, nonatomic) NSString *contactIDMostSignificantInConversation; // ivar: _contactIDMostSignificantInConversation
@property (readonly, nonatomic) NSArray *contactIDsInConversation; // ivar: _contactIDsInConversation
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat durationAudioMediaPlaySessionsPerDay; // ivar: _durationAudioMediaPlaySessionsPerDay
@property (readonly, nonatomic) CGFloat durationVideoMediaPlaySessionsPerDay; // ivar: _durationVideoMediaPlaySessionsPerDay
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BMMomentsEventDataPR *gaPR; // ivar: _gaPR
@property (nonatomic) BOOL hasCallLikeMechanismIncluded; // ivar: _hasCallLikeMechanismIncluded
@property (nonatomic) BOOL hasDurationAudioMediaPlaySessionsPerDay; // ivar: _hasDurationAudioMediaPlaySessionsPerDay
@property (nonatomic) BOOL hasDurationVideoMediaPlaySessionsPerDay; // ivar: _hasDurationVideoMediaPlaySessionsPerDay
@property (nonatomic) BOOL hasInteractionContactScore; // ivar: _hasInteractionContactScore
@property (nonatomic) BOOL hasIsFamilyInPhotoMoment; // ivar: _hasIsFamilyInPhotoMoment
@property (nonatomic) BOOL hasIsGatheringComplete; // ivar: _hasIsGatheringComplete
@property (nonatomic) BOOL hasMaxDurationOfCallLikeInteractions; // ivar: _hasMaxDurationOfCallLikeInteractions
@property (nonatomic) BOOL hasMediaRepetitions; // ivar: _hasMediaRepetitions
@property (nonatomic) BOOL hasMediaSumTimePlayed; // ivar: _hasMediaSumTimePlayed
@property (nonatomic) BOOL hasMinDurationOfCallLikeInteractions; // ivar: _hasMinDurationOfCallLikeInteractions
@property (nonatomic) BOOL hasMomentIncludesFavoritedAsset; // ivar: _hasMomentIncludesFavoritedAsset
@property (nonatomic) BOOL hasMomentIncludesPhoto; // ivar: _hasMomentIncludesPhoto
@property (nonatomic) BOOL hasMomentIncludesVideo; // ivar: _hasMomentIncludesVideo
@property (nonatomic) BOOL hasNumAttendees; // ivar: _hasNumAttendees
@property (nonatomic) BOOL hasNumAudioLikeInteractions; // ivar: _hasNumAudioLikeInteractions
@property (nonatomic) BOOL hasNumAudioMediaPlaySessionsPerDay; // ivar: _hasNumAudioMediaPlaySessionsPerDay
@property (nonatomic) BOOL hasNumContacts; // ivar: _hasNumContacts
@property (nonatomic) BOOL hasNumFirstPartyMediaPlaySessionsPerDay; // ivar: _hasNumFirstPartyMediaPlaySessionsPerDay
@property (nonatomic) BOOL hasNumItemAuthors; // ivar: _hasNumItemAuthors
@property (nonatomic) BOOL hasNumItemRecipients; // ivar: _hasNumItemRecipients
@property (nonatomic) BOOL hasNumPhotoMomentHolidays; // ivar: _hasNumPhotoMomentHolidays
@property (nonatomic) BOOL hasNumPhotoMomentInferences; // ivar: _hasNumPhotoMomentInferences
@property (nonatomic) BOOL hasNumPhotoMomentPersons; // ivar: _hasNumPhotoMomentPersons
@property (nonatomic) BOOL hasNumPhotoMomentPublicEvents; // ivar: _hasNumPhotoMomentPublicEvents
@property (nonatomic) BOOL hasNumScoredTopics; // ivar: _hasNumScoredTopics
@property (nonatomic) BOOL hasNumTextLikeInteractions; // ivar: _hasNumTextLikeInteractions
@property (nonatomic) BOOL hasNumThirdPartyMediaPlaySessionsPerDay; // ivar: _hasNumThirdPartyMediaPlaySessionsPerDay
@property (nonatomic) BOOL hasNumVideoLikeInteractions; // ivar: _hasNumVideoLikeInteractions
@property (nonatomic) BOOL hasNumVideoMediaPlaySessionsPerDay; // ivar: _hasNumVideoMediaPlaySessionsPerDay
@property (nonatomic) BOOL hasNumtripParts; // ivar: _hasNumtripParts
@property (nonatomic) BOOL hasPCount; // ivar: _hasPCount
@property (nonatomic) BOOL hasTextLikeMechanismIncluded; // ivar: _hasTextLikeMechanismIncluded
@property (nonatomic) BOOL hasTotalDurationOfCallLikeInteractions; // ivar: _hasTotalDurationOfCallLikeInteractions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat interactionContactScore; // ivar: _interactionContactScore
@property (readonly, nonatomic) BOOL isFamilyInPhotoMoment; // ivar: _isFamilyInPhotoMoment
@property (readonly, nonatomic) BOOL isGatheringComplete; // ivar: _isGatheringComplete
@property (readonly, nonatomic) int locationMode; // ivar: _locationMode
@property (readonly, nonatomic) int mapItemSource; // ivar: _mapItemSource
@property (readonly, nonatomic) CGFloat maxDurationOfCallLikeInteractions; // ivar: _maxDurationOfCallLikeInteractions
@property (readonly, nonatomic) int mediaGenre; // ivar: _mediaGenre
@property (readonly, nonatomic) NSString *mediaPlayerBundleID; // ivar: _mediaPlayerBundleID
@property (readonly, nonatomic) int mediaRepetitions; // ivar: _mediaRepetitions
@property (readonly, nonatomic) int mediaSumTimePlayed; // ivar: _mediaSumTimePlayed
@property (readonly, nonatomic) int mediaType; // ivar: _mediaType
@property (readonly, nonatomic) CGFloat minDurationOfCallLikeInteractions; // ivar: _minDurationOfCallLikeInteractions
@property (readonly, nonatomic) BOOL momentIncludesFavoritedAsset; // ivar: _momentIncludesFavoritedAsset
@property (readonly, nonatomic) BOOL momentIncludesPhoto; // ivar: _momentIncludesPhoto
@property (readonly, nonatomic) BOOL momentIncludesVideo; // ivar: _momentIncludesVideo
@property (readonly, nonatomic) int numAttendees; // ivar: _numAttendees
@property (readonly, nonatomic) int numAudioLikeInteractions; // ivar: _numAudioLikeInteractions
@property (readonly, nonatomic) int numAudioMediaPlaySessionsPerDay; // ivar: _numAudioMediaPlaySessionsPerDay
@property (readonly, nonatomic) int numContacts; // ivar: _numContacts
@property (readonly, nonatomic) int numFirstPartyMediaPlaySessionsPerDay; // ivar: _numFirstPartyMediaPlaySessionsPerDay
@property (readonly, nonatomic) int numItemAuthors; // ivar: _numItemAuthors
@property (readonly, nonatomic) int numItemRecipients; // ivar: _numItemRecipients
@property (readonly, nonatomic) int numPhotoMomentHolidays; // ivar: _numPhotoMomentHolidays
@property (readonly, nonatomic) int numPhotoMomentInferences; // ivar: _numPhotoMomentInferences
@property (readonly, nonatomic) int numPhotoMomentPersons; // ivar: _numPhotoMomentPersons
@property (readonly, nonatomic) int numPhotoMomentPublicEvents; // ivar: _numPhotoMomentPublicEvents
@property (readonly, nonatomic) int numScoredTopics; // ivar: _numScoredTopics
@property (readonly, nonatomic) int numTextLikeInteractions; // ivar: _numTextLikeInteractions
@property (readonly, nonatomic) int numThirdPartyMediaPlaySessionsPerDay; // ivar: _numThirdPartyMediaPlaySessionsPerDay
@property (readonly, nonatomic) int numVideoLikeInteractions; // ivar: _numVideoLikeInteractions
@property (readonly, nonatomic) int numVideoMediaPlaySessionsPerDay; // ivar: _numVideoMediaPlaySessionsPerDay
@property (readonly, nonatomic) int numtripParts; // ivar: _numtripParts
@property (readonly, nonatomic) int pCount; // ivar: _pCount
@property (readonly, nonatomic) NSArray *photoMomentHolidays; // ivar: _photoMomentHolidays
@property (readonly, nonatomic) NSArray *photoMomentInferences; // ivar: _photoMomentInferences
@property (readonly, nonatomic) int photoMomentSource; // ivar: _photoMomentSource
@property (readonly, nonatomic) int placeDiscovery; // ivar: _placeDiscovery
@property (readonly, nonatomic) int placeLabelGranularity; // ivar: _placeLabelGranularity
@property (readonly, nonatomic) int placeType; // ivar: _placeType
@property (readonly, nonatomic) int placeUserType; // ivar: _placeUserType
@property (readonly, nonatomic) int poiCategory; // ivar: _poiCategory
@property (readonly, nonatomic) int provider; // ivar: _provider
@property (readonly, nonatomic) NSDate *sourceCreationDate;
@property (readonly, nonatomic) int sourceParty; // ivar: _sourceParty
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) int suggestedEventCategory; // ivar: _suggestedEventCategory
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textLikeMechanismIncluded; // ivar: _textLikeMechanismIncluded
@property (readonly, nonatomic) CGFloat totalDurationOfCallLikeInteractions; // ivar: _totalDurationOfCallLikeInteractions
@property (readonly, nonatomic) int tripMode; // ivar: _tripMode
@property (readonly, nonatomic) NSString *workoutBundleID; // ivar: _workoutBundleID
@property (readonly, nonatomic) int workoutType; // ivar: _workoutType


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithEventIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 creationDate:(id)arg3 sourceCreationDate:(id)arg4 expirationDate:(id)arg5 provider:(int)arg6 category:(int)arg7 placeUserType:(int)arg8 poiCategory:(int)arg9 placeDiscovery:(int)arg10 locationMode:(int)arg11 workoutType:(int)arg12 workoutBundleID:(id)arg13 mediaGenre:(int)arg14 mediaType:(int)arg15 mediaRepetitions:(id)arg16 mediaSumTimePlayed:(id)arg17 sourceParty:(int)arg18 mediaPlayerBundleID:(id)arg19 numAudioMediaPlaySessionsPerDay:(id)arg20 durationAudioMediaPlaySessionsPerDay:(id)arg21 numVideoMediaPlaySessionsPerDay:(id)arg22 durationVideoMediaPlaySessionsPerDay:(id)arg23 numFirstPartyMediaPlaySessionsPerDay:(id)arg24 numThirdPartyMediaPlaySessionsPerDay:(id)arg25 numContacts:(id)arg26 contactIDsInConversation:(id)arg27 contactIDMostSignificantInConversation:(id)arg28 interactionContactScore:(id)arg29 textLikeMechanismIncluded:(id)arg30 callLikeMechanismIncluded:(id)arg31 numTextLikeInteractions:(id)arg32 numAudioLikeInteractions:(id)arg33 numVideoLikeInteractions:(id)arg34 totalDurationOfCallLikeInteractions:(id)arg35 minDurationOfCallLikeInteractions:(id)arg36 maxDurationOfCallLikeInteractions:(id)arg37 photoMomentSource:(int)arg38 photoMomentInferences:(id)arg39 photoMomentHolidays:(id)arg40 numPhotoMomentHolidays:(id)arg41 numPhotoMomentInferences:(id)arg42 numPhotoMomentPublicEvents:(id)arg43 numPhotoMomentPersons:(id)arg44 isFamilyInPhotoMoment:(id)arg45 momentIncludesFavoritedAsset:(id)arg46 momentIncludesVideo:(id)arg47 momentIncludesPhoto:(id)arg48 suggestedEventCategory:(int)arg49 numAttendees:(id)arg50 numtripParts:(id)arg51 tripMode:(int)arg52 numScoredTopics:(id)arg53 numItemAuthors:(id)arg54 numItemRecipients:(id)arg55 ;
-(id)initWithEventIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 creationDate:(id)arg3 sourceCreationDate:(id)arg4 expirationDate:(id)arg5 provider:(int)arg6 category:(int)arg7 placeUserType:(int)arg8 poiCategory:(int)arg9 placeDiscovery:(int)arg10 locationMode:(int)arg11 workoutType:(int)arg12 workoutBundleID:(id)arg13 mediaGenre:(int)arg14 mediaType:(int)arg15 mediaRepetitions:(id)arg16 mediaSumTimePlayed:(id)arg17 sourceParty:(int)arg18 mediaPlayerBundleID:(id)arg19 numAudioMediaPlaySessionsPerDay:(id)arg20 durationAudioMediaPlaySessionsPerDay:(id)arg21 numVideoMediaPlaySessionsPerDay:(id)arg22 durationVideoMediaPlaySessionsPerDay:(id)arg23 numFirstPartyMediaPlaySessionsPerDay:(id)arg24 numThirdPartyMediaPlaySessionsPerDay:(id)arg25 numContacts:(id)arg26 contactIDsInConversation:(id)arg27 contactIDMostSignificantInConversation:(id)arg28 interactionContactScore:(id)arg29 textLikeMechanismIncluded:(id)arg30 callLikeMechanismIncluded:(id)arg31 numTextLikeInteractions:(id)arg32 numAudioLikeInteractions:(id)arg33 numVideoLikeInteractions:(id)arg34 totalDurationOfCallLikeInteractions:(id)arg35 minDurationOfCallLikeInteractions:(id)arg36 maxDurationOfCallLikeInteractions:(id)arg37 photoMomentSource:(int)arg38 photoMomentInferences:(id)arg39 photoMomentHolidays:(id)arg40 numPhotoMomentHolidays:(id)arg41 numPhotoMomentInferences:(id)arg42 numPhotoMomentPublicEvents:(id)arg43 numPhotoMomentPersons:(id)arg44 isFamilyInPhotoMoment:(id)arg45 momentIncludesFavoritedAsset:(id)arg46 momentIncludesVideo:(id)arg47 momentIncludesPhoto:(id)arg48 suggestedEventCategory:(int)arg49 numAttendees:(id)arg50 numtripParts:(id)arg51 tripMode:(int)arg52 numScoredTopics:(id)arg53 numItemAuthors:(id)arg54 numItemRecipients:(id)arg55 isGatheringComplete:(id)arg56 gaPR:(id)arg57 pCount:(id)arg58 mapItemSource:(int)arg59 placeType:(int)arg60 placeLabelGranularity:(int)arg61 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif