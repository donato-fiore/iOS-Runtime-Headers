// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVINFOLISTVIEW_H
#define _TVINFOLISTVIEW_H

@class UIView, NSArray;



@interface _TVInfoListView : UIView

@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (copy, nonatomic) NSArray *groupedInfos; // ivar: _groupedInfos
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (copy, nonatomic) NSArray *infos; // ivar: _infos
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (nonatomic) NSInteger maxLineCount; // ivar: _maxLineCount


+(id)infoListViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(CGFloat)_maxWidthForGroupInfos:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layouCellContentView:(id)arg0 inCellBounds:(struct CGRect )arg1 ;
-(void)layoutSubviews;


@end


#endif