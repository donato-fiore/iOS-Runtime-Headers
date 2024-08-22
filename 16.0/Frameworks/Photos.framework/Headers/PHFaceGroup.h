// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHFACEGROUP_H
#define PHFACEGROUP_H



#import "PHObject.h"

@interface PHFaceGroup : PHObject

@property (readonly, nonatomic) NSInteger personBuilderState; // ivar: _personBuilderState
@property (readonly, nonatomic) NSInteger personModelId; // ivar: _personModelId
@property (readonly, nonatomic) NSInteger unnamedFaceCount; // ivar: _unnamedFaceCount


+(id)entityKeyMap;
+(id)fetchEmptyFaceGroupsWithOptions:(id)arg0 ;
+(id)fetchFaceGroupsForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)arg0 options:(id)arg1 ;
+(id)fetchFaceGroupsWithFace:(id)arg0 options:(id)arg1 ;
+(id)fetchFaceGroupsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchFaceGroupsWithOptions:(id)arg0 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(Class)changeRequestClass;
-(NSInteger)getPersonModelId;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;


@end


#endif