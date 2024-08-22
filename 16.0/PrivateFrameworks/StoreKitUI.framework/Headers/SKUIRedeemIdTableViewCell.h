// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREDEEMIDTABLEVIEWCELL_H
#define SKUIREDEEMIDTABLEVIEWCELL_H

@class UITableViewCell, NSString, UITextField;
@protocol UITextFieldDelegate, SKUIRedeemIdTableViewCellDelegate;



@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIRedeemIdTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textField; // ivar: _textField


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_initializeTextField;
-(void)layoutSubviews;
-(void)setAutoCapitalizationType:(NSInteger)arg0 ;
-(void)setKeyboardType:(NSInteger)arg0 ;
-(void)setPlaceholderText:(id)arg0 ;
-(void)setReturnKeyType:(NSInteger)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;


@end


#endif