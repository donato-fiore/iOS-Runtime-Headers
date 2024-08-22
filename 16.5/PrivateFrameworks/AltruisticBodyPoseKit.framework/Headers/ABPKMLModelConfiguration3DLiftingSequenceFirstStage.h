// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKMLMODELCONFIGURATION3DLIFTINGSEQUENCEFIRSTSTAGE_H
#define ABPKMLMODELCONFIGURATION3DLIFTINGSEQUENCEFIRSTSTAGE_H

@class NSString;


#import "ABPKMLModelConfiguration.h"

@interface ABPKMLModelConfiguration3DLiftingSequenceFirstStage : ABPKMLModelConfiguration {
    NSString *_mlModelPath;
}




-(id)compiledMLModelPath;
-(id)init;
-(id)inputTensorNames;
-(id)outputTensorNames;


@end


#endif