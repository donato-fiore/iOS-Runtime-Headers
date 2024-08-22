// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBUTTONBARBUTTONVISUALPROVIDERCARPLAY_H
#define _UIBUTTONBARBUTTONVISUALPROVIDERCARPLAY_H

@class UIButtonBarButtonVisualProvider, NSLayoutConstraint, NSArray, NSMutableDictionary;
@protocol _UIButtonBarAppearanceDelegate;


#import "UIImageView.h"
#import "UIView.h"
#import "UILabel.h"

@interface _UIButtonBarButtonVisualProviderCarPlay : UIButtonBarButtonVisualProvider

@property (weak, nonatomic) NSObject<_UIButtonBarAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (retain, nonatomic) UIImageView *backView; // ivar: _backView
@property (retain, nonatomic) NSLayoutConstraint *backViewToContentConstraint; // ivar: _backViewToContentConstraint
@property (retain, nonatomic) NSArray *buttonConstraints; // ivar: _buttonConstraints
@property (retain, nonatomic) UIView *focusedView; // ivar: _focusedView
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSLayoutConstraint *maxTitleViewWidthConstraint; // ivar: _maxTitleViewWidthConstraint
@property (retain, nonatomic) NSArray *titleAlternatives; // ivar: _titleAlternatives
@property (retain, nonatomic) NSMutableDictionary *titleAlterntativeLookup; // ivar: _titleAlterntativeLookup
@property (retain, nonatomic) UILabel *titleView; // ivar: _titleView


-(BOOL)supportsBackButtons;
-(id)_titleAlternativeForTitle:(id)arg0 ;
-(id)backIndicatorView;
-(id)contentView;
-(void)_selectGestureChanged:(id)arg0 ;
-(void)_setupAlternateTitlesFromBarButtonItem:(id)arg0 ;
-(void)buttonLayoutSubviews:(id)arg0 baseImplementation:(id)arg1 ;
-(void)configureButton:(id)arg0 fromBarButtonItem:(id)arg1 ;
-(void)configureButton:(id)arg0 withAppearanceDelegate:(id)arg1 fromBarItem:(id)arg2 ;
-(void)updateButton:(id)arg0 forFocusedState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 forHighlightedState:(BOOL)arg1 ;


@end


#endif