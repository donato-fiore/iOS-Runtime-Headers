// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPHOTOSUSERANALYTICS_H
#define BMPHOTOSUSERANALYTICS_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMPhotosUserAnalytics : BMEventBase <BMStoreData>



@property (readonly, nonatomic) int assetAge; // ivar: _assetAge
@property (readonly, nonatomic) BOOL capturedAtAOI; // ivar: _capturedAtAOI
@property (readonly, nonatomic) BOOL capturedAtBusiness; // ivar: _capturedAtBusiness
@property (readonly, nonatomic) BOOL capturedAtFrequentLocation; // ivar: _capturedAtFrequentLocation
@property (readonly, nonatomic) BOOL capturedAtHome; // ivar: _capturedAtHome
@property (readonly, nonatomic) BOOL capturedAtPOI; // ivar: _capturedAtPOI
@property (readonly, nonatomic) BOOL capturedAtROI; // ivar: _capturedAtROI
@property (readonly, nonatomic) BOOL capturedAtWork; // ivar: _capturedAtWork
@property (readonly, nonatomic) BOOL capturedOnShortTrip; // ivar: _capturedOnShortTrip
@property (readonly, nonatomic) BOOL capturedOnTrip; // ivar: _capturedOnTrip
@property (readonly, nonatomic) BOOL containsBaby; // ivar: _containsBaby
@property (readonly, nonatomic) BOOL containsChild; // ivar: _containsChild
@property (readonly, nonatomic) BOOL containsCoWorker; // ivar: _containsCoWorker
@property (readonly, nonatomic) BOOL containsFamily; // ivar: _containsFamily
@property (readonly, nonatomic) BOOL containsFriends; // ivar: _containsFriends
@property (readonly, nonatomic) BOOL containsMyPet; // ivar: _containsMyPet
@property (readonly, nonatomic) BOOL containsParent; // ivar: _containsParent
@property (readonly, nonatomic) BOOL containsPartner; // ivar: _containsPartner
@property (readonly, nonatomic) BOOL containsPets; // ivar: _containsPets
@property (readonly, nonatomic) BOOL containsSibling; // ivar: _containsSibling
@property (readonly, nonatomic) BOOL containsSocialGroup; // ivar: _containsSocialGroup
@property (readonly, nonatomic) BOOL containsVIP; // ivar: _containsVIP
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int faceCount; // ivar: _faceCount
@property (nonatomic) BOOL hasCapturedAtAOI; // ivar: _hasCapturedAtAOI
@property (nonatomic) BOOL hasCapturedAtBusiness; // ivar: _hasCapturedAtBusiness
@property (nonatomic) BOOL hasCapturedAtFrequentLocation; // ivar: _hasCapturedAtFrequentLocation
@property (nonatomic) BOOL hasCapturedAtHome; // ivar: _hasCapturedAtHome
@property (nonatomic) BOOL hasCapturedAtPOI; // ivar: _hasCapturedAtPOI
@property (nonatomic) BOOL hasCapturedAtROI; // ivar: _hasCapturedAtROI
@property (nonatomic) BOOL hasCapturedAtWork; // ivar: _hasCapturedAtWork
@property (nonatomic) BOOL hasCapturedOnShortTrip; // ivar: _hasCapturedOnShortTrip
@property (nonatomic) BOOL hasCapturedOnTrip; // ivar: _hasCapturedOnTrip
@property (nonatomic) BOOL hasContainsBaby; // ivar: _hasContainsBaby
@property (nonatomic) BOOL hasContainsChild; // ivar: _hasContainsChild
@property (nonatomic) BOOL hasContainsCoWorker; // ivar: _hasContainsCoWorker
@property (nonatomic) BOOL hasContainsFamily; // ivar: _hasContainsFamily
@property (nonatomic) BOOL hasContainsFriends; // ivar: _hasContainsFriends
@property (nonatomic) BOOL hasContainsMyPet; // ivar: _hasContainsMyPet
@property (nonatomic) BOOL hasContainsParent; // ivar: _hasContainsParent
@property (nonatomic) BOOL hasContainsPartner; // ivar: _hasContainsPartner
@property (nonatomic) BOOL hasContainsPets; // ivar: _hasContainsPets
@property (nonatomic) BOOL hasContainsSibling; // ivar: _hasContainsSibling
@property (nonatomic) BOOL hasContainsSocialGroup; // ivar: _hasContainsSocialGroup
@property (nonatomic) BOOL hasContainsVIP; // ivar: _hasContainsVIP
@property (nonatomic) BOOL hasFaceCount; // ivar: _hasFaceCount
@property (nonatomic) BOOL hasIsCapturedAtPrivateEvent; // ivar: _hasIsCapturedAtPrivateEvent
@property (nonatomic) BOOL hasIsCapturedAtPublicEvent; // ivar: _hasIsCapturedAtPublicEvent
@property (nonatomic) BOOL hasIsCapturedOnHoliday; // ivar: _hasIsCapturedOnHoliday
@property (nonatomic) BOOL hasIsCapturedOnWeekend; // ivar: _hasIsCapturedOnWeekend
@property (nonatomic) BOOL hasIsContainedInActivity; // ivar: _hasIsContainedInActivity
@property (nonatomic) BOOL hasIsContainedInChildActivity; // ivar: _hasIsContainedInChildActivity
@property (nonatomic) BOOL hasIsContainedInOnThisDay; // ivar: _hasIsContainedInOnThisDay
@property (nonatomic) BOOL hasIsContainedInSharedAlbum; // ivar: _hasIsContainedInSharedAlbum
@property (nonatomic) BOOL hasIsContainedInVisualTrend; // ivar: _hasIsContainedInVisualTrend
@property (nonatomic) BOOL hasIsCoupon; // ivar: _hasIsCoupon
@property (nonatomic) BOOL hasIsDocument; // ivar: _hasIsDocument
@property (nonatomic) BOOL hasIsFavorite; // ivar: _hasIsFavorite
@property (nonatomic) BOOL hasIsMeme; // ivar: _hasIsMeme
@property (nonatomic) BOOL hasIsReceipt; // ivar: _hasIsReceipt
@property (nonatomic) BOOL hasIsRecentEdit; // ivar: _hasIsRecentEdit
@property (nonatomic) BOOL hasIsRecentFavorite; // ivar: _hasIsRecentFavorite
@property (nonatomic) BOOL hasIsRecentShare; // ivar: _hasIsRecentShare
@property (nonatomic) BOOL hasIsRecentView; // ivar: _hasIsRecentView
@property (nonatomic) BOOL hasIsRecipe; // ivar: _hasIsRecipe
@property (nonatomic) BOOL hasIsScreenshot; // ivar: _hasIsScreenshot
@property (nonatomic) BOOL hasUserHasHome; // ivar: _hasUserHasHome
@property (nonatomic) BOOL hasUserHasPet; // ivar: _hasUserHasPet
@property (nonatomic) BOOL hasUserHasVIP; // ivar: _hasUserHasVIP
@property (nonatomic) BOOL hasUserNumFavorites; // ivar: _hasUserNumFavorites
@property (nonatomic) BOOL hasUserNumTrips; // ivar: _hasUserNumTrips
@property (nonatomic) BOOL hasUserNumVIPPeople; // ivar: _hasUserNumVIPPeople
@property (nonatomic) BOOL hasUserisDAU; // ivar: _hasUserisDAU
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) int importSource; // ivar: _importSource
@property (readonly, nonatomic) BOOL isCapturedAtPrivateEvent; // ivar: _isCapturedAtPrivateEvent
@property (readonly, nonatomic) BOOL isCapturedAtPublicEvent; // ivar: _isCapturedAtPublicEvent
@property (readonly, nonatomic) BOOL isCapturedOnHoliday; // ivar: _isCapturedOnHoliday
@property (readonly, nonatomic) BOOL isCapturedOnWeekend; // ivar: _isCapturedOnWeekend
@property (readonly, nonatomic) BOOL isContainedInActivity; // ivar: _isContainedInActivity
@property (readonly, nonatomic) BOOL isContainedInChildActivity; // ivar: _isContainedInChildActivity
@property (readonly, nonatomic) BOOL isContainedInOnThisDay; // ivar: _isContainedInOnThisDay
@property (readonly, nonatomic) BOOL isContainedInSharedAlbum; // ivar: _isContainedInSharedAlbum
@property (readonly, nonatomic) BOOL isContainedInVisualTrend; // ivar: _isContainedInVisualTrend
@property (readonly, nonatomic) BOOL isCoupon; // ivar: _isCoupon
@property (readonly, nonatomic) BOOL isDocument; // ivar: _isDocument
@property (readonly, nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (readonly, nonatomic) BOOL isMeme; // ivar: _isMeme
@property (readonly, nonatomic) BOOL isReceipt; // ivar: _isReceipt
@property (readonly, nonatomic) BOOL isRecentEdit; // ivar: _isRecentEdit
@property (readonly, nonatomic) BOOL isRecentFavorite; // ivar: _isRecentFavorite
@property (readonly, nonatomic) BOOL isRecentShare; // ivar: _isRecentShare
@property (readonly, nonatomic) BOOL isRecentView; // ivar: _isRecentView
@property (readonly, nonatomic) BOOL isRecipe; // ivar: _isRecipe
@property (readonly, nonatomic) BOOL isScreenshot; // ivar: _isScreenshot
@property (readonly, nonatomic) int mediaType; // ivar: _mediaType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userEvent; // ivar: _userEvent
@property (readonly, nonatomic) BOOL userHasHome; // ivar: _userHasHome
@property (readonly, nonatomic) BOOL userHasPet; // ivar: _userHasPet
@property (readonly, nonatomic) BOOL userHasVIP; // ivar: _userHasVIP
@property (readonly, nonatomic) int userLibraryAgeInDays; // ivar: _userLibraryAgeInDays
@property (readonly, nonatomic) int userLibrarySize; // ivar: _userLibrarySize
@property (readonly, nonatomic) int userNumFavorites; // ivar: _userNumFavorites
@property (readonly, nonatomic) int userNumTrips; // ivar: _userNumTrips
@property (readonly, nonatomic) int userNumVIPPeople; // ivar: _userNumVIPPeople
@property (readonly, nonatomic) CGFloat userisDAU; // ivar: _userisDAU


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 userEvent:(id)arg1 containsVIP:(id)arg2 faceCount:(id)arg3 containsPets:(id)arg4 capturedAtHome:(id)arg5 capturedAtWork:(id)arg6 capturedAtFrequentLocation:(id)arg7 capturedOnTrip:(id)arg8 capturedOnShortTrip:(id)arg9 isDocument:(id)arg10 isMeme:(id)arg11 isScreenshot:(id)arg12 isFavorite:(id)arg13 isCapturedOnWeekend:(id)arg14 isCapturedAtPrivateEvent:(id)arg15 isCapturedOnHoliday:(id)arg16 mediaType:(int)arg17 importSource:(int)arg18 assetAge:(int)arg19 userLibrarySize:(int)arg20 userNumTrips:(id)arg21 userNumVIPPeople:(id)arg22 userNumFavorites:(id)arg23 userHasVIP:(id)arg24 userHasHome:(id)arg25 userHasPet:(id)arg26 containsBaby:(id)arg27 containsSocialGroup:(id)arg28 containsMyPet:(id)arg29 containsCoWorker:(id)arg30 containsFamily:(id)arg31 containsFriends:(id)arg32 containsPartner:(id)arg33 containsParent:(id)arg34 containsSibling:(id)arg35 containsChild:(id)arg36 isCoupon:(id)arg37 isRecipe:(id)arg38 isReceipt:(id)arg39 isRecentView:(id)arg40 isRecentEdit:(id)arg41 isRecentShare:(id)arg42 isRecentFavorite:(id)arg43 isContainedInSharedAlbum:(id)arg44 isContainedInOnThisDay:(id)arg45 capturedAtAOI:(id)arg46 capturedAtPOI:(id)arg47 capturedAtROI:(id)arg48 capturedAtBusiness:(id)arg49 isCapturedAtPublicEvent:(id)arg50 isContainedInVisualTrend:(id)arg51 isContainedInActivity:(id)arg52 isContainedInChildActivity:(id)arg53 userLibraryAgeInDays:(int)arg54 userisDAU:(id)arg55 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif