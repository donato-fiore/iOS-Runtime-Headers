// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHOBJECT_H
#define PHOBJECT_H

@class NSString, NSManagedObjectID;
@protocol PLLocalUUIDConverter, NSCopying;

#import <Foundation/Foundation.h>

#import "PHObjectReference.h"
#import "PHPhotoLibrary.h"

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) id *identifier;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly) NSManagedObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) PHObjectReference *objectReference;
@property (readonly) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property NSUInteger propertyHint; // ivar: _propertyHint
@property (readonly) Class superclass;
@property (readonly, getter=isTransient) BOOL transient;
@property (readonly) NSString *uuid; // ivar: _uuid


+(BOOL)managedObjectSupportsAllowedForAnalysis;
+(BOOL)managedObjectSupportsBodyDetection;
+(BOOL)managedObjectSupportsBursts;
+(BOOL)managedObjectSupportsContributor;
+(BOOL)managedObjectSupportsDetectionType;
+(BOOL)managedObjectSupportsDuplicateVisibilityState;
+(BOOL)managedObjectSupportsFaceState;
+(BOOL)managedObjectSupportsHiddenState;
+(BOOL)managedObjectSupportsKeyFaces;
+(BOOL)managedObjectSupportsMontage;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsPersonFilters;
+(BOOL)managedObjectSupportsRejectedState;
+(BOOL)managedObjectSupportsSavedAssetType;
+(BOOL)managedObjectSupportsShareExitingState;
+(BOOL)managedObjectSupportsShareExpiredState;
+(BOOL)managedObjectSupportsShareTrashedState;
+(BOOL)managedObjectSupportsSharingComposition;
+(BOOL)managedObjectSupportsTorsoOnly;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)managedObjectSupportsVisibilityState;
+(Class)propertySetClassForPropertySet:(id)arg0 ;
+(NSUInteger)propertyFetchHintsForPropertySets:(id)arg0 ;
+(id)authorizationAwareFetchResultWithOptions:(id)arg0 fetchBlock:(id)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg0 ;
+(id)entityKeyMap;
+(id)fetchPredicateForSharingFilter:(unsigned short)arg0 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)identifierCodeFromLocalIdentifier:(id)arg0 ;
+(id)localIdentifierWithUUID:(id)arg0 ;
+(id)localIdentifiersWithUUIDs:(id)arg0 ;
+(id)managedEntityName;
+(id)objectIDsMatchingEntityFromObjectIDs:(id)arg0 context:(id)arg1 ;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)propertyKeyForEntityKey:(id)arg0 ;
+(id)propertySetAccessorsByPropertySet;
+(id)propertySetsForPropertyFetchHints:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
+(id)uuidFromLocalIdentifier:(id)arg0 ;
+(id)uuidsFromLocalIdentifiers:(id)arg0 ;
+(void)assertAllObjects:(id)arg0 forSelector:(SEL)arg1 areOfType:(Class)arg2 ;
+(void)extendPropertiesToFetch:(id)arg0 withProperties:(id)arg1 ;
+(void)extendPropertiesToFetch:(id)arg0 withPropertySetClass:(Class)arg1 ;
-(BOOL)hasLoadedPropertySet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)changeRequestClass;
-(id)_shortObjectIDURI;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(void)dealloc;


@end


#endif