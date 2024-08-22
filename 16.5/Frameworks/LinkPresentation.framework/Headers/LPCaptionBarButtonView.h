// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPCAPTIONBARBUTTONVIEW_H
#define LPCAPTIONBARBUTTONVIEW_H

@class UIButton;


#import "LPComponentView.h"
#import "LPCaptionButtonPresentationProperties.h"
#import "LPButtonStyle.h"
#import "LPCircularProgressIndicator.h"

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    UIButton *_button;
    UIButton *_collapsedButton;
    LPCircularProgressIndicator *_progressIndicator;
}


@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (nonatomic) CGFloat progress; // ivar: _progress


-(BOOL)_menuButtonShowsChevron;
-(BOOL)_menuButtonShowsImages;
-(BOOL)_menuButtonShowsIndicator;
-(BOOL)_menuButtonShowsSingleImage;
-(BOOL)isFinished;
-(BOOL)isUpdating;
-(id)_createButton;
-(id)_createCollapsedButton;
-(id)_createMenu;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 properties:(id)arg1 style:(id)arg2 ;
-(struct CGSize )collapsedSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureMenuButton:(id)arg0 ;
-(void)_configurePillButton:(id)arg0 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)layoutComponentView;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;
-(void)updateProgressIndicator;


@end


#endif