// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUINCOMINGINVITATIONTABLEVIEWCELL_H
#define HUINCOMINGINVITATIONTABLEVIEWCELL_H

@class UITableViewCell, UIButton, CNAvatarView, CNContact, UIView, UILabel, HMIncomingHomeInvitation, UIActivityIndicatorView;
@protocol HUIncomingInvitationTableViewCellDelegate;



@interface HUIncomingInvitationTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *acceptButton; // ivar: _acceptButton
@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) UIButton *declineButton; // ivar: _declineButton
@property (weak, nonatomic) NSObject<HUIncomingInvitationTableViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *homeNameLabel; // ivar: _homeNameLabel
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) HMIncomingHomeInvitation *invitation; // ivar: _invitation
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


+(id)_formatDate:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_hideInvitationSpinner;
-(void)_showInvitationSpinner;
-(void)acceptButtonPressed:(id)arg0 ;
-(void)declineButtonPressed:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif