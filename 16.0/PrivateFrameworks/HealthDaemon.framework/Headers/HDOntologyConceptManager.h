// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYCONCEPTMANAGER_H
#define HDONTOLOGYCONCEPTMANAGER_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseValueCache.h"

@interface HDOntologyConceptManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_conceptsByIdentifier;
}




+(BOOL)enumerateConceptsMatchingPredicate:(id)arg0 options:(NSUInteger)arg1 limit:(NSUInteger)arg2 transaction:(id)arg3 error:(*id)arg4 enumerationHandler:(id)arg5 ;
+(BOOL)enumerateConceptsMatchingPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)enumerateRelationshipsMatchingPredicate:(id)arg0 options:(NSUInteger)arg1 transaction:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)followRelationshipsWithTypes:(id)arg0 startingIdentifier:(id)arg1 options:(NSUInteger)arg2 ontologyTransaction:(id)arg3 conceptOut:(*id)arg4 deletedRelationshipVersionOut:(*NSInteger)arg5 error:(*id)arg6 ;
+(id)conceptForCodingCollection:(id)arg0 configuration:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)inflateGraphWithRootConceptsPredicate:(id)arg0 limit:(NSInteger)arg1 maximumDepth:(NSInteger)arg2 attributeTypes:(id)arg3 relationshipTypes:(id)arg4 ontologyTransaction:(id)arg5 error:(*id)arg6 ;
+(id)predicateForConceptsFollowingRelationshipOfTypes:(id)arg0 fromSubjectId:(id)arg1 ;
+(id)predicateForRelationshipsWithTypes:(id)arg0 onConceptId:(id)arg1 ;
+(id)predicateMatchingConceptWithID:(id)arg0 ;
+(id)predicateMatchingConceptsWithAttributeType:(NSInteger)arg0 attributeValue:(id)arg1 ;
+(id)predicateMatchingConceptsWithAttributeType:(NSInteger)arg0 likeAttributeValue:(id)arg1 ;
+(id)predicateMatchingConceptsWithRelationshipType:(NSInteger)arg0 withObjectId:(id)arg1 ;
+(id)predicateMatchingConceptsWithRelationshipType:(NSInteger)arg0 withSubjectId:(id)arg1 ;
+(id)predicateMatchingRelationshipsWithSubjectId:(id)arg0 relationshipType:(NSInteger)arg1 ;
+(id)relationshipsForConceptWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(id)conceptForIdentifier:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)conceptForIdentifier:(id)arg0 options:(NSUInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(id)conceptsForIdentifiers:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)conceptsForIdentifiers:(id)arg0 options:(NSUInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;


@end


#endif