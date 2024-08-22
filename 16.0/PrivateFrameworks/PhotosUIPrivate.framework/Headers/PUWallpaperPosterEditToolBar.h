// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERPOSTEREDITTOOLBAR_H
#define PUWALLPAPERPOSTEREDITTOOLBAR_H

@class UIView, UIMenu, UIButton, UIAction;
@protocol PUWallpaperPosterEditToolbarDelegate;



@interface PUWallpaperPosterEditToolBar : UIView

@property (retain, nonatomic) UIMenu *actionsMenu; // ivar: _actionsMenu
@property (retain, nonatomic) UIButton *actionsMenuButton; // ivar: _actionsMenuButton
@property (weak, nonatomic) NSObject<PUWallpaperPosterEditToolbarDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIAction *primaryAction; // ivar: _primaryAction
@property (retain, nonatomic) UIButton *primaryActionButton; // ivar: _primaryActionButton


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupView;


@end


#endif