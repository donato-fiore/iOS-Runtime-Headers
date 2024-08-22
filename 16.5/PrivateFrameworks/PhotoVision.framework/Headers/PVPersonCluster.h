// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVPERSONCLUSTER_H
#define PVPERSONCLUSTER_H

@class NSDate, NSString, NSMutableSet, NSMutableDictionary, NSSet;
@protocol PVPersonProtocol, PVFaceProtocol, PVPhotoLibraryProtocol, PVFaceGroupProtocol;

#import <Foundation/Foundation.h>


@interface PVPersonCluster : NSObject <PVPersonProtocol>

 {
    NSUInteger _hash;
    NSDate *_firstSeenDateWithoutOutliers;
}


@property (readonly, nonatomic) NSString *anonymizedName;
@property (retain, nonatomic) NSMutableSet *backingAssetIdentifiers; // ivar: _backingAssetIdentifiers
@property (retain, nonatomic) NSMutableSet *backingFaceIdentifiers; // ivar: _backingFaceIdentifiers
@property (retain, nonatomic) NSMutableDictionary *backingFaceIdentifiersByMomentIdentifiers; // ivar: _backingFaceIdentifiersByMomentIdentifiers
@property (retain, nonatomic) NSMutableSet *backingMomentIdentifiers; // ivar: _backingMomentIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger faceCount;
@property (readonly, nonatomic) BOOL favorite;
@property (retain, nonatomic) NSDate *firstSeenDate; // ivar: _firstSeenDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden;
@property (nonatomic) BOOL highlyInteresting; // ivar: _highlyInteresting
@property (nonatomic) CGFloat interestingScore; // ivar: _interestingScore
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSObject<PVFaceProtocol> *keyFace;
@property (retain, nonatomic) NSDate *lastSeenDate; // ivar: _lastSeenDate
@property (readonly, nonatomic) CGFloat libraryTimespan;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (nonatomic) NSInteger manualOrder;
@property (retain, nonatomic) NSMutableSet *mergedPersonIdentifiers; // ivar: _mergedPersonIdentifiers
@property (weak, nonatomic) NSObject<PVPhotoLibraryProtocol> *photoLibrary; // ivar: _photoLibrary
@property (nonatomic) BOOL quarantined; // ivar: _quarantined
@property (retain, nonatomic) NSMutableDictionary *representativeFaceByFaceIdentifiers; // ivar: _representativeFaceByFaceIdentifiers
@property (retain, nonatomic) NSObject<PVFaceGroupProtocol> *sourceFaceGroup; // ivar: _sourceFaceGroup
@property (retain, nonatomic) NSObject<PVPersonProtocol> *sourcePerson; // ivar: _sourcePerson
@property (retain, nonatomic) NSSet *sourcePersonBackingAssetIdentifiers; // ivar: _sourcePersonBackingAssetIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger verifiedType;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)sideFaceRatio;
-(id)fetchAssets;
-(id)fetchFaces;
-(id)fetchMoments;
-(id)firstSeenDateWithoutOutliersForAgeType:(unsigned short)arg0 ;
-(id)initWithFaceGroup:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)initWithPerson:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)personLocalIdentifiers;
-(void)_cacheDates;
-(void)_cacheDatesWithoutOutliersWithMaximumDistanceBetweenMoments:(CGFloat)arg0 ;
-(void)invalidateCaches;
-(void)pv_addMergeCandidatePersons:(id)arg0 ;


@end


#endif