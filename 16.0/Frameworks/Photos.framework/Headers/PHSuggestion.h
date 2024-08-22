// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHSUGGESTION_H
#define PHSUGGESTION_H

@class NSData, NSDate, NSArray, NSDictionary, NSString;


#import "PHAssetCollection.h"

@interface PHSuggestion : PHAssetCollection {
    NSData *_actionData;
    NSData *_featuresData;
    NSDate *_creationDate;
    NSUInteger _approximateCount;
    NSUInteger _approximatePhotosCount;
    NSUInteger _approximateVideosCount;
    NSArray *_assets;
}


@property (readonly, nonatomic) NSDictionary *actionProperties; // ivar: _actionProperties
@property (readonly, nonatomic) NSDate *activationDate; // ivar: _activationDate
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSDate *expungeDate; // ivar: _expungeDate
@property (readonly, nonatomic) unsigned short featuredState; // ivar: _featuredState
@property (readonly, nonatomic) NSDictionary *featuresProperties; // ivar: _featuresProperties
@property (readonly, nonatomic) unsigned short notificationState; // ivar: _notificationState
@property (readonly, nonatomic) NSDate *relevantUntilDate; // ivar: _relevantUntilDate
@property (readonly, nonatomic) unsigned short sharingComposition; // ivar: _sharingComposition
@property (readonly, nonatomic) unsigned short state; // ivar: _state
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) unsigned short subtype; // ivar: _subtype
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)managedObjectSupportsSharingComposition;
+(BOOL)managedObjectSupportsTrashedState;
+(CGFloat)lifetimeAfterBecomingActive;
+(id)allFeaturedStateEnabledSuggestionTypes;
+(id)allFeaturedStateEnabledSuggestionTypesForWallpaper;
+(id)allFeaturedStateEnabledSuggestionTypesForWidget;
+(id)availableSuggestionTypeInfosWithOptions:(id)arg0 photoLibrary:(id)arg1 ;
+(id)entityKeyMap;
+(id)fetchAllFeaturedStateEnabledSuggestionsWithOptions:(id)arg0 ;
+(id)fetchPredicateForSharingFilter:(unsigned short)arg0 ;
+(id)fetchSuggestionsWithOptions:(id)arg0 ;
+(id)fetchSuggestionsWithState:(unsigned short)arg0 ofType:(unsigned short)arg1 withOptions:(id)arg2 ;
+(id)fetchSuggestionsWithState:(unsigned short)arg0 withOptions:(id)arg1 ;
+(id)fetchType;
+(id)fetchWallpaperSuggestionsWithFeaturedState:(unsigned short)arg0 withOptions:(id)arg1 ;
+(id)fetchWidgetSuggestionsWithFeaturedState:(unsigned short)arg0 withOptions:(id)arg1 ;
+(id)identifierCode;
+(id)localIdentifierWithUUID:(id)arg0 ;
+(id)managedEntityName;
+(id)predicateForAllFeaturedStateEnabledSuggestionTypesForWallpaper;
+(id)predicateForAllFeaturedStateEnabledSuggestionTypesForWidget;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)suggestionInfosWithOptions:(id)arg0 photoLibrary:(id)arg1 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
+(id)transientSuggestionWithInfo:(id)arg0 photoLibrary:(id)arg1 ;
-(NSUInteger)estimatedAssetCount;
-(NSUInteger)estimatedPhotosCount;
-(NSUInteger)estimatedVideosCount;
-(id)assets;
-(id)creationDate;
-(id)debugDescription;
-(id)description;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)localizedSubtitle;
-(id)predicateForAllAssets;
-(id)predicateForAllMomentsFromRepresentativeAssets;


@end


#endif