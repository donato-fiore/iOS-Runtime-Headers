// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNYOLOLOSS_H
#define MPSCNNYOLOLOSS_H

@class MPSMatrix, MPSImage, NSData;
@protocol OS_dispatch_semaphore;


#import "MPSCNNKernel.h"
#import "MPSCNNLoss.h"

@interface MPSCNNYOLOLoss : MPSCNNKernel {
    BOOL _rescore;
    float _countOfPresentObjects;
    NSObject<OS_dispatch_semaphore> *_encodingSemaphore;
    MPSMatrix *_reductionBuffer;
    MPSImage *_firstLossTexture;
}


@property (retain, nonatomic) NSData *anchorBoxes; // ivar: _anchorBoxes
@property (readonly, retain, nonatomic) MPSCNNLoss *lossClasses; // ivar: _lossClasses
@property (readonly, retain, nonatomic) MPSCNNLoss *lossConfidence; // ivar: _lossConfidence
@property (readonly, retain, nonatomic) MPSCNNLoss *lossWH; // ivar: _lossWH
@property (readonly, retain, nonatomic) MPSCNNLoss *lossXY; // ivar: _lossXY
@property (nonatomic) float maxIOUForObjectAbsence; // ivar: _maxIOUForObjectAbsence
@property (nonatomic) float minIOUForObjectPresence; // ivar: _minIOUForObjectPresence
@property (nonatomic) NSUInteger numberOfAnchorBoxes; // ivar: _numberOfAnchorBoxes
@property (nonatomic) BOOL reduceAcrossBatch; // ivar: _reduceAcrossBatch
@property (nonatomic) int reductionType; // ivar: _reductionType
@property (nonatomic) float scaleClass; // ivar: _scaleClass
@property (nonatomic) float scaleNoObject; // ivar: _scaleNoObject
@property (nonatomic) float scaleObject; // ivar: _scaleObject
@property (nonatomic) float scaleWH; // ivar: _scaleWH
@property (nonatomic) float scaleXY; // ivar: _scaleXY


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(float)countPresetobjectsSourceImages:(id)arg0 labels:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 labels:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 labels:(id)arg2 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 lossDescriptor:(id)arg1 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 labels:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 labels:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initializeSupportFiltersWithDevice:(id)arg0 lossDescriptor:(id)arg1 ;


@end


#endif