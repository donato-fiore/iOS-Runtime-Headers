// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRUIBUTTONPANELVIEW_H
#define _TVRUIBUTTONPANELVIEW_H

@class UIView, NSMutableArray;
@protocol _TVRUIEventDelegate, TVRUIStyleProvider;


#import "_TVRUIPagingButton.h"
#import "TVRUIButton.h"

@interface _TVRUIButtonPanelView : UIView

@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *buttonEventDelegate; // ivar: _buttonEventDelegate
@property (retain, nonatomic) NSMutableArray *leftButtons; // ivar: _leftButtons
@property (retain, nonatomic) _TVRUIPagingButton *pagingButton; // ivar: _pagingButton
@property (nonatomic, getter=isPagingEnabled) BOOL pagingEnabled; // ivar: _pagingEnabled
@property (retain, nonatomic) TVRUIButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) NSMutableArray *rightButtons; // ivar: _rightButtons
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider


-(id)_processButtons:(id)arg0 ;
-(id)_searchButton;
-(id)initPagedPanelWithPrimaryButtonType:(NSInteger)arg0 secondaryLeftButtons:(id)arg1 styleProvider:(id)arg2 ;
-(id)initWithPrimaryButtonType:(NSInteger)arg0 secondaryLeftButtons:(id)arg1 secondaryRightButtons:(id)arg2 styleProvider:(id)arg3 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_buttonReleased:(id)arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_configureButton:(id)arg0 ;
-(void)_disableButton:(id)arg0 changeAlpha:(BOOL)arg1 ;
-(void)_enableButton:(id)arg0 ;
-(void)_sendButtonPressed:(NSInteger)arg0 ;
-(void)_sendButtonReleased:(NSInteger)arg0 ;
-(void)_sendButtonTapped:(NSInteger)arg0 ;
-(void)disableButtons:(BOOL)arg0 ;
-(void)disableSearchButton;
-(void)enableButtonsForDevice:(id)arg0 ;
-(void)enableSearchButton;
-(void)layoutSubviews;


@end


#endif