// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCONTOURSDETECTOR_H
#define VNCONTOURSDETECTOR_H

@class CIContext;


#import "VNDetector.h"
#import "VNCIContrastFromAverageColorFilter.h"
#import "VNCIContrastWithPivotColorFilter.h"

@interface VNContoursDetector : VNDetector {
    CIContext *_ciContext;
    VNCIContrastFromAverageColorFilter *_ciContrastFromAvgFilter;
    VNCIContrastWithPivotColorFilter *_ciContrastWithPivotFilter;
}




+(id)configurationOptionKeysForDetectorKey;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif