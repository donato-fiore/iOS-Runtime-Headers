// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAGETITLEANDADDRESSTABLEVIEWCELL_H
#define PAGETITLEANDADDRESSTABLEVIEWCELL_H



#import "CompletionListTableViewCell.h"

@interface PageTitleAndAddressTableViewCell : CompletionListTableViewCell



+(CGFloat)defaultHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateFont;
-(void)_updateNumberOfLines;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif