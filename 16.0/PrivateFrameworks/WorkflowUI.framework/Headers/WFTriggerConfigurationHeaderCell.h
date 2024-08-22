// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRIGGERCONFIGURATIONHEADERCELL_H
#define WFTRIGGERCONFIGURATIONHEADERCELL_H

@class UITableViewCell, WFTrigger, UIImageView, UILabel;



@interface WFTriggerConfigurationHeaderCell : UITableViewCell

@property (retain, nonatomic) WFTrigger *trigger; // ivar: _trigger
@property (readonly, nonatomic) UIImageView *triggerIconView; // ivar: _triggerIconView
@property (readonly, nonatomic) UILabel *triggerTitleLabel; // ivar: _triggerTitleLabel
@property (retain, nonatomic) Class triggerTypeClass; // ivar: _triggerTypeClass


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureWithImage:(id)arg0 tintColor:(id)arg1 title:(id)arg2 numberOfLines:(NSInteger)arg3 withTrigger:(id)arg4 ;
-(void)prepareForReuse;
-(void)updateUI;


@end


#endif