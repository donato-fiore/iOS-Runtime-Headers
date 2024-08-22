// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPUIBASETABLECELL_H
#define _CPUIBASETABLECELL_H

@class UITableViewCell;



@interface _CPUIBaseTableCell : UITableViewCell

@property (nonatomic) BOOL itemEnabled; // ivar: _itemEnabled


+(CGFloat)minimumHeight;
+(CGFloat)rowHeight;
+(id)cellForTableView:(id)arg0 ;
+(id)disabledColor;
+(id)disabledHighlightedColor;
+(id)identifier;
-(void)_updateTintColors;
-(void)configureCell;


@end


#endif