// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUNIFIEDBARREGISTRATION_H
#define SFUNIFIEDBARREGISTRATION_H

@class SFUnifiedBar, NSMutableSet, NSArray, NSSet, SFUnifiedBarButton, SFUnifiedBarItem, SFCollaborationUnifiedBarItem, _SWCollaborationButtonView, NSString, UIButton;
@protocol _SFBarRegistrationToken;

#import <Foundation/Foundation.h>

#import "_SFBarManager.h"
#import "SFDownloadsUnifiedBarItem.h"

@interface SFUnifiedBarRegistration : NSObject <_SFBarRegistrationToken>

 {
    SFUnifiedBar *_bar;
    _SFBarManager *_barManager;
    NSInteger _persona;
    BOOL _needsUpdateItems;
    BOOL _nextUpdateShouldPinScrollPositionToTrailingEdge;
    NSMutableSet *_disabledBarItems;
    NSMutableSet *_hiddenBarItems;
    NSArray *_leadingBarItems;
    NSArray *_trailingBarItems;
    NSSet *_allBarItems;
    SFUnifiedBarButton *_bookmarksAndSidebarButton;
    SFUnifiedBarItem *_backButton;
    SFUnifiedBarItem *_forwardButton;
    SFUnifiedBarItem *_tabGroupButton;
    SFUnifiedBarItem *_shareButton;
    SFUnifiedBarItem *_newTabButton;
    SFUnifiedBarItem *_tabOverviewButton;
    SFDownloadsUnifiedBarItem *_downloadsButton;
    SFUnifiedBarItem *_cancelButton;
    SFCollaborationUnifiedBarItem *_collaborationButton;
}


@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *microphoneButton;
@property (nonatomic) NSUInteger pageFormatItemState;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)_isBarItemHidden:(NSInteger)arg0 ;
-(BOOL)containsBarItem:(NSInteger)arg0 ;
-(NSInteger)_SFBarItemForUnifiedBarItem:(id)arg0 ;
-(id)_imageForBarItem:(NSInteger)arg0 ;
-(id)_makeBarItemForSFBarItem:(NSInteger)arg0 ;
-(id)_unifiedBarItemsForSFBarItems:(id)arg0 ;
-(id)initWithBar:(id)arg0 barManager:(id)arg1 persona:(NSInteger)arg2 ;
-(id)popoverSourceInfoForItem:(NSInteger)arg0 ;
-(id)unifiedBarItemForSFBarItem:(NSInteger)arg0 ;
-(id)viewForBarItem:(NSInteger)arg0 ;
-(void)_itemReceivedTap:(id)arg0 ;
-(void)_setNeedsUpdateItems;
-(void)_updateEnabledBarItems;
-(void)_updateItems;
-(void)_updateItemsIfNeeded;
-(void)pulseBarItem:(NSInteger)arg0 ;
-(void)setAttributedTitle:(id)arg0 forBarItem:(NSInteger)arg1 ;
-(void)setBarItem:(NSInteger)arg0 enabled:(BOOL)arg1 ;
-(void)setBarItem:(NSInteger)arg0 hidden:(BOOL)arg1 ;
-(void)setBarItem:(NSInteger)arg0 menu:(id)arg1 ;
-(void)setImage:(id)arg0 forBarItem:(NSInteger)arg1 ;
-(void)setProgress:(CGFloat)arg0 forBarItem:(NSInteger)arg1 ;
-(void)setTitle:(id)arg0 forBarItem:(NSInteger)arg1 ;
-(void)updateBarAnimated:(BOOL)arg0 ;


@end


#endif