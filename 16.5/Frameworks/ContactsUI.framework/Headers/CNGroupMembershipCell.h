// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNGROUPMEMBERSHIPCELL_H
#define CNGROUPMEMBERSHIPCELL_H

@class UILabel;
@protocol CNPropertyCellDelegate;


#import "CNLabeledCell.h"

@interface CNGroupMembershipCell : CNLabeledCell

@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UILabel *parentGroupNameLabel; // ivar: _parentGroupNameLabel


+(BOOL)wantsHorizontalLayout;
-(BOOL)allowsCellSelection;
-(id)labelView;
-(void)setCardGroupItem:(id)arg0 ;
-(void)updateConstraints;


@end


#endif