// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNJUNKIDENTIFIER_H
#define VNJUNKIDENTIFIER_H



#import "VNDetector.h"

@interface VNJunkIdentifier : VNDetector {
    ? mJunkDescriptorImpl;
    ? mJunkClassifierImpl;
}




+(BOOL)shouldDumpDebugIntermediates;
+(id)configurationOptionKeysForDetectorKey;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif