// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLENAMEPICKERCONTACTCELL_H
#define PXPEOPLENAMEPICKERCONTACTCELL_H

@class NSArray, CNAvatarView, UIView, UILabel;


#import "PXPeopleNamePickerCell.h"

@interface PXPeopleNamePickerContactCell : PXPeopleNamePickerCell

@property (retain, nonatomic) NSArray *constraintsForHiddenSubtitle; // ivar: _constraintsForHiddenSubtitle
@property (retain, nonatomic) NSArray *constraintsForVisibleSubtitle; // ivar: _constraintsForVisibleSubtitle
@property (readonly, weak, nonatomic) CNAvatarView *contactAvatarView; // ivar: _contactAvatarView
@property (weak, nonatomic) UIView *labelsContainer; // ivar: _labelsContainer
@property (readonly, weak, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateConstraints;


@end


#endif