// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPCONTACTSBADGEVIEW_H
#define LPCONTACTSBADGEVIEW_H

@class UIView, UIImageView, CAShapeLayer;


#import "LPComponentView.h"
#import "LPContactsBadgeStyle.h"

@interface LPContactsBadgeView : LPComponentView {
    LPContactsBadgeStyle *_style;
    UIView *_avatarView;
    UIImageView *_highlightIndicatorView;
    UIView *_highlightShadowView;
    CAShapeLayer *_maskLayer;
}




-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 contacts:(id)arg1 highlighted:(BOOL)arg2 style:(id)arg3 ;
-(struct CGRect )layoutExclusionRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutComponentView;


@end


#endif