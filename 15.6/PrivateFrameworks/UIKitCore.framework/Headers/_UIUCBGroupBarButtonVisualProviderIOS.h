// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIUCBGROUPBARBUTTONVISUALPROVIDERIOS_H
#define _UIUCBGROUPBARBUTTONVISUALPROVIDERIOS_H

@class UIUCBBarButtonVisualProviderIOS;
@protocol _UIButtonBarAppearanceDelegate;


#import "_UIUCBKBSelectionBackground.h"
#import "UIColor.h"

@interface _UIUCBGroupBarButtonVisualProviderIOS : UIUCBBarButtonVisualProviderIOS {
    _UIUCBKBSelectionBackground *_selectionBackgroundView;
    id<_UIButtonBarAppearanceDelegate> *_appearanceDelegate;
    UIColor *_tintColor;
}


@property (nonatomic) BOOL lightKeyboard; // ivar: _lightKeyboard


+(id)darkKeyboardProvider;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldLift;
-(NSInteger)_securePasteButtonSite;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageSymbolConfiguration;
-(id)tintColor;
-(struct CGPoint )menuAnchorPoint;
-(void)configureButton:(id)arg0 withAppearanceDelegate:(id)arg1 fromBarItem:(id)arg2 ;
-(void)setTintColor:(id)arg0 ;
-(void)updateButton:(id)arg0 forSelectedState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 toUseButtonShapes:(BOOL)arg1 ;


@end


#endif