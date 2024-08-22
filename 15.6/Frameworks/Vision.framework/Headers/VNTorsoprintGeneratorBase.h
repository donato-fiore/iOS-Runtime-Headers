// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTORSOPRINTGENERATORBASE_H
#define VNTORSOPRINTGENERATORBASE_H



#import "VNEspressoModelFileBasedDetector.h"

@interface VNTorsoprintGeneratorBase : VNEspressoModelFileBasedDetector



+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(struct CGSize )torsoprintInputImageSizeForFaceOrientation:(int)arg0 ;


@end


#endif