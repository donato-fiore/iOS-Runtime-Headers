// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIPERSONDETECTORALGORITHM_H
#define SIPERSONDETECTORALGORITHM_H


#import <Foundation/Foundation.h>

#import "SIResourceFactory.h"
#import "SIPersonDetector.h"
#import "SIScaler.h"

@interface SIPersonDetectorAlgorithm : NSObject {
    SIResourceFactory *_factory;
    SIPersonDetector *_model;
    SIScaler *_scalerOne;
}




+(BOOL)supportsANE;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;
-(void)runWithInput:(struct __CVBuffer *)arg0 output:(id)arg1 ;
-(void)runWithInput:(struct __CVBuffer *)arg0 output:(id)arg1 networkConfiguration:(NSInteger)arg2 ;


@end


#endif