// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI27RECORDDETAILITEMSPINNERCELL_H
#define _TTC15HEALTHRECORDSUI27RECORDDETAILITEMSPINNERCELL_H

@class UITableViewCell, UILabel, UIActivityIndicatorView;



@interface _TtC15HealthRecordsUI27RecordDetailItemSpinnerCell : UITableViewCell

@property (nonatomic, readonly) UILabel *bodyLabel; // ivar: bodyLabel
@property (nonatomic, readonly) UIActivityIndicatorView *spinner; // ivar: spinner
@property (nonatomic, readonly) UILabel *titleLabel; // ivar: titleLabel


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif