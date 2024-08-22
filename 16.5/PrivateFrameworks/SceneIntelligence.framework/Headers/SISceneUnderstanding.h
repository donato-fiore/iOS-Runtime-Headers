// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCENEUNDERSTANDING_H
#define SISCENEUNDERSTANDING_H


#import <Foundation/Foundation.h>


@interface SISceneUnderstanding : NSObject {
    *void _context;
    *void _plan;
    ? _network;
    networkparams_t _parameters;
    networkvariables_t _variables;
}


@property (readonly, nonatomic) _SITensorDim labelTensorDimensions;
@property (readonly, nonatomic) _SITensorDim normalTensorDimensions;
@property (readonly, nonatomic) _SITensorDim probabilitiesTensorDimensions;


+(struct CGSize )inputResolution;
-(BOOL)initMLNetworkWithComputeEngine:(NSInteger)arg0 ;
-(NSInteger)evaluateImage:(struct __CVBuffer *)arg0 results:(id)arg1 ;
-(id)initWithComputeEngine:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif