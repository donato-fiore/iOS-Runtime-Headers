// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPSPINNERVIEW_H
#define VUIAPPSPINNERVIEW_H

@class UIView, UIVisualEffectView, UIActivityIndicatorView;



@interface VUIAppSpinnerView : UIView {
    UIVisualEffectView *_effectView;
    UIActivityIndicatorView *_spinner;
    BOOL _didLayout;
}




-(void)layoutSubviews;


@end


#endif