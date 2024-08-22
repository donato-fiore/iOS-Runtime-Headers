// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIACTIONKEYLINEVIEW_H
#define SBUIACTIONKEYLINEVIEW_H

@class UIView, MTVisualStylingProvider;



@interface SBUIActionKeylineView : UIView {
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (nonatomic) CGFloat height; // ivar: _height


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_invalidateVisualStyling;
-(void)_updateCornerMask;
-(void)_updateVisualStylingIfNecessary;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif