// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STAPPTITLESUBTITLECELL_H
#define STAPPTITLESUBTITLECELL_H

@class PSTableCell;



@interface STAppTitleSubtitleCell : PSTableCell

@property (nonatomic) BOOL hasSubtitle; // ivar: _hasSubtitle
@property (readonly, nonatomic) BOOL isAppCell;


+(NSInteger)cellStyle;
-(void)_didFetchAppInfoOrIcon:(id)arg0 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;


@end


#endif