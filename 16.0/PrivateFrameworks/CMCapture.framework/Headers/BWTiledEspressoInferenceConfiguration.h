// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWTILEDESPRESSOINFERENCECONFIGURATION_H
#define BWTILEDESPRESSOINFERENCECONFIGURATION_H

@protocol MTLCommandQueue;


#import "BWInferenceConfiguration.h"

@interface BWTiledEspressoInferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) BOOL forceSynchronousInference; // ivar: _forceSynchronousInference
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue


-(id)initWithInferenceType:(int)arg0 metalCommandQueue:(id)arg1 ;
-(void)dealloc;


@end


#endif