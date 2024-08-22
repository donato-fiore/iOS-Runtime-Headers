// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTTEXTFIELDTABLEVIEWCELL_H
#define SKUIGIFTTEXTFIELDTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIView, NSAttributedString, NSString, UIControl;
@protocol UITextFieldDelegate;



@interface SKUIGiftTextFieldTableViewCell : UITableViewCell {
    UILabel *_label;
    UIView *_topBorderView;
}


@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL leftToRight; // ivar: _leftToRight
@property (readonly, nonatomic) UIControl *textField; // ivar: _textField
@property (nonatomic) NSObject<UITextFieldDelegate> *textFieldDelegate;
@property (copy, nonatomic) NSString *value;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif