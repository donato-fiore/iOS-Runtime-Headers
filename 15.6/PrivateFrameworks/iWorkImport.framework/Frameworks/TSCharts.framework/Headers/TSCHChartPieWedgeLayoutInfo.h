// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTPIEWEDGELAYOUTINFO_H
#define TSCHCHARTPIEWEDGELAYOUTINFO_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCHChartPieWedgeElement.h"

@interface TSCHChartPieWedgeLayoutInfo : NSObject <NSCopying>

 {
    NSNumber *_enableCalloutLine;
}


@property (readonly, nonatomic) CGRect combinedLabelErasableFrame;
@property (readonly, nonatomic) CGRect combinedLabelErasableFrameInChartCoordinateSpace;
@property (readonly, nonatomic) CGRect combinedLabelRect;
@property (readonly, nonatomic) CGRect combinedLabelRectInChartCoordinateSpace;
@property (readonly, nonatomic) CGPoint combinedLabelRectMidpointInChartCoordinateSpace;
@property (nonatomic) CGAffineTransform combinedLabelTransformIntoPieChartCoordinateSpace; // ivar: _combinedLabelTransformIntoPieChartCoordinateSpace
@property (readonly, nonatomic) NSInteger enableCalloutLineSetting;
@property (copy, nonatomic) NSArray *pieLabels; // ivar: _pieLabels
@property (readonly, nonatomic) BOOL stackLabels;
@property (retain, nonatomic) TSCHChartPieWedgeElement *wedgeElement; // ivar: _wedgeElement


-(BOOL)combinedLabelIsOnLeftSide;
-(BOOL)combinedLabelOutsideWedge;
-(BOOL)pointOutsidePieChart:(struct CGPoint )arg0 ;
-(CGFloat)combinedLabelDistanceFromWedgeTip;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPieWedgeElement:(id)arg0 pieLabels:(id)arg1 combinedLabelTransformIntoPieChartCoordinateSpace:(struct CGAffineTransform )arg2 ;
-(struct CGPoint )pointAtLabelInChartCoordinateSpace;
-(struct CGPoint )pointAtLabelInChartCoordinateSpaceOnCloseXSideBottomYWithStartPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointAtLabelInChartCoordinateSpaceOnCloseXSideMiddleY;
-(struct CGPoint )pointAtLabelInChartCoordinateSpaceOnCloseXSideMiddleYWithStartPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointAtLabelInChartCoordinateSpaceOnCloseXSideTopYWithStartPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointAtLabelInChartCoordinateSpaceOnFarXSideBottomYWithStartPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointAtLabelInChartCoordinateSpaceOnFarXSideMiddleYWithStartPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointAtLabelInChartCoordinateSpaceOnFarXSideTopYWithStartPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )vectorFromWedgeTipToCombinedLabelRect;
-(void)concatenateCombinedLabelTransformWithTransform:(struct CGAffineTransform )arg0 ;
-(void)realignPieLabels:(NSInteger)arg0 ;
-(void)updateToUseChartCoordinateSpaceWithChartBodyCenterPoint:(struct CGPoint )arg0 ;


@end


#endif