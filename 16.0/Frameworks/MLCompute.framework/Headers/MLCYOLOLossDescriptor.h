// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCYOLOLOSSDESCRIPTOR_H
#define MLCYOLOLOSSDESCRIPTOR_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MLCLossDescriptor.h"

@interface MLCYOLOLossDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger anchorBoxCount; // ivar: _anchorBoxCount
@property (readonly, copy, nonatomic) NSData *anchorBoxes; // ivar: _anchorBoxes
@property (readonly, retain) MLCLossDescriptor *classesLossDescriptor; // ivar: _classesLossDescriptor
@property (readonly, retain) MLCLossDescriptor *confidenceLossDescriptor; // ivar: _confidenceLossDescriptor
@property (nonatomic) float maximumIOUForObjectAbsence; // ivar: _maximumIOUForObjectAbsence
@property (nonatomic) float minimumIOUForObjectPresence; // ivar: _minimumIOUForObjectPresence
@property (readonly, nonatomic) int reductionType; // ivar: _reductionType
@property (nonatomic) float scaleClassLoss; // ivar: _scaleClassLoss
@property (nonatomic) float scaleNoObjectConfidenceLoss; // ivar: _scaleNoObjectConfidenceLoss
@property (nonatomic) float scaleObjectConfidenceLoss; // ivar: _scaleObjectConfidenceLoss
@property (nonatomic) float scaleSpatialPositionLoss; // ivar: _scaleSpatialPositionLoss
@property (nonatomic) float scaleSpatialSizeLoss; // ivar: _scaleSpatialSizeLoss
@property (nonatomic) BOOL shouldRescore; // ivar: _shouldRescore
@property (readonly, retain) MLCLossDescriptor *spatialPositionLossDescriptor; // ivar: _spatialPositionLossDescriptor
@property (readonly, retain) MLCLossDescriptor *spatialSizeLossDescriptor; // ivar: _spatialSizeLossDescriptor


+(id)descriptorWithAnchorBoxes:(id)arg0 anchorBoxCount:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfAnchorBoxes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLossDescriptorWithSpatialPositionLossType:(int)arg0 spatialSizeLossType:(int)arg1 confidenceLossType:(int)arg2 classesLossType:(int)arg3 reductionType:(int)arg4 anchorBoxCount:(NSUInteger)arg5 anchorBoxes:(id)arg6 ;
-(void)setRescore:(BOOL)arg0 ;


@end


#endif