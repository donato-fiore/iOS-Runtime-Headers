// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI20RECORDDATASOURCECELL_H
#define _TTC15HEALTHRECORDSUI20RECORDDATASOURCECELL_H

@class UITableViewCell;



@interface _TtC15HealthRecordsUI20RecordDataSourceCell : UITableViewCell {
    ? brandView;
}




+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configCellWith:(id)arg0 owner:(id)arg1 dataProvider:(id)arg2 ;
-(void)configCellWith:(id)arg0 subject:(id)arg1 dataProvider:(id)arg2 ;


@end


#endif