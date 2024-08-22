// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPIDENTIFIERSET_H
#define MPIDENTIFIERSET_H

@class NSString, NSArray;
@protocol MPMutableLocalLibraryIdentifiers, MPMutablePersonalStoreIdentifiers, MPMutableUniversalStoreIdentifiers, MPMutableRadioIdentifiers, MPMutableIdentifierSet, NSCopying, NSSecureCoding, MPLocalLibraryIdentifiers, MPPersonalStoreIdentifiers, MPRadioIdentifiers, MPUniversalStoreIdentifiers;

#import <Foundation/Foundation.h>

#import "MPModelKind.h"

@interface MPIdentifierSet : NSObject <MPMutableLocalLibraryIdentifiers, MPMutablePersonalStoreIdentifiers, MPMutableUniversalStoreIdentifiers, MPMutableRadioIdentifiers, MPMutableIdentifierSet, NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger adamID; // ivar: _adamID
@property (nonatomic) NSInteger assetAdamID; // ivar: _assetAdamID
@property (copy, nonatomic) NSString *cloudAlbumID; // ivar: _cloudAlbumID
@property (nonatomic) NSUInteger cloudID; // ivar: _cloudID
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic) NSInteger containedPersistentID; // ivar: _containedPersistentID
@property (copy, nonatomic) NSString *containerUniqueID; // ivar: _containerUniqueID
@property (copy, nonatomic) NSString *contentItemID; // ivar: _contentItemID
@property (readonly, nonatomic) NSString *databaseID; // ivar: _databaseID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceLibraryPersistentID;
@property (copy, nonatomic) NSArray *formerAdamIDs; // ivar: _formerAdamIDs
@property (copy, nonatomic) NSArray *formerStoreAdamIDs;
@property (copy, nonatomic) NSString *globalPlaylistID; // ivar: _globalPlaylistID
@property (copy, nonatomic) NSString *handoffCorrelationID; // ivar: _handoffCorrelationID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *humanDescription;
@property (copy, nonatomic) NSString *informalMediaClipID; // ivar: _informalMediaClipID
@property (copy, nonatomic) NSString *informalStaticAssetID; // ivar: _informalStaticAssetID
@property (readonly, nonatomic) NSObject<MPLocalLibraryIdentifiers> *library;
@property (copy, nonatomic) NSString *lyricsID; // ivar: _lyricsID
@property (readonly, nonatomic) MPModelKind *modelKind; // ivar: _modelKind
@property (readonly, nonatomic) BOOL needsPersonalization;
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (readonly, nonatomic) NSObject<MPPersonalStoreIdentifiers> *personalizedStore;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (nonatomic) NSInteger purchasedAdamID; // ivar: _purchasedAdamID
@property (readonly, nonatomic) NSObject<MPRadioIdentifiers> *radio;
@property (copy, nonatomic) NSString *radioStationHash;
@property (nonatomic) NSInteger radioStationID;
@property (copy, nonatomic) NSString *radioStationStringID;
@property (copy, nonatomic) NSString *recommendationID; // ivar: _recommendationID
@property (nonatomic) NSInteger reportingAdamID; // ivar: _reportingAdamID
@property (nonatomic) BOOL shouldExcludeFromShuffle; // ivar: _shouldExcludeFromShuffle
@property (copy, nonatomic) NSString *socialProfileID; // ivar: _socialProfileID
@property (copy, nonatomic) NSString *stationEventID; // ivar: _stationEventID
@property (copy, nonatomic) NSString *stationHash; // ivar: _stationHash
@property (nonatomic) NSInteger stationID; // ivar: _stationID
@property (copy, nonatomic) NSString *stationStringID; // ivar: _stationStringID
@property (nonatomic) NSInteger storeAdamID;
@property (copy, nonatomic) NSString *storeCloudAlbumID;
@property (nonatomic) NSUInteger storeCloudID;
@property (nonatomic) NSInteger storePurchasedAdamID;
@property (copy, nonatomic) NSString *storeRecommendationID;
@property (nonatomic) NSInteger storeSubscriptionAdamID;
@property (nonatomic) NSInteger subscriptionAdamID; // ivar: _subscriptionAdamID
@property (readonly) Class superclass;
@property (nonatomic) NSInteger syncID; // ivar: _syncID
@property (copy, nonatomic) NSString *universalCloudLibraryID; // ivar: _universalCloudLibraryID
@property (readonly, nonatomic) NSObject<MPUniversalStoreIdentifiers> *universalStore;
@property (copy, nonatomic) NSString *vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
+(id)emptyIdentifierSet;
-(BOOL)hasCommonIdentifierWithIdentifierSet:(id)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithModelKind:(id)arg0 block:(id)arg1 ;
-(id)_stateDumpObject;
-(id)copyWithBlock:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifierDescriptions:(BOOL)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelKind:(id)arg0 block:(id)arg1 ;
-(id)preferredStoreStringIdentifierForPersonID:(id)arg0 ;
-(id)prioritizedStoreStringIdentifiersForPersonID:(id)arg0 ;
-(id)unionSet:(id)arg0 ;
-(void)_setDefaultDatabaseIDIfNeeded;
-(void)_setDefaultPersonIDIfNeeded;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPersonalStoreIdentifiersWithPersonID:(id)arg0 block:(id)arg1 ;


@end


#endif