// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSCONTACTSTABLEVIEWCELL_H
#define CKDETAILSCONTACTSTABLEVIEWCELL_H

@class CNContact, NSString, UILabel, UIButton, UIActivityIndicatorView;
@protocol CKDetailsContactsTableViewCellDelegate;


#import "CKDetailsCell.h"
#import "CKAvatarView.h"
#import "CKLabel.h"

@interface CKDetailsContactsTableViewCell : CKDetailsCell

@property (nonatomic) NSInteger callType; // ivar: _callType
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CKAvatarView *contactAvatarView; // ivar: _contactAvatarView
@property (weak, nonatomic) NSObject<CKDetailsContactsTableViewCellDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *entityName; // ivar: _entityName
@property (retain, nonatomic) UILabel *expanseStatusLabel; // ivar: _expanseStatusLabel
@property (retain, nonatomic) UIButton *facetimeVideoButton; // ivar: _facetimeVideoButton
@property (retain, nonatomic) UILabel *locationLabel; // ivar: _locationLabel
@property (copy, nonatomic) NSString *locationString; // ivar: _locationString
@property (retain, nonatomic) UIButton *messageButton; // ivar: _messageButton
@property (retain, nonatomic) CKLabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UIButton *phoneButton; // ivar: _phoneButton
@property (retain, nonatomic) UIButton *screenSharingButton; // ivar: _screenSharingButton
@property (nonatomic) BOOL showFaceTimeVideoButton; // ivar: _showFaceTimeVideoButton
@property (nonatomic) BOOL showInfoButton; // ivar: _showInfoButton
@property (nonatomic) BOOL showMessageButton; // ivar: _showMessageButton
@property (nonatomic) BOOL showPhoneButton; // ivar: _showPhoneButton
@property (nonatomic) BOOL showScreenSharingButton; // ivar: _showScreenSharingButton
@property (nonatomic) BOOL showsLocation; // ivar: _showsLocation
@property (nonatomic) BOOL showsTUConversationStatus; // ivar: _showsTUConversationStatus
@property (nonatomic) BOOL tuConversationStatusIsActive; // ivar: _tuConversationStatusIsActive
@property (retain, nonatomic) UIActivityIndicatorView *updatingParticipantSpinner; // ivar: _updatingParticipantSpinner


+(CGFloat)estimatedHeight;
+(CGFloat)marginWidth;
+(CGFloat)preferredHeight;
+(Class)cellClass;
+(id)reuseIdentifier;
-(id)_ckSymbolImageNamed:(id)arg0 preferredContentSizeCategory:(id)arg1 preferredFontTextStyle:(id)arg2 ;
-(id)_imageNamed:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureButtonLayer:(id)arg0 ;
-(void)_dismissUpdatingParticipantSpinner;
-(void)_formatExpanseStatusLabel;
-(void)_handleCommunicationAction:(id)arg0 ;
-(void)_hideAllButtons;
-(void)_showUpdatingParticipantSpinner;
-(void)_updateVisibleButtons;
-(void)configureWithViewModel:(id)arg0 ;
-(void)didHoverOverCell:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif