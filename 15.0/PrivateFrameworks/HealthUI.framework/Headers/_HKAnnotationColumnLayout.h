// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKANNOTATIONCOLUMNLAYOUT_H
#define _HKANNOTATIONCOLUMNLAYOUT_H

@class UIView, NSMutableArray;



@interface _HKAnnotationColumnLayout : UIView

@property (retain, nonatomic) NSMutableArray *columnViews; // ivar: _columnViews
@property (nonatomic) NSInteger context; // ivar: _context
@property (nonatomic) BOOL includeSeparators; // ivar: _includeSeparators
@property (retain, nonatomic) NSMutableArray *separatorViews; // ivar: _separatorViews


-(CGFloat)_columnSeparation;
-(CGFloat)_largestColumnWidth;
-(CGFloat)_minimumHeight;
-(CGFloat)_minimumWidth;
-(CGFloat)_minimumWidthForPackedLayout;
-(CGFloat)_minimumWithForEqualLayout;
-(CGFloat)_totalColumnWidth;
-(id)_makeSeparatorView;
-(id)initWithContext:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addSeparatorViews;
-(void)_clearColumnViews;
-(void)_clearSeparatorViews;
-(void)_invalidateLayout;
-(void)_layoutColumnsEqually;
-(void)_layoutColumnsPacked;
-(void)_layoutColumnsWithWidth:(CGFloat)arg0 columnSeparation:(CGFloat)arg1 currentSize:(struct CGSize )arg2 ;
-(void)addColumnView:(id)arg0 ;
-(void)clearViews;
-(void)layoutSubviews;


@end


#endif