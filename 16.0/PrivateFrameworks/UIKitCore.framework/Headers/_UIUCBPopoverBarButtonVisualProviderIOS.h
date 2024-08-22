// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIUCBPOPOVERBARBUTTONVISUALPROVIDERIOS_H
#define _UIUCBPOPOVERBARBUTTONVISUALPROVIDERIOS_H

@class UIUCBBarButtonVisualProviderIOS;


#import "UIView.h"
#import "UIColor.h"

@interface _UIUCBPopoverBarButtonVisualProviderIOS : UIUCBBarButtonVisualProviderIOS {
    UIView *_selectionBackgroundView;
}


@property (retain, nonatomic) UIColor *selectionBackgroundTintColor; // ivar: _selectionBackgroundTintColor
@property (retain, nonatomic) UIColor *selectionTintColor; // ivar: _selectionTintColor


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_securePasteButtonSite;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)configureButton:(id)arg0 withAppearanceDelegate:(id)arg1 fromBarItem:(id)arg2 ;
-(void)updateButton:(id)arg0 forSelectedState:(BOOL)arg1 ;


@end


#endif