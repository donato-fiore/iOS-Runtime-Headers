// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STAPPSTOREICONCELL_H
#define STAPPSTOREICONCELL_H

@class UIImageView, UILabel;


#import "STTableCell.h"

@interface STAppStoreIconCell : STTableCell

@property (readonly, nonatomic) UIImageView *appIconView; // ivar: _appIconView
@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)value;
-(void)_didFetchAppInfoOrIcon:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif