// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)_persistPersonsModel:(id)arg0 evaluationMode:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_persistPetsModel:(id)arg0 error:(*id)arg1 ;
-(id)_fetchPersonsToFeedVIPModel:(BOOL)arg0 allowUnverifiedPerson:(BOOL)arg1 ;
-(id)_fetchPetsToFeedVIPModel;
-(id)fetchEntityForModelType:(NSUInteger)arg0 evaluationMode:(BOOL)arg1 allowUnverifiedPerson:(BOOL)arg2 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(int)_classifyFaces:(id)arg0 forAsset:(id)arg1 detectedPersons:(*id)arg2 ;
// -(int)_generatePersonsModelWithExtendTimeoutBlock:(id)arg0 cancel:(unk)arg1 evaluationMode:(id)arg2 allowUnverifiedPerson:(unk)arg3  ;
// -(int)_generatePetsModelWithExtendTimeoutBlock:(id)arg0 cancel:(unk)arg1  ;
-(int)_loadPersonsModelAndInitializeFaceAnalyzer;
-(int)_loadPetsModel;
-(int)classifyVIPPets;
// -(int)generateVIPModelWithType:(NSUInteger)arg0 ignoreLastGenerationTime:(BOOL)arg1 evaluationMode:(BOOL)arg2 allowUnverifiedPerson:(BOOL)arg3 modelGenerated:(*BOOL)arg4 extendTimeout:(id)arg5 andCancel:(unk)arg6  ;
-(int)loadPersonsModelAndInitializeFaceAnalyzerWrapper;
-(int)processAsset:(id)arg0 onDemandDetection:(BOOL)arg1 detectedFaces:(*id)arg2 detectedPersons:(*id)arg3 ;
-(void)personIdentificationForSyndicationPhotoLibrary:(id)arg0 withCancelOrExtendTimeoutBlock:(id)arg1 ;


@end


#endif