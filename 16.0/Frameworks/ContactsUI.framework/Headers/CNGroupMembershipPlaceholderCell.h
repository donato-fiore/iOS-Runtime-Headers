// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNGROUPMEMBERSHIPPLACEHOLDERCELL_H
#define CNGROUPMEMBERSHIPPLACEHOLDERCELL_H

@protocol CNPropertyCellDelegate;


#import "CNPropertyPlaceholderCell.h"

@interface CNGroupMembershipPlaceholderCell : CNPropertyPlaceholderCell

@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate


-(void)performDefaultAction;


@end


#endif