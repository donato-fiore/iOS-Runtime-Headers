// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKMLMODELCONFIGURATION3DLIFTING_H
#define ABPKMLMODELCONFIGURATION3DLIFTING_H

@class NSString;


#import "ABPKMLModelConfiguration.h"

@interface ABPKMLModelConfiguration3DLifting : ABPKMLModelConfiguration {
    NSString *_mlModelPath;
}




-(id)compiledMLModelPath;
-(id)init;
-(id)inputTensorNames;
-(id)outputTensorNames;


@end


#endif