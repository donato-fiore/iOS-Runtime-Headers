// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI20RECORDDETAILITEMCELL_H
#define _TTC15HEALTHRECORDSUI20RECORDDETAILITEMCELL_H

@class UITableViewCell, UILabel;



@interface _TtC15HealthRecordsUI20RecordDetailItemCell : UITableViewCell

@property (nonatomic, readonly) UILabel *bodyLabel; // ivar: bodyLabel
@property (nonatomic, readonly) UILabel *titleLabel; // ivar: titleLabel


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif