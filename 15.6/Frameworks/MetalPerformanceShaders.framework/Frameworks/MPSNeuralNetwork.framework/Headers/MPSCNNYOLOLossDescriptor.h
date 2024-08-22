// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNYOLOLOSSDESCRIPTOR_H
#define MPSCNNYOLOLOSSDESCRIPTOR_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPSCNNLossDescriptor.h"

@interface MPSCNNYOLOLossDescriptor : NSObject <NSCopying>



@property (retain, nonatomic) MPSCNNLossDescriptor *WHLossDescriptor; // ivar: _WHLossDescriptor
@property (retain, nonatomic) MPSCNNLossDescriptor *XYLossDescriptor; // ivar: _XYLossDescriptor
@property (retain, nonatomic) NSData *anchorBoxes; // ivar: _anchorBoxes
@property (retain, nonatomic) MPSCNNLossDescriptor *classesLossDescriptor; // ivar: _classesLossDescriptor
@property (retain, nonatomic) MPSCNNLossDescriptor *confidenceLossDescriptor; // ivar: _confidenceLossDescriptor
@property (nonatomic) float maxIOUForObjectAbsence; // ivar: _maxIOUForObjectAbsence
@property (nonatomic) float minIOUForObjectPresence; // ivar: _minIOUForObjectPresence
@property (nonatomic) NSUInteger numberOfAnchorBoxes; // ivar: _numberOfAnchorBoxes
@property (nonatomic) BOOL reduceAcrossBatch; // ivar: _reduceAcrossBatch
@property (nonatomic) int reductionType; // ivar: _reductionType
@property (nonatomic) BOOL rescore; // ivar: _rescore
@property (nonatomic) float scaleClass; // ivar: _scaleClass
@property (nonatomic) float scaleNoObject; // ivar: _scaleNoObject
@property (nonatomic) float scaleObject; // ivar: _scaleObject
@property (nonatomic) float scaleWH; // ivar: _scaleWH
@property (nonatomic) float scaleXY; // ivar: _scaleXY


+(id)cnnLossDescriptorWithXYLossType:(unsigned int)arg0 WHLossType:(unsigned int)arg1 confidenceLossType:(unsigned int)arg2 classesLossType:(unsigned int)arg3 reductionType:(int)arg4 anchorBoxes:(id)arg5 numberOfAnchorBoxes:(NSUInteger)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithXYLossType:(unsigned int)arg0 WHLossType:(unsigned int)arg1 confidenceLossType:(unsigned int)arg2 classesLossType:(unsigned int)arg3 reductionType:(int)arg4 anchorBoxes:(id)arg5 numberOfAnchorBoxes:(NSUInteger)arg6 ;
-(void)dealloc;


@end


#endif