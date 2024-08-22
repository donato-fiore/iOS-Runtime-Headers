// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSACTIONBUTTON_H
#define CPSACTIONBUTTON_H

@class NSDictionary, UIImage, UIImageView, UILabel, NSString, NSArray, NSMutableDictionary;
@protocol CPSActionButtonLayoutDelegate;


#import "CPSButton.h"

@interface CPSActionButton : CPSButton

@property (retain, nonatomic) NSDictionary *buttonAttributes; // ivar: _buttonAttributes
@property (retain, nonatomic) UIImage *buttonImage; // ivar: _buttonImage
@property (retain, nonatomic) UIImageView *buttonImageView; // ivar: _buttonImageView
@property (retain, nonatomic) UILabel *buttonLabel; // ivar: _buttonLabel
@property (retain, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (nonatomic) BOOL disabledButtonFocused; // ivar: _disabledButtonFocused
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (weak, nonatomic) NSObject<CPSActionButtonLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (retain, nonatomic) NSMutableDictionary *tintColors; // ivar: _tintColors


-(BOOL)canBecomeFocused;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLayout;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setupLayoutConstraints;
-(void)setupViews;
-(void)stateUpdated;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateViews;


@end


#endif