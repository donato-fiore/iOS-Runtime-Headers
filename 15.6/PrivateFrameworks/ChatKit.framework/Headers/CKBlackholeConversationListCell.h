// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBLACKHOLECONVERSATIONLISTCELL_H
#define CKBLACKHOLECONVERSATIONLISTCELL_H

@class UITableViewCell, UIDateLabel, UILabel;



@interface CKBlackholeConversationListCell : UITableViewCell

@property (retain, nonatomic) UIDateLabel *dateLabel; // ivar: _dateLabel
@property (retain, nonatomic) UILabel *fromLabel; // ivar: _fromLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureForConversation:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif