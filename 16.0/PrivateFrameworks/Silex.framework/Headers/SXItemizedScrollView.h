// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXITEMIZEDSCROLLVIEW_H
#define SXITEMIZEDSCROLLVIEW_H

@class UIScrollView, UIView, NSString, NSArray, NSIndexSet, NSMutableDictionary;
@protocol UIScrollViewDelegate, SXItemizedScrollViewDataSource;



@interface SXItemizedScrollView : UIScrollView <UIScrollViewDelegate>



@property (readonly, nonatomic) UIView *activeView;
@property (readonly, nonatomic) NSUInteger activeViewIndex; // ivar: _activeViewIndex
@property (nonatomic) BOOL contentTooSmall; // ivar: _contentTooSmall
@property (weak, nonatomic) NSObject<SXItemizedScrollViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *frames; // ivar: _frames
@property (nonatomic) CGSize framesAreValidForSize; // ivar: _framesAreValidForSize
@property (nonatomic) BOOL gotActiveViewIndexChange; // ivar: _gotActiveViewIndexChange
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSIndexSet *visibleIndices; // ivar: _visibleIndices
@property (readonly, nonatomic) _NSRange visibleRange; // ivar: _visibleRange
@property (retain, nonatomic) NSMutableDictionary *visibleViewsByIndex; // ivar: _visibleViewsByIndex


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameForViewAtIndex:(NSUInteger)arg0 ;
-(void)commonInit;
-(void)determineNewVisibilityRange;
-(void)forceCorrectFrames;
-(void)layoutSubviews;
-(void)rebuildFramesArray;
-(void)reindexate;
-(void)scrollToNext;
-(void)scrollToPrevious;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)viewManagementForRange:(struct _NSRange )arg0 ;


@end


#endif