// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTOOLBARBACKGROUNDVIEW_H
#define AKTOOLBARBACKGROUNDVIEW_H

@class UIView, UIVisualEffectView, UIColor;



@interface AKToolbarBackgroundView : UIView {
    UIVisualEffectView *_visualEffectView;
}


@property (nonatomic) NSInteger blurStyle; // ivar: _blurStyle
@property (retain, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (retain, nonatomic) UIView *separatorLine; // ivar: _separatorLine
@property (nonatomic, getter=isTranslucent) BOOL translucent; // ivar: _translucent


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_hostSeparatorInView:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 forToolbarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setShadowImage:(id)arg0 forToolbarPosition:(NSInteger)arg1 ;
-(void)updateSeparatorVisibility;


@end


#endif