// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PKUIKVISIBILITYBACKDROPVIEW_H
#define _PKUIKVISIBILITYBACKDROPVIEW_H

@class UIBackdropView;
@protocol _PKUIKVisibilityBackdropViewDelegate;



@interface _PKUIKVisibilityBackdropView : UIBackdropView {
    CGFloat _visibility;
    CGFloat _visibilityAnimationTarget;
    unsigned int _animationCounter;
    unsigned int _styleToken;
    BOOL _updatingBackdropSettings;
    NSInteger _style;
}


@property (weak, nonatomic) NSObject<_PKUIKVisibilityBackdropViewDelegate> *delegate; // ivar: _delegate


-(CGFloat)pkui_visibility;
-(NSInteger)pkui_preferredBackdropStyle;
-(id)initWithFrame:(struct CGRect )arg0 privateStyle:(NSInteger)arg1 ;
-(void)_pkui_setVisibility:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_updateStyleIfNecessary;
-(void)dealloc;
-(void)pkui_accessibilitySettingsDidChange:(id)arg0 ;
-(void)pkui_commitBackdropSettings;
-(void)pkui_setVisibility:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)pkui_updateBackdropSettings;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif