// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSISTEDPERSONFACEMETADATA_H
#define PLPERSISTEDPERSONFACEMETADATA_H

@class NSString, NSArray, NSNumber;
@protocol NSSecureCoding, PLFaceRebuildDescription, PLDetectionAdditionalDescription;

#import <Foundation/Foundation.h>


@interface PLPersistedPersonFaceMetadata : NSObject <NSSecureCoding, PLFaceRebuildDescription, PLDetectionAdditionalDescription>



@property (copy, nonatomic) NSString *assetCloudGUID; // ivar: _assetCloudGUID
@property (copy, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (nonatomic) CGFloat bodyCenterX; // ivar: _bodyCenterX
@property (nonatomic) CGFloat bodyCenterY; // ivar: _bodyCenterY
@property (nonatomic) CGFloat bodyHeight; // ivar: _bodyHeight
@property (nonatomic) CGFloat bodyWidth; // ivar: _bodyWidth
@property (nonatomic) CGFloat centerX; // ivar: _centerX
@property (nonatomic) CGFloat centerY; // ivar: _centerY
@property (nonatomic) int cloudNameSource; // ivar: _cloudNameSource
@property (nonatomic, getter=isClusterRejected) BOOL clusterRejected; // ivar: _clusterRejected
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *detectionTraits; // ivar: _detectionTraits
@property (nonatomic) NSNumber *detectionType; // ivar: _detectionType
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic, getter=isHidden) BOOL isHidden; // ivar: _isHidden
@property (nonatomic, getter=isManual) BOOL manual; // ivar: _manual
@property (nonatomic) int nameSource; // ivar: _nameSource
@property (nonatomic, getter=isRepresentative) BOOL representative; // ivar: _representative
@property (nonatomic) CGFloat size; // ivar: _size
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_detectedFacePropertiesToFetch;
+(id)_detectedFaceRelationshipKeyPathsToPrefetch;
+(id)_migrateDetectedFaces:(id)arg0 forPersonMetadata:(id)arg1 fromVersion:(NSUInteger)arg2 ;
+(id)_persistedFaceMetadataWithDetectedFace:(id)arg0 isKeyFace:(BOOL)arg1 isClusterRejected:(BOOL)arg2 ;
+(id)_persistedFacesWithUnarchiver:(id)arg0 key:(id)arg1 ;
+(void)enumerateMatchedAssetsWithMetadata:(id)arg0 inContext:(id)arg1 withBlock:(id)arg2 ;
-(BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg0 forConfirmedPersonUUID:(id)arg1 diff:(*id)arg2 ;
-(BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg0 forRejectedPersonUUID:(id)arg1 diff:(*id)arg2 ;
-(id)_identifier;
-(id)_insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg0 personUUID:(id)arg1 isRejected:(BOOL)arg2 ;
-(id)additionalDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionary;
-(id)matchingFaceInManagedObejctContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif