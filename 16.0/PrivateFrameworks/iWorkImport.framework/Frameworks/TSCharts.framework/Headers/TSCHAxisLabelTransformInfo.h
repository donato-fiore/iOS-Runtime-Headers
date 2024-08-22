// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHAXISLABELTRANSFORMINFO_H
#define TSCHAXISLABELTRANSFORMINFO_H


#import <Foundation/Foundation.h>

#import "TSCHChartAxis.h"
#import "TSCHChartAxisID.h"
#import "TSCHChartAxisLayoutItem.h"
#import "TSCHChartInfo.h"
#import "TSCHChartModel.h"

@interface TSCHAxisLabelTransformInfo : NSObject

@property (weak, nonatomic) TSCHChartAxis *axis; // ivar: _axis
@property (weak, nonatomic) TSCHChartAxisID *axisID; // ivar: _axisID
@property (weak, nonatomic) TSCHChartAxisLayoutItem *axisLayoutItem; // ivar: _axisLayoutItem
@property (nonatomic) CGPoint center; // ivar: _center
@property (weak, nonatomic) TSCHChartInfo *chartInfo; // ivar: _chartInfo
@property (weak, nonatomic) TSCHChartModel *chartModel; // ivar: _chartModel
@property (nonatomic) CGFloat labelExplosion; // ivar: _labelExplosion
@property (nonatomic) NSUInteger labelIndex; // ivar: _labelIndex
@property (nonatomic) CGSize labelLayoutSize; // ivar: _labelLayoutSize
@property (nonatomic) CGFloat labelRotationInDegrees; // ivar: _labelRotationInDegrees
@property (nonatomic) CGSize labelSizeInPoints; // ivar: _labelSizeInPoints
@property (nonatomic) CGSize maxLabelSizeInPoints; // ivar: _maxLabelSizeInPoints
@property (nonatomic) int position; // ivar: _position
@property (nonatomic) CGFloat radarStartAngleInDegrees; // ivar: _radarStartAngleInDegrees
@property (nonatomic) CGFloat strokeThickness; // ivar: _strokeThickness
@property (nonatomic) CGAffineTransform unitCircleToEllipseTransform; // ivar: _unitCircleToEllipseTransform
@property (nonatomic) CGFloat unitSpaceAnchor; // ivar: _unitSpaceAnchor
@property (nonatomic) BOOL useAngle; // ivar: _useAngle
@property (nonatomic) CGFloat xSemiaxis; // ivar: _xSemiaxis
@property (nonatomic) CGFloat ySemiaxis; // ivar: _ySemiaxis




@end


#endif