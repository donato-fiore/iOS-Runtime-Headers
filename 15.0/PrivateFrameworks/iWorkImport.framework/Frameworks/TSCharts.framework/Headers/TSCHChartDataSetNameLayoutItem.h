// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTDATASETNAMELAYOUTITEM_H
#define TSCHCHARTDATASETNAMELAYOUTITEM_H



#import "TSCHChartTitleLayoutItem.h"

@interface TSCHChartDataSetNameLayoutItem : TSCHChartTitleLayoutItem

@property (readonly, nonatomic) BOOL isAboveChartBody;


-(BOOL)isTitleOn;
-(BOOL)shouldPlaceTitleAtCenter;
-(NSUInteger)titleParagraphStyleIndex;
-(id)titleSelectionPath;
-(id)titleTextForModel:(id)arg0 ;
-(struct CGSize )calcMinSize;


@end


#endif