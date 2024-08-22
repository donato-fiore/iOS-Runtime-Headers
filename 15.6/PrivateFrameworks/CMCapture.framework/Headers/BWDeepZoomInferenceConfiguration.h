// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEEPZOOMINFERENCECONFIGURATION_H
#define BWDEEPZOOMINFERENCECONFIGURATION_H

@protocol MTLCommandQueue;


#import "BWTiledEspressoInferenceConfiguration.h"

@interface BWDeepZoomInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (nonatomic) int version; // ivar: _version


-(void)dealloc;


@end


#endif