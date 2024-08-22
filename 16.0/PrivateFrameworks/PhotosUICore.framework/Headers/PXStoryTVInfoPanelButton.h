// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTVINFOPANELBUTTON_H
#define PXSTORYTVINFOPANELBUTTON_H

@class UIView, _UIFloatingContentView, UILabel, UIVisualEffectView, NSString;



@interface PXStoryTVInfoPanelButton : UIView {
    _UIFloatingContentView *_floatingContentView;
    UILabel *_label;
    UIView *_focusView;
    UIVisualEffectView *_backgroundEffectView;
}


@property (copy, nonatomic) NSString *text;


+(CGFloat)widthForText:(id)arg0 ;
-(BOOL)canBecomeFocused;
-(NSUInteger)elementControlState;
-(id)elementTintColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateAppearance;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setControlState:(NSUInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFocusState:(id)arg0 ;


@end


#endif