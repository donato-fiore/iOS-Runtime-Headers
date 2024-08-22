// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEENCYCLOPEDICROWVIEW_H
#define MKPLACEENCYCLOPEDICROWVIEW_H

@class NSMutableArray, UILayoutGuide, NSArray;


#import "MKPlaceSectionRowView.h"

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {
    NSMutableArray *_factoidViews;
    UILayoutGuide *_insetMetricGuide;
    UILayoutGuide *_leftMetricGuide;
    UILayoutGuide *_rightMetricGuide;
    NSUInteger _columnCount;
}


@property (readonly, nonatomic, getter=factoidViewsInARow) NSArray *factoidViewsInARow;
@property (nonatomic) BOOL isStandAlone; // ivar: _isStandAlone
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSMutableArray *labelConstraints; // ivar: _labelConstraints


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)addWidthAndSideSpacingConstraintsForLabels;
-(void)layoutSubviews;
-(void)refreshColumnCount;
-(void)refreshContent:(BOOL)arg0 ;
-(void)setColumnCount:(NSUInteger)arg0 ;


@end


#endif