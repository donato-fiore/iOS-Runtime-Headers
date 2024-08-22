// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCOMPOSERECIPIENTADDRECIPIENTTABLEVIEWCELL_H
#define PXCOMPOSERECIPIENTADDRECIPIENTTABLEVIEWCELL_H

@class UITableViewCell;


#import "PXComposeRecipientAddButton.h"

@interface PXComposeRecipientAddRecipientTableViewCell : UITableViewCell

@property (readonly, nonatomic) PXComposeRecipientAddButton *addRecipientButton; // ivar: _addRecipientButton


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif