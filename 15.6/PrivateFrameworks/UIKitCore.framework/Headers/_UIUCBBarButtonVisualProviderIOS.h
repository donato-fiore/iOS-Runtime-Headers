// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIUCBBARBUTTONVISUALPROVIDERIOS_H
#define _UIUCBBARBUTTONVISUALPROVIDERIOS_H

@class UIButtonBarButtonVisualProvider;


#import "UIButton.h"
#import "_UISlotView.h"

@interface _UIUCBBarButtonVisualProviderIOS : UIButtonBarButtonVisualProvider {
    UIButton *_contentButton;
    _UISlotView *_securePasteButtonSlotView;
    BOOL _slotViewHasRemoteContent;
    id *_menuProvider;
}




+(id)_defaultTitleAttributes;
-(BOOL)canUpdateMenuInPlace;
-(NSInteger)_securePasteButtonSite;
-(id)_defaultTitleAttributes;
-(id)_newButton;
-(id)buttonContextMenuInteractionConfiguration;
-(id)buttonContextMenuStyleFromDefaultStyle:(id)arg0 ;
-(id)buttonContextMenuTargetedPreview;
-(id)contentView;
-(id)imageSymbolConfiguration;
-(id)pointerShapeInContainer:(id)arg0 ;
-(struct CGPoint )menuAnchorPoint;
-(void)_configureImageOrTitleFromBarItem:(id)arg0 ;
-(void)configureButton:(id)arg0 withAppearanceDelegate:(id)arg1 fromBarItem:(id)arg2 ;
-(void)enableSecureButton:(BOOL)arg0 ;
-(void)updateButton:(id)arg0 forEnabledState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 forHighlightedState:(BOOL)arg1 ;
-(void)updateMenu;
-(void)updateSecureButton;


@end


#endif