// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTENTUNAVAILABLEWRAPPERVIEW_H
#define _UICONTENTUNAVAILABLEWRAPPERVIEW_H

@class NSString;
@protocol UIScrollViewDelegate, _UIContentViewInternal, UIContentConfiguration;


#import "UIView.h"
#import "_UIContentUnavailableWrapperScrollView.h"
#import "_UIContentUnavailableWrapperSeparatorView.h"

@interface _UIContentUnavailableWrapperView : UIView <UIScrollViewDelegate>

 {
    id<_UIContentViewInternal> *_viewForConfiguration;
    CGRect _keyboardFrame;
    BOOL _trackingKeyboardFrame;
    _UIContentUnavailableWrapperScrollView *_scrollView;
    _UIContentUnavailableWrapperSeparatorView *_topSeparator;
    _UIContentUnavailableWrapperSeparatorView *_bottomSeparator;
}


@property (copy, nonatomic) NSObject<UIContentConfiguration> *configuration;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_adjustsLayoutForKeyboard;
-(NSUInteger)_edgesPropagatingSafeAreaInsetsToSubviews;
-(id)_encodableSubviews;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGRect )_effectiveKeyboardFrame;
-(struct NSDirectionalEdgeInsets )_effectiveDirectionalLayoutMargins;
-(void)_applyConfiguration:(id)arg0 ;
-(void)_commonInit;
-(void)_handleKeyboardNotification:(id)arg0 aboutToHide:(BOOL)arg1 ;
-(void)_keyboardAboutToChangeFrame:(id)arg0 ;
-(void)_keyboardAboutToHide:(id)arg0 ;
-(void)_keyboardAboutToShow:(id)arg0 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets )arg0 ;
-(void)_reparentScrollViewPanGesture;
-(void)_updateSeparatorVisibility;
-(void)didMoveToSuperview;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif