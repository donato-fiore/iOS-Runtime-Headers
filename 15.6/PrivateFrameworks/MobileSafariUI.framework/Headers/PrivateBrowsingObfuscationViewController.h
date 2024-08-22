// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRIVATEBROWSINGOBFUSCATIONVIEWCONTROLLER_H
#define PRIVATEBROWSINGOBFUSCATIONVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIToolbar, SFCapsuleNavigationBarTheme;



@interface PrivateBrowsingObfuscationViewController : UIViewController {
    UIVisualEffectView *_bottomBarBackground;
}


@property (weak, nonatomic) UIVisualEffectView *URLButtonBackground; // ivar: _URLButtonBackground
@property (weak, nonatomic) UIToolbar *bottomBar; // ivar: _bottomBar
@property (weak, nonatomic) UIVisualEffectView *capsuleBackground; // ivar: _capsuleBackground
@property (retain, nonatomic) SFCapsuleNavigationBarTheme *theme; // ivar: _theme
@property (weak, nonatomic) UIVisualEffectView *topBarBackground; // ivar: _topBarBackground


-(void)_updateTheme;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif