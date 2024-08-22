// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRIGGERTYPECELL_H
#define WFTRIGGERTYPECELL_H

@class UITableViewCell, WFTrigger, UILabel, UIImageView;



@interface WFTriggerTypeCell : UITableViewCell

@property (retain, nonatomic) WFTrigger *trigger; // ivar: _trigger
@property (readonly, nonatomic) UILabel *triggerDescriptionLabel; // ivar: _triggerDescriptionLabel
@property (readonly, nonatomic) UIImageView *triggerIconView; // ivar: _triggerIconView
@property (readonly, nonatomic) UILabel *triggerTitleLabel; // ivar: _triggerTitleLabel
@property (retain, nonatomic) Class triggerTypeClass; // ivar: _triggerTypeClass


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)updateUI;


@end


#endif