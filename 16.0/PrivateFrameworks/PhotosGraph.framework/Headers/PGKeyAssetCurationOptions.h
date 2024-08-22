// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGKEYASSETCURATIONOPTIONS_H
#define PGKEYASSETCURATIONOPTIONS_H

@class PHAsset, CLLocation, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PGCurationCriteria.h"

@interface PGKeyAssetCurationOptions : NSObject <NSCopying>



@property (nonatomic) BOOL allowContextualTrip; // ivar: _allowContextualTrip
@property (nonatomic) BOOL allowGuestAsset; // ivar: _allowGuestAsset
@property (nonatomic) BOOL complete; // ivar: _complete
@property (retain, nonatomic) PGCurationCriteria *curationCriteria; // ivar: _curationCriteria
@property (nonatomic) BOOL focusOnPeople; // ivar: _focusOnPeople
@property (nonatomic) BOOL isForMemories; // ivar: _isForMemories
@property (nonatomic) NSUInteger minimumNumberOfReferencePersons; // ivar: _minimumNumberOfReferencePersons
@property (nonatomic) NSUInteger precision; // ivar: _precision
@property (nonatomic) BOOL prefilterAssetsWithFaces; // ivar: _prefilterAssetsWithFaces
@property (nonatomic) CGFloat prefilterAssetsWithFacesThreshold; // ivar: _prefilterAssetsWithFacesThreshold
@property (nonatomic) BOOL promoteAutoplayableItems; // ivar: _promoteAutoplayableItems
@property (readonly, nonatomic) PHAsset *referenceAsset; // ivar: _referenceAsset
@property (retain, nonatomic) CLLocation *referenceLocation; // ivar: _referenceLocation
@property (retain, nonatomic) NSSet *referencePersonLocalIdentifiers; // ivar: _referencePersonLocalIdentifiers
@property (nonatomic) BOOL useContextualCurationOnly; // ivar: _useContextualCurationOnly
@property (nonatomic) BOOL useSummarizer; // ivar: _useSummarizer
@property (nonatomic) BOOL wantsGoodSquareCropScore; // ivar: _wantsGoodSquareCropScore


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithReferenceAsset:(id)arg0 ;


@end


#endif