// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTREFERENCELINELABELSLAYOUTITEM_H
#define TSCHCHARTREFERENCELINELABELSLAYOUTITEM_H



#import "TSCHChartLayoutItem.h"
#import "TSCHChartAxisID.h"

@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem

@property (readonly, retain, nonatomic) TSCHChartAxisID *axisID; // ivar: _axisID


-(id)initWithParent:(id)arg0 axisID:(id)arg1 ;
-(id)p_areaLayoutItem;
-(id)subselectionKnobPositionsForSelection:(id)arg0 ;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )p_drawingRectForModel:(id)arg0 ;
-(struct CGSize )calcMinSize;
-(void)iterateHitChartElements:(struct CGPoint )arg0 withBlock:(id)arg1 ;


@end


#endif