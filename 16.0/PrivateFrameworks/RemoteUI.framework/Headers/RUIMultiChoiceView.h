// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUIMULTICHOICEVIEW_H
#define RUIMULTICHOICEVIEW_H

@class UIView, UIStackView, NSMutableArray, UIActivityIndicatorView, UIVisualEffectView, UILayoutGuide, UIColor;
@protocol RUIHeaderDelegate, RUIMultiChoiceActionHandler;


#import "RUIHTMLHeaderView.h"
#import "RUIHTMLHeaderElement.h"

@interface RUIMultiChoiceView : UIView <RUIHeaderDelegate>

 {
    UIStackView *_stackView;
    NSMutableArray *_choices;
    NSMutableArray *_choiceButtons;
    NSMutableArray *_buttonsWidthConstraint;
    UIActivityIndicatorView *_activityIndicatorView;
    UIVisualEffectView *_trayBackdrop;
    CGFloat _headerHeight;
    UILayoutGuide *_contentLayoutGuide;
}


@property (retain, nonatomic) RUIHTMLHeaderView *HTMLHeaderView; // ivar: _HTMLHeaderView
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;
@property (retain, nonatomic) RUIHTMLHeaderElement *header; // ivar: _header
@property (nonatomic) BOOL removeBlurEffect; // ivar: _removeBlurEffect
@property (weak, nonatomic) NSObject<RUIMultiChoiceActionHandler> *target; // ivar: _target
@property (nonatomic) BOOL useNonObKitStyleButtons; // ivar: _useNonObKitStyleButtons


-(CGFloat)estimatedViewHeight;
-(id)_createActivityIndicatorView;
-(id)getAllChoices;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)addChoice:(id)arg0 ;
-(void)didTapChoice:(id)arg0 ;
-(void)didUpdateTitleForChoice:(id)arg0 ;
-(void)headerView:(id)arg0 activatedLinkWithURL:(id)arg1 ;
-(void)layoutSubviews;
-(void)setChoiceEnabled:(BOOL)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setChoiceHidden:(BOOL)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setStackViewElementSpacing:(CGFloat)arg0 ;
-(void)setStackViewTopAndBottomMarginSpacing:(CGFloat)arg0 ;
-(void)setupStackView;
-(void)setupTrayBackdrop;
-(void)startActivityIndicatorForChoice:(id)arg0 ;
-(void)stopActivityIndicatorForChoice:(id)arg0 ;


@end


#endif