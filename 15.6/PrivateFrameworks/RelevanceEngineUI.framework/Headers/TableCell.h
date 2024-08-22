// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABLECELL_H
#define TABLECELL_H

@class UITableViewCell;


#import "REUpNextBaseCell.h"

@interface TableCell : UITableViewCell

@property (retain, nonatomic) REUpNextBaseCell *contentCell; // ivar: _contentCell


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureWithContent:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif