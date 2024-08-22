// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHFOCUSGUIDEVIEW_H
#define SBHFOCUSGUIDEVIEW_H

@class UIView, UIFocusGuide;



@interface SBHFocusGuideView : UIView {
    UIFocusGuide *_focusGuide;
}


@property (retain, nonatomic) UIView *targetView; // ivar: _targetView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTargetedView;


@end


#endif