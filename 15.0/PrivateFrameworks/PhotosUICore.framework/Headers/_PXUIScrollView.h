// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXUISCROLLVIEW_H
#define _PXUISCROLLVIEW_H

@class UIScrollView;
@protocol _PXUIScrollViewFocusItemProvider, PXUIScrollViewDelegate;



@interface _PXUIScrollView : UIScrollView

@property (nonatomic) BOOL deferContentOffsetUpdates; // ivar: _deferContentOffsetUpdates
@property (weak, nonatomic) NSObject<_PXUIScrollViewFocusItemProvider> *focusItemProvider; // ivar: _focusItemProvider
@property (nonatomic) BOOL ignoresSafeAreaInsets; // ivar: _ignoresSafeAreaInsets
@property (nonatomic) CGPoint pagingOriginOffset; // ivar: _pagingOriginOffset
@property (weak, nonatomic, setter=px_setDelegate:) NSObject<PXUIScrollViewDelegate> *px_delegate; // ivar: _px_delegate
@property (nonatomic) BOOL respectsContentZOrder; // ivar: _respectsContentZOrder


-(id)focusItemsInRect:(struct CGRect )arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)_updatePagingOrigin;
-(void)layoutSubviews;
-(void)px_addSubview:(id)arg0 ;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif