// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACEBBOXALIGNER_H
#define VNFACEBBOXALIGNER_H

@protocol VNModelFile;


#import "VNDetector.h"

@interface VNFaceBBoxAligner : VNDetector {
    shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> mFaceBoxPoseAlignerImpl;
    BOOL _modelFilesWereMemmapped;
    id<VNModelFile> *mFaceBoxAlignerModelFileHandle;
}




+(id)configurationOptionKeysForDetectorKey;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 warningRecorder:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif