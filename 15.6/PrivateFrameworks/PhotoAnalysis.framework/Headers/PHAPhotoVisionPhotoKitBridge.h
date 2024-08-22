// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAPHOTOVISIONPHOTOKITBRIDGE_H
#define PHAPHOTOVISIONPHOTOKITBRIDGE_H


#import <Foundation/Foundation.h>


@interface PHAPhotoVisionPhotoKitBridge : NSObject



+(id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newAssetFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)phFaceCropFromPVFaceCrop:(id)arg0 withFetchOptions:(id)arg1 ;
+(id)phFaceCropsFromPVFaceCrops:(id)arg0 withFetchOptions:(id)arg1 ;
+(id)phFaceFromPVFace:(id)arg0 withFetchOptions:(id)arg1 ;
+(id)phFaceprintFromPVFaceprint:(id)arg0 ;
+(id)phFacesFromPVFaces:(id)arg0 withFetchOptions:(id)arg1 ;
+(id)pvFaceCropFromPHFaceCrop:(id)arg0 ;
+(id)pvFaceFromPHFace:(id)arg0 copyPropertiesOption:(NSInteger)arg1 ;
+(id)pvFaceprintFromPHFaceprint:(id)arg0 ;
+(id)pvFacesArrayFromPHFetchResult:(id)arg0 copyPropertiesOption:(NSInteger)arg1 ;
+(id)vnFaceAttributeAgeToPHFaceAgeTypeMap;
+(id)vnFaceAttributeBaldToPHFaceBaldTypeMap;
+(id)vnFaceAttributeEyesToPHEyesStateMap;
+(id)vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+(id)vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+(id)vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+(id)vnFaceAttributeSexToPHFaceSexTypeMap;
+(id)vnFaceAttributeSmileToPHFaceSmileTypeMap;
+(unsigned short)phFaceAgeTypeFromPVFace:(id)arg0 ;
+(unsigned short)phFaceBaldTypeFromPVFace:(id)arg0 ;
+(unsigned short)phFaceEyesStateFromPVFace:(id)arg0 ;
+(unsigned short)phFaceFacialHairTypeFromPVFace:(id)arg0 ;
+(unsigned short)phFaceGlassesTypeFromPVFace:(id)arg0 ;
+(unsigned short)phFaceHairColorTypeFromPVFace:(id)arg0 ;
+(unsigned short)phFaceSexFromPVFace:(id)arg0 ;
+(unsigned short)phFaceSmileTypeFromPVFace:(id)arg0 ;
+(void)assignPropertiesOfPVFace:(id)arg0 toPHFaceChangeRequest:(id)arg1 ;


@end


#endif