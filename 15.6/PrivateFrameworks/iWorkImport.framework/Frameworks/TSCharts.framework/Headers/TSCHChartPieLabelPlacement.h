// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTPIELABELPLACEMENT_H
#define TSCHCHARTPIELABELPLACEMENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSCHChartPieLabelPlacement : NSObject {
    NSArray *_allWedgeLayoutInfos;
    NSArray *_allWedgeLayoutInfosSortedBySeriesIndex;
}


@property (readonly, nonatomic) NSArray *allWedgeLayoutInfos;
@property (readonly, nonatomic) BOOL shouldPreventOverlapWithTitle;
@property (readonly, nonatomic) CGRect titleRect; // ivar: _titleRect


-(BOOL)calloutLineEndpointPastStartpoint:(id)arg0 ;
-(BOOL)calloutLineEndsOutsidePieWedge:(id)arg0 ;
-(CGFloat)distanceFromCenterToChordOfLength:(CGFloat)arg0 wedgeAngle:(CGFloat)arg1 ;
-(CGFloat)lineEndLength:(id)arg0 stroke:(id)arg1 ;
-(CGFloat)minimumNecessaryDistanceFromWedgeTipForWedgeLayoutInfo:(id)arg0 ;
-(CGFloat)minimumNecessaryDistanceFromWedgeTipToWedgeLabelToPreventOverlapForWedgeLayoutInfo:(id)arg0 adjacentWedgeLayoutInfo:(id)arg1 ;
-(NSInteger)calloutLineRenderAmount:(id)arg0 startLineEnd:(id)arg1 endLineEnd:(id)arg2 stroke:(id)arg3 ;
-(id)initWithArrayOfWedgeLayoutInfos:(id)arg0 ;
-(id)initWithArrayOfWedgeLayoutInfos:(id)arg0 titleRectInWedgeElementSpace:(struct CGRect )arg1 ;
-(id)newCalloutLinePaths:(id)arg0 startLineEnd:(id)arg1 outStartLineEndPath:(*id)arg2 endLineEnd:(id)arg3 outEndLineEndPath:(*id)arg4 stroke:(id)arg5 outStroke:(*id)arg6 context:(struct CGContext *)arg7 contextScale:(float)arg8 ;
-(id)newPathForLineEnd:(id)arg0 startPoint:(struct CGPoint )arg1 angle:(CGFloat)arg2 stroke:(id)arg3 ;
-(id)updateLabelTransformsToPreventOverlap;
-(struct CGAffineTransform )transformOutwardsAlongWedgeBisectionForWedgeLayoutInfo:(id)arg0 withMinimumNecessaryDistance:(CGFloat)arg1 ;
-(struct CGPoint )calloutLineEndpointForWedgeLayoutInfo:(id)arg0 ;
-(struct CGPoint )calloutLineStartpointForWedgeLayoutInfo:(id)arg0 ;
-(struct CGRect )paddedLabelRectWithRect:(struct CGRect )arg0 ;
-(struct CGRect )paddedTitleRectWithRect:(struct CGRect )arg0 ;


@end


#endif