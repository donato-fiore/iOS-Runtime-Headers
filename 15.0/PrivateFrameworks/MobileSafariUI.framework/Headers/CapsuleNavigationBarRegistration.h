// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAPSULENAVIGATIONBARREGISTRATION_H
#define CAPSULENAVIGATIONBARREGISTRATION_H

@class _SFBarManager, NSArray, NSMutableDictionary, SFNavigationBarToggleButton, SFMoreMenuButton, SFBadgeContainerView, SFCapsuleNavigationBar, NSString;
@protocol SFCapsuleNavigationBarButtonProvider, _SFBarRegistrationToken;

#import <Foundation/Foundation.h>


@interface CapsuleNavigationBarRegistration : NSObject <SFCapsuleNavigationBarButtonProvider, _SFBarRegistrationToken>

 {
    _SFBarManager *_manager;
    NSArray *_leadingBarItems;
    NSArray *_trailingBarItems;
    NSMutableDictionary *_buttonsByBarItem;
    NSMutableDictionary *_menuProvidersByBarItem;
    BOOL _hiddenBarItems;
    BOOL _disabledBarItems;
    SFNavigationBarToggleButton *_formatMenuButton;
    SFMoreMenuButton *_progressView;
    SFMoreMenuButton *_shareButton;
    SFBadgeContainerView *_shareBadgeContainer;
}


@property (readonly, weak) SFCapsuleNavigationBar *bar; // ivar: _bar
@property (nonatomic) NSInteger contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger pageFormatItemState; // ivar: _pageFormatItemState
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(BOOL)_isBarItemHidden:(NSInteger)arg0 ;
-(BOOL)containsBarItem:(NSInteger)arg0 ;
-(id)_actionForBarItem:(NSInteger)arg0 ;
-(id)_longPressActionForBarItem:(NSInteger)arg0 ;
-(id)_touchDownActionForBarItem:(NSInteger)arg0 ;
-(id)initWithBar:(id)arg0 barManager:(id)arg1 ;
-(id)popoverSourceInfoForItem:(NSInteger)arg0 ;
-(id)viewForBarItem:(NSInteger)arg0 ;
-(void)_updateDownloadState;
-(void)capsuleNavigationBarDidUpdateUsesSingleButtonRow:(id)arg0 ;
-(void)pulseBarItem:(NSInteger)arg0 ;
-(void)setBadge:(NSInteger)arg0 forBarItem:(NSInteger)arg1 ;
// -(void)setMenuProvider:(id)arg0 forBarItem:(unk)arg1  ;
-(void)setProgress:(CGFloat)arg0 forBarItem:(NSInteger)arg1 ;
-(void)updateBarAnimated:(BOOL)arg0 ;


@end


#endif