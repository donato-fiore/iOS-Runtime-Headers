// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTFIELDTABLEVIEWCELL_H
#define TSWPTEXTFIELDTABLEVIEWCELL_H

@class UITableViewCell, NSString, UITextField;
@protocol UITextFieldDelegate;



@interface TSWPTextFieldTableViewCell : UITableViewCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) UITextField *textField; // ivar: _textField


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)p_endEditingOnExit;


@end


#endif