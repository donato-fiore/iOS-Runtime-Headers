// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCOMPOSESCROLLVIEW_H
#define MFCOMPOSESCROLLVIEW_H

@class UIScrollView, NSMutableSet;



@interface MFComposeScrollView : UIScrollView {
    NSMutableSet *_disabledSubviews;
    NSInteger _scrollBlocked;
}


@property (nonatomic) BOOL shouldScrollToFirstResponder; // ivar: _shouldScrollToFirstResponder
@property (nonatomic) BOOL subviewsDisabled; // ivar: _subviewsDisabled


-(BOOL)_scrollsToMakeFirstResponderVisible;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)beginBlockingScroll;
-(void)didAddSubview:(id)arg0 ;
-(void)disableSubview:(id)arg0 ;
-(void)enableSubview:(id)arg0 ;
-(void)endBlockingScroll;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif