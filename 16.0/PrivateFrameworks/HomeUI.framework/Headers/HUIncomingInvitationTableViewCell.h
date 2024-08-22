// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUINCOMINGINVITATIONTABLEVIEWCELL_H
#define HUINCOMINGINVITATIONTABLEVIEWCELL_H

@class UITableViewCell, CNAvatarView, UIButton, CNContact, HFContactController, NSString, NSArray, UILabel, HMIncomingHomeInvitation, UIButtonConfiguration, UIActivityIndicatorView;
@protocol HUInvitationHelperDelegate, HUIncomingInvitationTableViewCellDelegate;


#import "HUInvitationHelper.h"

@interface HUIncomingInvitationTableViewCell : UITableViewCell <HUInvitationHelperDelegate>



@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) HFContactController *contactsController; // ivar: _contactsController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUIncomingInvitationTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *dynamicConstraints; // ivar: _dynamicConstraints
@property (retain, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *homeNameLabel; // ivar: _homeNameLabel
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) HMIncomingHomeInvitation *invitation; // ivar: _invitation
@property (retain, nonatomic) HUInvitationHelper *invitationHelper; // ivar: _invitationHelper
@property (retain, nonatomic) UIButtonConfiguration *knownContactViewButtonConfiguration; // ivar: _knownContactViewButtonConfiguration
@property (retain, nonatomic) UIButton *reportJunkButton; // ivar: _reportJunkButton
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *viewButton; // ivar: _viewButton


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_hideInvitationSpinner;
-(void)_setupDynamicConstraints;
-(void)_showInvitationSpinner;
-(void)_updateInvitationViews;
-(void)closeButtonPressed:(id)arg0 ;
-(void)declineButtonPressed:(id)arg0 ;
-(void)invitationUtilityDidUpdateInformation:(id)arg0 ;
-(void)prepareForReuse;
-(void)reportJunkPressed:(id)arg0 ;
-(void)viewButtonPressed:(id)arg0 ;


@end


#endif