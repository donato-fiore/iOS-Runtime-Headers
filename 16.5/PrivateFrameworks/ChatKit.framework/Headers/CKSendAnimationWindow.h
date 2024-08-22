// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSENDANIMATIONWINDOW_H
#define CKSENDANIMATIONWINDOW_H

@class UIAutoRotatingWindow;


#import "CKGradientReferenceView.h"

@interface CKSendAnimationWindow : UIAutoRotatingWindow

@property (retain, nonatomic) CKGradientReferenceView *gradientReferenceView; // ivar: _gradientReferenceView


-(BOOL)_canAffectStatusBarAppearance;
-(id)initWithWindowScene:(id)arg0 frame:(struct CGRect )arg1 ;


@end


#endif