// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPFACEUTILS_H
#define VCPFACEUTILS_H


#import <Foundation/Foundation.h>


@interface VCPFaceUtils : NSObject



+(id)_firstLocallyAvailableResourceFromResources:(id)arg0 ;
+(id)_vnFaceAttributeAgeToPHFaceAgeTypeMap;
+(id)_vnFaceAttributeEthnicityToPHFaceEthnicityType;
+(id)_vnFaceAttributeEyesToPHEyesStateMap;
+(id)_vnFaceAttributeFacialHairToPHFaceExpressionType;
+(id)_vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+(id)_vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+(id)_vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+(id)_vnFaceAttributeHairTypeToPHFaceHairType;
+(id)_vnFaceAttributeHeadGearToPHFaceHeadGearType;
+(id)_vnFaceAttributePoseToPHFacePoseType;
+(id)_vnFaceAttributeSexToPHFaceSexTypeMap;
+(id)_vnFaceAttributeSkintoneToPHFaceSkintoneType;
+(id)_vnFaceAttributeSmileToPHFaceSmileTypeMap;
+(id)_vnFaceGazeDirectionToPHFaceGazeType;
+(id)imageCreationOptions;
+(id)mad_PHFaceGazeTypeDescription:(unsigned short)arg0 ;
+(id)mad_VNFaceGazeDirectionDescription:(NSInteger)arg0 ;
+(id)phFaceFromVCPPhotosFace:(id)arg0 withFetchOptions:(id)arg1 ;
+(id)phFacesFromVCPPhotosFaces:(id)arg0 withFetchOptions:(id)arg1 ;
+(id)preferredResourcesForFaceProcessingWithAsset:(id)arg0 ;
+(id)resourceForFaceProcessing:(id)arg0 allowStreaming:(BOOL)arg1 ;
+(id)resourceForFaceProcessingWithAsset:(id)arg0 allowStreaming:(BOOL)arg1 ;
+(id)vcpPhotosFaceFromPHFace:(id)arg0 copyPropertiesOption:(NSInteger)arg1 ;
+(int)configureVNRequest:(*id)arg0 withClass:(Class)arg1 andProcessingVersion:(int)arg2 ;
+(unsigned short)mad_PHValueFromVNAgeCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNEthnicityCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNExpressionCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNEyesCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNFaceGazeDirection:(NSInteger)arg0 ;
+(unsigned short)mad_PHValueFromVNFaceHairCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNFaceHairCategoryV2Label:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNGlassesCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNHairColorCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNHeadgearCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNPoseCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNSexCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNSkintoneCategoryLabel:(id)arg0 ;
+(unsigned short)mad_PHValueFromVNSmilingCategoryLabel:(id)arg0 ;
+(void)assignPropertiesOfVCPPhotosFace:(id)arg0 toPHFaceChangeRequest:(id)arg1 ;
-(id)_vcpFacesArrayFromPHFetchResult:(id)arg0 copyPropertiesOption:(NSInteger)arg1 ;


@end


#endif