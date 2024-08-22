// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HEALTHRECORDSUI22RECORDPRIMARYTITLECELL_H
#define _TTC15HEALTHRECORDSUI22RECORDPRIMARYTITLECELL_H

@class UITableViewCell, UILabel;



@interface _TtC15HealthRecordsUI22RecordPrimaryTitleCell : UITableViewCell

@property (nonatomic, readonly) UILabel *recordDateLabel; // ivar: recordDateLabel
@property (nonatomic, readonly) UILabel *recordTitleLabel; // ivar: recordTitleLabel


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif