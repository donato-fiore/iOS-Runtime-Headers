// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTREFERENCELINELABELPADDINGLAYOUTITEM_H
#define TSCHCHARTREFERENCELINELABELPADDINGLAYOUTITEM_H



#import "TSCHChartLayoutItem.h"
#import "TSCHChartAxisID.h"

@interface TSCHChartReferenceLineLabelPaddingLayoutItem : TSCHChartLayoutItem

@property (retain, nonatomic) TSCHChartAxisID *axisID; // ivar: _axisID


-(BOOL)p_hasReferenceLineLabelsWithModel:(id)arg0 ;
-(id)initWithParent:(id)arg0 axisID:(id)arg1 ;
-(struct CGSize )calcMinSize;
-(struct CGSize )p_calcMinSizeForModel:(id)arg0 ;


@end


#endif