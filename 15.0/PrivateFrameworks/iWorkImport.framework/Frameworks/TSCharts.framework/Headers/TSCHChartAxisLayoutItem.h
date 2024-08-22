// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAXISLAYOUTITEM_H
#define TSCHCHARTAXISLAYOUTITEM_H



#import "TSCHChartLayoutItem.h"
#import "TSCHChartAxisID.h"
#import "TSCHChartAxisLineLayoutItem.h"
#import "TSCHChartAxisPaddingLayoutItem.h"
#import "TSCHChartAxisTickMarksLayoutItem.h"
#import "TSCHChartAxisTitleLayoutItem.h"
#import "TSCHChartReferenceLineLabelPaddingLayoutItem.h"
#import "TSCHChartReferenceLineLabelsLayoutItem.h"

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem

@property (retain, nonatomic) TSCHChartAxisID *axisID; // ivar: _axisID
@property (readonly, nonatomic) TSCHChartAxisLineLayoutItem *axisLineLayoutItem; // ivar: _axisLine
@property (readonly, nonatomic) TSCHChartAxisPaddingLayoutItem *axisPaddingLayoutItem; // ivar: _axisPadding
@property (readonly, nonatomic) int axisPosition; // ivar: _axisPosition
@property (readonly, nonatomic) TSCHChartAxisTickMarksLayoutItem *axisTickMarksLayoutItem; // ivar: _tickMarks
@property (readonly, nonatomic) TSCHChartAxisTitleLayoutItem *axisTitleLayoutItem; // ivar: _axisTitle
@property (nonatomic) CGSize chartBodySize; // ivar: _chartBodySize
@property (readonly, nonatomic) TSCHChartReferenceLineLabelPaddingLayoutItem *refLineLabelPadding; // ivar: _refLineLabelPadding
@property (readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *refLineLabels; // ivar: _refLineLabels
@property (retain, nonatomic) TSCHChartAxisID *referenceLineLabelAxisID; // ivar: _referenceLineLabelAxisID


-(id)axis;
-(id)initWithParent:(id)arg0 axisPosition:(int)arg1 ;
-(id)p_description;
-(id)p_subselectionHaloPositionsForLabelsSelections:(id)arg0 ;
-(id)p_subselectionKnobPositionsForLabelsSelection:(id)arg0 ;
-(id)protected_layoutSpaceHalosForAllLabels;
-(id)protected_layoutSpaceKnobsForAllLabels;
-(id)renderersWithRep:(id)arg0 ;
-(id)subselectionHaloPositionsForSelections:(id)arg0 ;
-(id)subselectionKnobPositionsForSelection:(id)arg0 ;
-(struct CGRect )calcOverhangRect;
-(struct CGRect )protected_layoutSpaceRectForAllLabels;
-(struct CGSize )calcMinSize;
-(void)layoutInward;
-(void)layoutOutward;
-(void)p_layoutLabelsNow;


@end


#endif