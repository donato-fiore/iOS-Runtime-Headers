// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONSCROLLVIEW_H
#define SBICONSCROLLVIEW_H

@class BSUIScrollView;
@protocol SBIconScrollViewDelegate;



@interface SBIconScrollView : BSUIScrollView

@property (weak, nonatomic) NSObject<SBIconScrollViewDelegate> *delegate;
@property (nonatomic) CGPoint lastAnimatedScrollContentOffset; // ivar: _lastAnimatedScrollContentOffset


-(BOOL)_scrollsToMakeFirstResponderVisible;
-(BOOL)cancelTouchTracking;
-(struct CGPoint )_roundedProposedContentOffset:(struct CGPoint )arg0 ;
-(void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif