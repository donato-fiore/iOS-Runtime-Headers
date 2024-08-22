// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACUIACCOUNTCOLLECTIONLINKCELL_H
#define ACUIACCOUNTCOLLECTIONLINKCELL_H

@class PSTableCell;



@interface ACUIAccountCollectionLinkCell : PSTableCell



+(id)specifierWithTitle:(id)arg0 accounts:(id)arg1 ;
-(id)_detailTextForAccountSpecifiers:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif