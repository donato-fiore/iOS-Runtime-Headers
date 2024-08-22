// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNGROUPNORMALIZATION_H
#define MPSCNNGROUPNORMALIZATION_H

@protocol MPSCNNGroupNormalizationDataSource;


#import "MPSCNNKernel.h"

@interface MPSCNNGroupNormalization : MPSCNNKernel {
    *void _gamma;
    *void _beta;
    NSUInteger _numberOfFeatureChannels;
    NSUInteger _numberOfGroups;
}


@property (readonly, retain, nonatomic) NSObject<MPSCNNGroupNormalizationDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) float epsilon; // ivar: _epsilon


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 dataSource:(id)arg1 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadDataSource:(id)arg0 ;
-(void)reloadDataSourceDeprecated:(id)arg0 ;
-(void)reloadGammaAndBetaFromDataSource;
-(void)reloadGammaAndBetaWithCommandBuffer:(id)arg0 gammaAndBetaState:(id)arg1 ;


@end


#endif