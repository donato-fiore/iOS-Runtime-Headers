// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUALARMEDITABLETEXTCELL_H
#define HUALARMEDITABLETEXTCELL_H

@class UITableViewCell, NSString, UITextField;
@protocol UITextFieldDelegate;



@interface HUAlarmEditableTextCell : UITableViewCell <UITextFieldDelegate>



@property (nonatomic) NSInteger autocapitalizationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif