// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPSWITCHERSCROLLVIEW_H
#define SBAPPSWITCHERSCROLLVIEW_H

@class BSUIScrollView;



@interface SBAppSwitcherScrollView : BSUIScrollView {
    CGPoint _previousContentOffset;
    CGFloat _previousScrollTime;
    CGPoint _rawContentOffsetVelocity;
}




-(struct CGPoint )contentOffsetVelocity;
-(struct CGPoint )contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;


@end


#endif