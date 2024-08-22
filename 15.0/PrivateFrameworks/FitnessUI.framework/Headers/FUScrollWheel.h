// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUSCROLLWHEEL_H
#define FUSCROLLWHEEL_H

@class UIView, NSMutableArray, NSMutableDictionary, UIImageView, NSString, UIFont, UIScrollView;
@protocol UIScrollViewDelegate, FUScrollWheelDataSource, FUScrollWheelDelegate;



@interface FUScrollWheel : UIView <UIScrollViewDelegate>

 {
    NSMutableArray *_reusableLabelsQueue;
    NSMutableDictionary *_usedLabels;
    _NSRange _previousRange;
    NSUInteger _numberOfRows;
    CGFloat _scrollWheelLabelHeight;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    UIImageView *_maskLayer;
    BOOL _shouldRegenerateOpacityMask;
    BOOL _loaded;
}


@property (nonatomic) NSUInteger currentIndex; // ivar: _currentIndex
@property (weak, nonatomic) NSObject<FUScrollWheelDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FUScrollWheelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger itemTitleAligmnent; // ivar: _itemTitleAligmnent
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) CGFloat scrollWheelLabelPageSize; // ivar: _scrollWheelLabelPageSize
@property (readonly) Class superclass;


-(CGFloat)_startingLocation;
-(CGFloat)_yPositionForLabelAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_numberOfRows;
-(id)_dequeueLabel;
-(id)_textForLabelAtIndex:(NSUInteger)arg0 ;
-(id)_titleForItemAtIndex:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameForLabelAtIndex:(NSUInteger)arg0 ;
-(void)_alertDidChangeToCurrentIndex:(NSUInteger)arg0 ;
-(void)_generateOpacityMask;
-(void)_layoutScrollView;
-(void)_recycleAllLabels;
-(void)_recycleLabel:(id)arg0 forKey:(id)arg1 ;
-(void)_reuseLabelsWithRange:(struct _NSRange )arg0 contentOffset:(struct CGPoint )arg1 ;
-(void)_setActiveScrollwheelIfNotActive;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadData;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setActiveScrollWheel;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif