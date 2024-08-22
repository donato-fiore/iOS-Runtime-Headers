// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTDOWNTIMEWHITELISTCELL_H
#define CNCONTACTDOWNTIMEWHITELISTCELL_H



#import "CNContactCell.h"

@interface CNContactDowntimeWhitelistCell : CNContactCell



+(BOOL)shouldIndentWhileEditing;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif