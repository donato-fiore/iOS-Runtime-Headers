// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPFACECROPMANAGER_H
#define VCPFACECROPMANAGER_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "VCPFaceAnalyzer.h"
#import "VCPPhotosFaceProcessingContext.h"

@interface VCPFaceCropManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
    VCPPhotosFaceProcessingContext *_context;
}




+(BOOL)_allowANE;
-(BOOL)_clearDirtyStateOnFaceCrops:(id)arg0 error:(*id)arg1 ;
-(BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg0 error:(*id)arg1 ;
-(BOOL)_persistGeneratedFaceCrops:(id)arg0 forAsset:(id)arg1 error:(*id)arg2 ;
-(BOOL)_processDirtyFaceCrop:(id)arg0 error:(*id)arg1 ;
-(BOOL)_recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updateFace:(id)arg0 withFaceCrop:(id)arg1 error:(*id)arg2 ;
-(BOOL)_updateFaceprint:(id)arg0 withFace:(id)arg1 error:(*id)arg2 ;
-(BOOL)generateAndPersistFaceCropsForFaces:(id)arg0 withAsset:(id)arg1 andImage:(id)arg2 error:(*id)arg3 ;
-(id)_associateFace:(id)arg0 withFaceCrop:(id)arg1 error:(*id)arg2 ;
-(id)_bestFaceForFaceDetectionRequest:(id)arg0 withRect:(struct CGRect )arg1 ;
-(id)_faceAssociatedWithFaceCrop:(id)arg0 ;
-(id)_faceFromFaceCrop:(id)arg0 error:(*id)arg1 ;
-(id)_vcpFaceCropFromPHFaceCrop:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 andContext:(id)arg1 ;
// -(int)processDirtyFaceCrops:(*NSUInteger)arg0 withCancelBlock:(id)arg1 andExtendTimeoutBlock:(unk)arg2  ;
-(void)_persistFaceAnalysis:(id)arg0 forPHAsset:(id)arg1 ;


@end


#endif