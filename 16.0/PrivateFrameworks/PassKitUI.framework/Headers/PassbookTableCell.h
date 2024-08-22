// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PASSBOOKTABLECELL_H
#define PASSBOOKTABLECELL_H

@class PSTableCell;



@interface PassbookTableCell : PSTableCell



-(BOOL)canReload;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_updateActivityIndicatorForSpecifier:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif