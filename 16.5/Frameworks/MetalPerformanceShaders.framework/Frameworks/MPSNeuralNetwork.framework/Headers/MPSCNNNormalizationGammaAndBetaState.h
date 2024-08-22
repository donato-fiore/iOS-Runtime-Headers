// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNNORMALIZATIONGAMMAANDBETASTATE_H
#define MPSCNNNORMALIZATIONGAMMAANDBETASTATE_H

@class MPSState;
@protocol MTLBuffer;



@interface MPSCNNNormalizationGammaAndBetaState : MPSState {
    BOOL _initialized;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *beta;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gamma;


+(id)temporaryStateWithCommandBuffer:(id)arg0 bufferSize:(NSUInteger)arg1 ;
+(id)temporaryStateWithCommandBuffer:(id)arg0 numberOfFeatureChannels:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 bufferSize:(NSUInteger)arg1 ;
-(id)initWithGamma:(id)arg0 beta:(id)arg1 ;


@end


#endif