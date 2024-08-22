// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTITLEBUTTONDESCRIPTIONCELL_H
#define HUTITLEBUTTONDESCRIPTIONCELL_H

@class UIFont, NSString, UIButton;
@protocol HUTitleButtonDescriptionCellDelegate;


#import "HUTitleDescriptionCell.h"

@interface HUTitleButtonDescriptionCell : HUTitleDescriptionCell

@property (nonatomic) BOOL buttonColorFollowsTintColor; // ivar: _buttonColorFollowsTintColor
@property (retain, nonatomic) UIFont *buttonFont; // ivar: _buttonFont
@property (retain, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (weak, nonatomic) NSObject<HUTitleButtonDescriptionCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hideButton; // ivar: _hideButton
@property (retain, nonatomic) UIButton *valueButton; // ivar: _valueButton


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateButtonHidden;
-(void)handleRemoveAction:(id)arg0 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif