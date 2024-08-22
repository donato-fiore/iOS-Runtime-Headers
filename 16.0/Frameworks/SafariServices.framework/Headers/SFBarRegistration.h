// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFBARREGISTRATION_H
#define SFBARREGISTRATION_H

@class UIResponder, NSOrderedSet, UIToolbar, NSMutableSet, UIBarButtonItem, _SWCollaborationButtonView, NSString, UIButton;
@protocol _SFBarRegistrationToken;


#import "_SFBarManager.h"
#import "SFDownloadsBarButtonItem.h"

@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken>

 {
    NSOrderedSet *_arrangedBarItems;
    UIToolbar *_bar;
    _SFBarManager *_barManager;
    NSMutableSet *_hiddenBarItems;
    NSOrderedSet *_lastCommittedArrangedBarItems;
    NSInteger _layout;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_bookmarksItem;
    SFDownloadsBarButtonItem *_downloadsItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_newTabItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_tabExposeItem;
    UIBarButtonItem *_openInSafariItem;
    UIBarButtonItem *_customActivityItem;
}


@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;
@property (nonatomic) NSInteger contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *microphoneButton;
@property (nonatomic) NSUInteger pageFormatItemState;
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(BOOL)_arrangedBarItemsNeedUpdate;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)containsBarItem:(NSInteger)arg0 ;
-(NSInteger)_barItemForUIBarButtonItem:(id)arg0 ;
-(id)UIBarButtonItemForItem:(NSInteger)arg0 ;
-(id)_UIBarButtonItemForBarItem:(NSInteger)arg0 ;
-(id)_UIBarButtonItemsForArrangedBarItems:(id)arg0 ;
-(id)_effectiveArrangedBarItems;
-(id)_newBarButtonItemForSFBarItem:(NSInteger)arg0 ;
-(id)initWithBar:(id)arg0 barManager:(id)arg1 layout:(NSInteger)arg2 persona:(NSInteger)arg3 ;
-(id)popoverSourceInfoForItem:(NSInteger)arg0 ;
-(void)_itemReceivedLongPress:(id)arg0 ;
-(void)_itemReceivedTap:(id)arg0 ;
-(void)_itemReceivedTouchDown:(id)arg0 ;
-(void)_updateTitlesAndMenus;
-(void)pulseBarItem:(NSInteger)arg0 ;
-(void)pulseDownloadsItem;
-(void)setBarItem:(NSInteger)arg0 enabled:(BOOL)arg1 ;
-(void)setBarItem:(NSInteger)arg0 hidden:(BOOL)arg1 ;
-(void)setBarItem:(NSInteger)arg0 menu:(id)arg1 ;
-(void)setBarItem:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(void)setCustomActivityImage:(id)arg0 accessibilityLabel:(id)arg1 ;
-(void)setDownloadsItemProgress:(CGFloat)arg0 ;
-(void)setImage:(id)arg0 forBarItem:(NSInteger)arg1 ;
-(void)setProgress:(CGFloat)arg0 forBarItem:(NSInteger)arg1 ;
-(void)updateArrangedUIBarButtonItemsIfNeeded;
-(void)updateBarAnimated:(BOOL)arg0 ;


@end


#endif