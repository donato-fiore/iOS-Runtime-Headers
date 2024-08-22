// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRDETAILEDTABLECELL_H
#define SRDETAILEDTABLECELL_H

@class UITableViewCell, UILabel;



@interface SRDetailedTableCell : UITableViewCell

@property (readonly, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;


@end


#endif