// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNTORSOPRINTGENERATORREVISION1_H
#define VNTORSOPRINTGENERATORREVISION1_H



#import "VNTorsoprintGeneratorFaceBased.h"

@interface VNTorsoprintGeneratorRevision1 : VNTorsoprintGeneratorFaceBased



+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(id)torsoprintForImageBuffer:(struct __CVBuffer *)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif