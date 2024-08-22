// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUISENDINVITATIONSCELL_H
#define EKUISENDINVITATIONSCELL_H

@class UITableViewCell, NSLayoutConstraint, NSArray, NSString, UILabel;



@interface EKUISendInvitationsCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *leftInsetConstraint; // ivar: _leftInsetConstraint
@property (retain, nonatomic) NSArray *persistentConstraints; // ivar: _persistentConstraints
@property (retain, nonatomic) NSString *simpleText; // ivar: _simpleText
@property (retain, nonatomic) UILabel *simpleTextLabel; // ivar: _simpleTextLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateConstraints;
-(void)viewDidMoveToSuperview;


@end


#endif