// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHFACECROP_H
#define PHFACECROP_H

@class NSData;


#import "PHObject.h"

@interface PHFaceCrop : PHObject

@property (readonly, nonatomic) NSData *resourceData; // ivar: _resourceData
@property (readonly, nonatomic) short state; // ivar: _state
@property (readonly, nonatomic) short type; // ivar: _type


+(id)_trainingFaceCropByUUIDForPerson:(id)arg0 options:(id)arg1 ;
+(id)entityKeyMap;
+(id)fetchFaceCropByFaceLocalIdentifierForFaces:(id)arg0 fetchOptions:(id)arg1 ;
+(id)fetchFaceCropsForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg0 ;
+(id)fetchFaceCropsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchFaceCropsWithOptions:(id)arg0 ;
+(id)fetchTransientTrainingFaceCropsForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)identifierCode;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(Class)changeRequestClass;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;


@end


#endif