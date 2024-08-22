// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIAPPLELOGOVIEW_H
#define SBUIAPPLELOGOVIEW_H

@class UIView, PUIProgressWindow;



@interface SBUIAppleLogoView : UIView {
    UIView *_layerView;
    PUIProgressWindow *_progressWindow;
}


@property (nonatomic) float progress; // ivar: _progress


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 appearance:(NSInteger)arg1 progressBarVisible:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 inverted:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 inverted:(BOOL)arg1 progressBarVisible:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 progressBarVisible:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 useWhiteLogo:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 useWhiteLogo:(BOOL)arg1 progressBarVisible:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)setStatusText:(id)arg0 ;


@end


#endif