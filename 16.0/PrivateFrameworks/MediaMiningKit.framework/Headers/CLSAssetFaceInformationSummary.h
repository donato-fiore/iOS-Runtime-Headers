// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSASSETFACEINFORMATIONSUMMARY_H
#define CLSASSETFACEINFORMATIONSUMMARY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CLSAssetFaceInformationSummary : NSObject

@property (readonly) CGFloat averageFaceQuality; // ivar: _averageFaceQuality
@property (readonly) CGFloat averageFaceQualityIncludingPets; // ivar: _averageFaceQualityIncludingPets
@property (readonly) CGFloat averageFaceQualityOfVerifiedPersons; // ivar: _averageFaceQualityOfVerifiedPersons
@property (readonly) NSDictionary *faceInformationByConsolidatedPersonLocalIdentifier; // ivar: _faceInformationByConsolidatedPersonLocalIdentifier
@property (readonly) NSDictionary *faceInformationByPersonLocalIdentifier; // ivar: _faceInformationByPersonLocalIdentifier
@property (readonly) unsigned short numberOfFaces; // ivar: _numberOfFaces
@property (readonly) unsigned short numberOfFacesIncludingPets; // ivar: _numberOfFacesIncludingPets
@property (readonly) unsigned short numberOfFacesOfHiddenPersons; // ivar: _numberOfFacesOfHiddenPersons
@property (readonly) unsigned short numberOfFacesOfVerifiedPersons; // ivar: _numberOfFacesOfVerifiedPersons
@property (readonly) unsigned short numberOfGoodFaces; // ivar: _numberOfGoodFaces
@property (readonly) unsigned short numberOfGoodFacesIncludingPets; // ivar: _numberOfGoodFacesIncludingPets
@property (readonly) unsigned short numberOfGoodFacesOfVerifiedPersons; // ivar: _numberOfGoodFacesOfVerifiedPersons


+(id)_faceInformationByPersonLocalIdentifierFromDictionaryRepresentation:(id)arg0 ;
-(id)_dictionaryRepresentationForFaceInformationByPersonLocalIdentifier:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithNumberOfFaces:(NSUInteger)arg0 numberOfFacesIncludingPets:(NSUInteger)arg1 numberOfFacesOfVerifiedPersons:(NSUInteger)arg2 numberOfFacesOfHiddenPersons:(NSUInteger)arg3 numberOfGoodFaces:(NSUInteger)arg4 numberOfGoodFacesIncludingPets:(NSUInteger)arg5 numberOfGoodFacesOfVerifiedPersons:(NSUInteger)arg6 averageFaceQuality:(CGFloat)arg7 averageFaceQualityIncludingPets:(CGFloat)arg8 averageFaceQualityOfVerifiedPersons:(CGFloat)arg9 faceInformationByPersonLocalIdentifier:(id)arg10 faceInformationByConsolidatedPersonLocalIdentifier:(id)arg11 ;


@end


#endif