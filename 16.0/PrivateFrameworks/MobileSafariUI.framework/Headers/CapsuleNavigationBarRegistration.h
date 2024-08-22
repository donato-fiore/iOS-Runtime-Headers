// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAPSULENAVIGATIONBARREGISTRATION_H
#define CAPSULENAVIGATIONBARREGISTRATION_H

@class _SFBarManager, NSArray, NSMutableDictionary, SFNavigationBarToggleButton, SFMoreMenuButton, SFCapsuleNavigationBar, _SWCollaborationButtonView, NSString, UIButton;
@protocol _SFBarRegistrationToken;

#import <Foundation/Foundation.h>


@interface CapsuleNavigationBarRegistration : NSObject <_SFBarRegistrationToken>

 {
    _SFBarManager *_manager;
    NSArray *_leadingBarItems;
    NSArray *_trailingBarItems;
    NSMutableDictionary *_buttonsByBarItem;
    NSMutableDictionary *_menuByBarItem;
    BOOL _hiddenBarItems;
    BOOL _disabledBarItems;
    SFNavigationBarToggleButton *_formatMenuButton;
    SFMoreMenuButton *_progressView;
}


@property (readonly, weak) SFCapsuleNavigationBar *bar; // ivar: _bar
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;
@property (nonatomic) NSInteger contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *microphoneButton;
@property (nonatomic) NSUInteger pageFormatItemState; // ivar: _pageFormatItemState
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(BOOL)_isBarItemHidden:(NSInteger)arg0 ;
-(BOOL)containsBarItem:(NSInteger)arg0 ;
-(id)_actionForBarItem:(NSInteger)arg0 ;
-(id)_longPressActionForBarItem:(NSInteger)arg0 ;
-(id)_progressView;
-(id)_touchDownActionForBarItem:(NSInteger)arg0 ;
-(id)initWithBar:(id)arg0 barManager:(id)arg1 ;
-(id)popoverSourceInfoForItem:(NSInteger)arg0 ;
-(id)viewForBarItem:(NSInteger)arg0 ;
-(void)_updateDownloadState;
-(void)_updateFormatMenuButton;
-(void)_voiceSearchAvailabilityDidChange:(id)arg0 ;
-(void)dealloc;
-(void)setProgress:(CGFloat)arg0 forBarItem:(NSInteger)arg1 ;
-(void)updateBarAnimated:(BOOL)arg0 ;


@end


#endif