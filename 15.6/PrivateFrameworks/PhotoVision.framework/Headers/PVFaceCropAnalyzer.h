// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVFACECROPANALYZER_H
#define PVFACECROPANALYZER_H


#import <Foundation/Foundation.h>


@interface PVFaceCropAnalyzer : NSObject



+(id)bestFaceForFaceDetectionRequest:(id)arg0 withRect:(struct CGRect )arg1 ;
+(id)faceFromFaceCrop:(id)arg0 visionIntegration:(id)arg1 faceAlgorithmUmbrellaVersion:(unsigned int)arg2 createFaceTorsoprint:(BOOL)arg3 error:(*id)arg4 ;


@end


#endif