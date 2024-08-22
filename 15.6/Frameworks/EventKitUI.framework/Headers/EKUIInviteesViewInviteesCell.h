// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIINVITEESVIEWINVITEESCELL_H
#define EKUIINVITEESVIEWINVITEESCELL_H

@class UITableViewCell, UILabel, NSString, NSArray, UIActivityIndicatorView, UIImageView, UIView;
@protocol EKUILabeledAvatarViewDelegate;


#import "EKUILabeledAvatarView.h"

@interface EKUIInviteesViewInviteesCell : UITableViewCell <EKUILabeledAvatarViewDelegate>



@property (retain, nonatomic) UILabel *commentLabel; // ivar: _commentLabel
@property (retain, nonatomic) EKUILabeledAvatarView *contactAvatarView; // ivar: _contactAvatarView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL hideStatus; // ivar: _hideStatus
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *optionalInviteeLabel; // ivar: _optionalInviteeLabel
@property (retain, nonatomic) NSArray *persistentConstraints; // ivar: _persistentConstraints
@property (retain, nonatomic) NSArray *removableConstraints; // ivar: _removableConstraints
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) UIImageView *statusImageView; // ivar: _statusImageView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *textContainerView; // ivar: _textContainerView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)avatarViewDidTapped:(id)arg0 ;
-(void)updateCommonElements:(id)arg0 statusImage:(id)arg1 ;
-(void)updateConstraints;
-(void)updateWithParticipantForSorting:(id)arg0 ;
-(void)updateWithParticipantForSorting:(id)arg0 availabilityType:(NSInteger)arg1 showSpinner:(BOOL)arg2 animated:(BOOL)arg3 ;


@end


#endif