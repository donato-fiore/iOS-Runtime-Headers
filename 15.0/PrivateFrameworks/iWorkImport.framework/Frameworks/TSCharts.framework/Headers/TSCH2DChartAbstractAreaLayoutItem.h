// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH2DCHARTABSTRACTAREALAYOUTITEM_H
#define TSCH2DCHARTABSTRACTAREALAYOUTITEM_H



#import "TSCHChartAbstractAreaLayoutItem.h"
#import "TSCHChartBodyLayoutItem.h"
#import "TSCHChartDataSetNameLayoutItem.h"
#import "TSCHChartTitleLayoutItem.h"

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem

@property (retain, nonatomic) TSCHChartBodyLayoutItem *bodyLayoutItem; // ivar: _bodyLayoutItem
@property (retain, nonatomic) TSCHChartDataSetNameLayoutItem *dataSetNameElement; // ivar: _dataSetNameElement
@property (retain, nonatomic) TSCHChartTitleLayoutItem *titleElement; // ivar: _titleElement


-(struct CGRect )chartBodyLayoutRect;
-(struct CGRect )i_currentBufferAreaUnitRect;
-(void)setChartBodyLayoutSize:(struct CGSize )arg0 ;


@end


#endif