// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIPERSONDETECTORALGORITHM_H
#define SIPERSONDETECTORALGORITHM_H


#import <Foundation/Foundation.h>

#import "SIPersonDetector.h"
#import "SIScaler.h"

@interface SIPersonDetectorAlgorithm : NSObject {
    SIPersonDetector *_model;
    SIScaler *_scalerOne;
}




+(BOOL)supportsANE;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 useE5RT:(BOOL)arg2 ;
-(struct CGSize )getInputResolution;
-(void)runWithInput:(struct __CVBuffer *)arg0 output:(id)arg1 ;
-(void)runWithInput:(struct __CVBuffer *)arg0 output:(id)arg1 networkConfiguration:(NSInteger)arg2 ;


@end


#endif