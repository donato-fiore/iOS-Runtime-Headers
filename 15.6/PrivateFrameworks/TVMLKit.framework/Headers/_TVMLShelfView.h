// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVMLSHELFVIEW_H
#define _TVMLSHELFVIEW_H

@class TVShelfView, NSString;
@protocol TVRowHosting_Collection;



@interface _TVMLShelfView : TVShelfView <TVRowHosting_Collection>

 {
    CGFloat _showcaseFactor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldBindRowsTogether;
@property (readonly) Class superclass;


-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(id)_rowMetricsForExpectedWidth:(CGFloat)arg0 withContentInset:(struct UIEdgeInsets )arg1 firstItemRowIndex:(*NSInteger)arg2 forShowcase:(BOOL)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 _shelfViewLayout:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 shelfViewLayout:(id)arg1 ;
-(id)rowMetricsForExpectedWidth:(CGFloat)arg0 firstItemRowIndex:(*NSInteger)arg1 ;
-(id)rowMetricsForExpectedWidth:(CGFloat)arg0 withContentInset:(struct UIEdgeInsets )arg1 firstItemRowIndex:(*NSInteger)arg2 ;
-(id)showcaseRowMetricsForExpectedWidth:(CGFloat)arg0 ;
-(id)showcaseRowMetricsForExpectedWidth:(CGFloat)arg0 withContentInset:(struct UIEdgeInsets )arg1 ;
-(struct UIEdgeInsets )_selectionMarginsForCell:(id)arg0 ;
-(void)layoutSubviews;
-(void)tv_setShowcaseFactor:(CGFloat)arg0 ;


@end


#endif