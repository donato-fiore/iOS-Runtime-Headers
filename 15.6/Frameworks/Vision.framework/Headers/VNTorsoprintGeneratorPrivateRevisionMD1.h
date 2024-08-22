// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNTORSOPRINTGENERATORPRIVATEREVISIONMD1_H
#define VNTORSOPRINTGENERATORPRIVATEREVISIONMD1_H



#import "VNTorsoprintGeneratorFaceBased.h"

@interface VNTorsoprintGeneratorPrivateRevisionMD1 : VNTorsoprintGeneratorFaceBased {
    shared_ptr<vision::mod::TorsoprintGenerator> _torsoprintGenerator;
}




+(*void)modelVersionForOptions:(id)arg0 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(id)torsoprintForImageBuffer:(struct __CVBuffer *)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif