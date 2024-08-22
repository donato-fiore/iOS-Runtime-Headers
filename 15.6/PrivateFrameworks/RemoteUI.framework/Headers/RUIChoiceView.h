// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUICHOICEVIEW_H
#define RUICHOICEVIEW_H

@class UIView, UIVisualEffectView, UIScrollView, NSLayoutConstraint, UIButton, UIView<RUIHeader>;


#import "RUIModernHeaderView.h"
#import "RUIElement.h"
#import "RUISubHeaderElement.h"
#import "RUIChoiceViewElement.h"

@interface RUIChoiceView : UIView {
    RUIModernHeaderView *_headerView;
    UIVisualEffectView *_trayBackdrop;
    UIScrollView *_scrollView;
    NSInteger _currentStyle;
    NSLayoutConstraint *_trayHeightConstraint;
}


@property (readonly, nonatomic) UIButton *bigChoice; // ivar: _bigChoice
@property (readonly, nonatomic) UIView *buttonTray; // ivar: _buttonTray
@property (retain, nonatomic) RUIElement *header; // ivar: _header
@property (readonly, nonatomic) UIView<RUIHeader> *headerView;
@property (retain, nonatomic) RUIElement *helpLinkElement; // ivar: _helpLinkElement
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIButton *smallChoice; // ivar: _smallChoice
@property (retain, nonatomic) RUISubHeaderElement *subHeader; // ivar: _subHeader
@property (weak, nonatomic) RUIChoiceViewElement *target; // ivar: _target
@property (nonatomic) BOOL usesTwoButtonLayout; // ivar: _usesTwoButtonLayout


-(id)init;
-(id)titleLabel;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_setupTrayConstraints;
-(void)choiceTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setFirstChoiceTitle:(id)arg0 withColor:(id)arg1 ;
-(void)setHelpLinkTitle:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setSecondChoiceTitle:(id)arg0 withColor:(id)arg1 ;


@end


#endif