// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVFACECROPUTILS_H
#define PVFACECROPUTILS_H


#import <Foundation/Foundation.h>


@interface PVFaceCropUtils : NSObject



+(BOOL)isValidFaceCrop:(id)arg0 ;
+(id)groupingIdentifierFromFaceCrop:(id)arg0 error:(*id)arg1 ;
+(id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg0 ;
+(id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect )arg0 andCropRegion:(struct CGRect )arg1 andGroupingIdentifier:(id)arg2 ;
+(id)newDictionaryWithCGImageSourceOptions;
+(id)newFaceCropFromCGImageSource:(struct CGImageSource *)arg0 withFaceRect:(struct CGRect )arg1 groupingIdentifier:(id)arg2 error:(*id)arg3 ;
+(id)newFaceCropFromImageData:(id)arg0 withFaceRect:(struct CGRect )arg1 groupingIdentifier:(id)arg2 error:(*id)arg3 ;
+(id)newFaceCropFromImageURL:(id)arg0 withFaceRect:(struct CGRect )arg1 groupingIdentifier:(id)arg2 error:(*id)arg3 ;
+(struct CGImageMetadata *)createOutputMetadataFromDictionary:(id)arg0 ;
+(struct CGRect )cropBoundsInOriginalImageFromFaceCrop:(id)arg0 error:(*id)arg1 ;
+(struct CGRect )faceBoundsFromFaceCrop:(id)arg0 error:(*id)arg1 ;
+(struct CGSize )faceCropDimensionsFromFaceCrop:(id)arg0 error:(*id)arg1 ;


@end


#endif