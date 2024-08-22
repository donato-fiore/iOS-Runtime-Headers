// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIINVITEESVIEWINVITEESCELL_H
#define EKUIINVITEESVIEWINVITEESCELL_H

@class UITableViewCell, UILabel, NSArray, UIActivityIndicatorView, UIImageView, UIView;


#import "EKUILabeledAvatarView.h"

@interface EKUIInviteesViewInviteesCell : UITableViewCell

@property (retain, nonatomic) UILabel *commentLabel; // ivar: _commentLabel
@property (retain, nonatomic) EKUILabeledAvatarView *contactAvatarView; // ivar: _contactAvatarView
@property BOOL hideStatus; // ivar: _hideStatus
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *optionalInviteeLabel; // ivar: _optionalInviteeLabel
@property (retain, nonatomic) NSArray *persistentConstraints; // ivar: _persistentConstraints
@property (retain, nonatomic) NSArray *removableConstraints; // ivar: _removableConstraints
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) UIImageView *statusImageView; // ivar: _statusImageView
@property (retain, nonatomic) UIView *textContainerView; // ivar: _textContainerView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateCommonElements:(id)arg0 statusImage:(id)arg1 conflict:(BOOL)arg2 ;
-(void)updateConstraints;
-(void)updateWithParticipantForSorting:(id)arg0 ;
-(void)updateWithParticipantForSorting:(id)arg0 availabilityType:(NSInteger)arg1 showSpinner:(BOOL)arg2 animated:(BOOL)arg3 ;


@end


#endif