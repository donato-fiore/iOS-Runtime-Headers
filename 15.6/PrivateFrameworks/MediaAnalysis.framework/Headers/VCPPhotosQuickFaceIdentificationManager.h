// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPHOTOSQUICKFACEIDENTIFICATIONMANAGER_H
#define VCPPHOTOSQUICKFACEIDENTIFICATIONMANAGER_H

@class VNPersonsModel, VNEntityIdentificationModel, PHPhotoLibrary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPFaceAnalyzer.h"

@interface VCPPhotosQuickFaceIdentificationManager : NSObject {
    VNPersonsModel *_personsModel;
    VNEntityIdentificationModel *_petsModel;
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
    NSObject<OS_dispatch_queue> *_management;
}




+(BOOL)_fastFaceMigrationEnabled;
-(BOOL)_faceProcessingPassGoalWithExtendTimeout:(id)arg0 ;
-(BOOL)_keepCurrentPersonsModelWithExtendTimeout:(id)arg0 ;
-(BOOL)_modelLastGenerationDidExceedTimeIntervalForType:(NSUInteger)arg0 ;
-(BOOL)_needToGenerateModelWithType:(NSUInteger)arg0 ignoreLastGenerationTime:(BOOL)arg1 withExtendTimeout:(id)arg2 ;
-(BOOL)_persistPersonsModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)_persistPetsModel:(id)arg0 error:(*id)arg1 ;
-(id)_fetchPersonsToFeedVIPModel;
-(id)_fetchPetsToFeedVIPModel;
-(id)fetchEntityForModelType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(int)_classifyFaces:(id)arg0 forAsset:(id)arg1 withResults:(*id)arg2 ;
// -(int)_generatePersonsModelWithExtendTimeoutBlock:(id)arg0 cancel:(unk)arg1  ;
// -(int)_generatePetsModelWithExtendTimeoutBlock:(id)arg0 cancel:(unk)arg1  ;
-(int)_loadPersonsModelAndInitializeFaceAnalyzer;
-(int)_loadPetsModel;
-(int)_persistResults:(id)arg0 withFaces:(id)arg1 forAsset:(id)arg2 ;
-(int)classifyVIPPets;
// -(int)generateVIPModelWithType:(NSUInteger)arg0 ignoreLastGenerationTime:(BOOL)arg1 modelGenerated:(*BOOL)arg2 extendTimeout:(id)arg3 andCancel:(unk)arg4  ;
-(int)processAsset:(id)arg0 ;


@end


#endif