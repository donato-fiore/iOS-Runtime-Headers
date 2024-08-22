// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIINVITEESVIEWSIMPLECELL_H
#define EKUIINVITEESVIEWSIMPLECELL_H

@class UITableViewCell, NSArray, NSString, UILabel;



@interface EKUIInviteesViewSimpleCell : UITableViewCell

@property (retain, nonatomic) NSArray *persistentConstraints; // ivar: _persistentConstraints
@property (retain, nonatomic) NSString *simpleText; // ivar: _simpleText
@property (retain, nonatomic) UILabel *simpleTextLabel; // ivar: _simpleTextLabel


+(NSInteger)accessoryType;
+(id)labelText;
-(BOOL)isCentered;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateConstraints;


@end


#endif