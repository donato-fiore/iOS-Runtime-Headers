// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIINVITEESVIEWADDINVITEECELL_H
#define EKUIINVITEESVIEWADDINVITEECELL_H

@class UITableViewCell, NSArray, NSString, UILabel;



@interface EKUIInviteesViewAddInviteeCell : UITableViewCell

@property (retain, nonatomic) NSArray *persistentConstraints; // ivar: _persistentConstraints
@property (retain, nonatomic) NSString *simpleText; // ivar: _simpleText
@property (retain, nonatomic) UILabel *simpleTextLabel; // ivar: _simpleTextLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateConstraints;


@end


#endif