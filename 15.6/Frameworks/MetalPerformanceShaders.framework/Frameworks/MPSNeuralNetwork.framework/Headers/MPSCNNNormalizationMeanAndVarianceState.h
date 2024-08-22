// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNNORMALIZATIONMEANANDVARIANCESTATE_H
#define MPSCNNNORMALIZATIONMEANANDVARIANCESTATE_H

@class MPSState;
@protocol MTLBuffer;



@interface MPSCNNNormalizationMeanAndVarianceState : MPSState {
    BOOL _initialized;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *mean;
@property (readonly, nonatomic) NSObject<MTLBuffer> *variance;


+(id)temporaryStateWithCommandBuffer:(id)arg0 bufferSize:(NSUInteger)arg1 ;
+(id)temporaryStateWithCommandBuffer:(id)arg0 numberOfFeatureChannels:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 bufferSize:(NSUInteger)arg1 ;
-(id)initWithMean:(id)arg0 variance:(id)arg1 ;


@end


#endif