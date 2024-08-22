// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTVIEWFOOTERVIEW_H
#define CNCONTACTVIEWFOOTERVIEW_H

@class UIView, CNContact, UILabel;



@interface CNContactViewFooterView : UIView

@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) UILabel *label; // ivar: _label


-(id)init;
-(void)setupSubviews;
-(void)updateLabelText;


@end


#endif