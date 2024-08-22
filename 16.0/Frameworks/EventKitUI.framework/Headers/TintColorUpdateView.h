// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TINTCOLORUPDATEVIEW_H
#define TINTCOLORUPDATEVIEW_H

@class UIView, UIView<EKUITintColorUpdateDelegate>;



@interface TintColorUpdateView : UIView

@property (nonatomic) UIView<EKUITintColorUpdateDelegate> *tintColorUpdateDelegate; // ivar: _tintColorUpdateDelegate


-(void)tintColorDidChange;


@end


#endif