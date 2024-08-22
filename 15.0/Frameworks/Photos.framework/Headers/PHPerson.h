// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHPERSON_H
#define PHPERSON_H

@class NSDictionary, NSString;


#import "PHObject.h"

@interface PHPerson : PHObject

@property (readonly, nonatomic) unsigned short ageType; // ivar: _ageType
@property (readonly, nonatomic) NSDictionary *contactMatchingDictionary; // ivar: _contactMatchingDictionary
@property (readonly, nonatomic) short detectionType; // ivar: _detectionType
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSInteger faceCount; // ivar: _faceCount
@property (readonly, nonatomic) unsigned short genderType; // ivar: _genderType
@property (readonly, nonatomic, getter=isInPersonNamingModel) BOOL inPersonNamingModel; // ivar: _inPersonNamingModel
@property (readonly, nonatomic) NSUInteger manualOrder; // ivar: _manualOrder
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger persistedSuggestionForClient; // ivar: _persistedSuggestionForClient
@property (readonly, nonatomic) NSString *personUri; // ivar: _personUri
@property (readonly, nonatomic) unsigned short questionType; // ivar: _questionType
@property (readonly, nonatomic) unsigned short sexType; // ivar: _sexType
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic) NSInteger verifiedType; // ivar: _verifiedType


+(BOOL)managedObjectSupportsDetectionType;
+(BOOL)managedObjectSupportsKeyFaces;
+(BOOL)managedObjectSupportsPersonFilters;
+(BOOL)managedObjectSupportsTorsoOnly;
+(Class)propertySetClassForPropertySet:(id)arg0 ;
+(NSInteger)_personSuggestionsForPerson:(id)arg0 confirmedPersonSuggestions:(id)arg1 rejectedPersonSuggestions:(id)arg2 fromClient:(id)arg3 completion:(id)arg4 ;
+(NSInteger)personSuggestionsForPerson:(id)arg0 confirmedPersonSuggestions:(id)arg1 rejectedPersonSuggestions:(id)arg2 completion:(id)arg3 ;
+(NSInteger)updateKeyFacesOfPersons:(id)arg0 forceUpdate:(BOOL)arg1 completion:(id)arg2 ;
+(NSUInteger)propertyFetchHintsForPropertySets:(id)arg0 ;
+(id)_assetLocalIdentifiersForAssetCollection:(id)arg0 ;
+(id)_composePropertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)_convertToPersonSuggestion:(id)arg0 photoLibrary:(id)arg1 ;
+(id)_fetchSuggestedPersonsForClient:(NSUInteger)arg0 options:(id)arg1 ;
+(id)_fetchSuggestedPersonsForRecipients:(id)arg0 options:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg0 assetCollection:(id)arg1 options:(id)arg2 client:(NSUInteger)arg3 ;
+(id)_momentLocalIdentifiersForAssetCollection:(id)arg0 ;
+(id)_packageSuggestionList:(id)arg0 photoLibrary:(id)arg1 ;
+(id)_personSuggestionMarkedAsConfirmed:(BOOL)arg0 fromPersonSuggestion:(id)arg1 ;
+(id)_requestSuggestedPersonsForClient:(NSUInteger)arg0 options:(id)arg1 ;
+(id)batchFetchContactInferencesForPersons:(id)arg0 queryOptions:(NSUInteger)arg1 ;
+(id)batchFetchRelationshipInferencesForPersons:(id)arg0 ;
+(id)batchFetchSuggestedRecipientsForAssets:(id)arg0 options:(id)arg1 ;
+(id)corePropertiesToFetch;
+(id)displayNameFromContact:(id)arg0 ;
+(id)entityKeyMap;
+(id)fetchAssociatedPersonsGroupedByFaceGroupLocalIdentifierForFaceGroups:(id)arg0 options:(id)arg1 ;
+(id)fetchFinalMergeTargetPersonsForPersonWithUUID:(id)arg0 options:(id)arg1 ;
+(id)fetchInvalidMergeCandidatePersonsForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchMergeCandidatePersonsForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonAssociatedWithFaceGroup:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonCountGroupedByAssetLocalIdentifierForAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonWithFace:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonsForAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonsForContactIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonsForContacts:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonsForReferences:(id)arg0 photoLibrary:(id)arg1 ;
+(id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonsInAsset:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonsInAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchPersonsWithOptions:(id)arg0 ;
+(id)fetchPersonsWithQuestionType:(unsigned short)arg0 options:(id)arg1 ;
+(id)fetchPersonsWithType:(NSInteger)arg0 options:(id)arg1 ;
+(id)fetchPersonsWithUserFeedbackWithOptions:(id)arg0 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchRejectedPersonsForFace:(id)arg0 options:(id)arg1 ;
+(id)fetchSuggestedPersonsForAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchSuggestedPersonsForClient:(NSUInteger)arg0 options:(id)arg1 ;
+(id)fetchSuggestedPersonsForFocusedAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchSuggestedRecipientsForAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)fetchVerifiedPersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg0 options:(id)arg1 ;
+(id)fullNameFromContact:(id)arg0 ;
+(id)identifierCode;
+(id)identifierPropertiesToFetch;
+(id)inferredContactByPersonLocalIdentifierForPersons:(id)arg0 ;
+(id)localIdentifierExpressionForFetchRequests;
+(id)managedEntityName;
+(id)personSuggestionsForPerson:(id)arg0 confirmedPersonSuggestions:(id)arg1 rejectedPersonSuggestions:(id)arg2 ;
+(id)personToKeepForCloudConistencyFromPersons:(id)arg0 ;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)propertySetAccessorsByPropertySet;
+(id)propertySetsForPropertyFetchHints:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(Class)changeRequestClass;
-(id)_createPropertyObjectOfClass:(Class)arg0 ;
-(id)_createPropertyObjectOfClass:(Class)arg0 preFetchedProperties:(id)arg1 ;
-(id)description;
-(id)inferredContact;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)linkedContactWithKeysToFetch:(id)arg0 ;
-(id)objectReference;
-(id)suggestedContacts;
-(id)userFeedbackProperties;
-(void)fetchPropertySetsIfNeeded;
-(void)markAsNeedingKeyFace;


@end


#endif