// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSHAREDALBUMINVITATIONVIEW_H
#define PXSHAREDALBUMINVITATIONVIEW_H

@class UIView, UIButton, UILabel, UIImageView, NSString;
@protocol PXSettingsKeyObserver, PXSharedAlbumInvitationViewDelegate, PLCloudSharedAlbumProtocol;


#import "PXFeedInvitationSectionInfo.h"
#import "PXRoundedCornerOverlayView.h"

@interface PXSharedAlbumInvitationView : UIView <PXSettingsKeyObserver>



@property (retain, nonatomic) UIButton *acceptButton; // ivar: _acceptButton
@property (retain, nonatomic) UILabel *albumTitleLabel; // ivar: _albumTitleLabel
@property (nonatomic) NSUInteger avatarImageTag; // ivar: _avatarImageTag
@property (retain, nonatomic) UIImageView *avatarView; // ivar: _avatarView
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIButton *declineButton; // ivar: _declineButton
@property (weak, nonatomic) NSObject<PXSharedAlbumInvitationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo; // ivar: _invitationSectionInfo
@property (retain, nonatomic) UILabel *reportJunkLabel; // ivar: _reportJunkLabel
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // ivar: _roundedCornerOverlayView
@property (retain, nonatomic) NSObject<PLCloudSharedAlbumProtocol> *sharedAlbum; // ivar: _sharedAlbum
@property (retain, nonatomic) UILabel *subscriberInfoLabel; // ivar: _subscriberInfoLabel
@property (readonly) Class superclass;
@property (nonatomic) BOOL useInPopover; // ivar: _useInPopover


+(void)preloadResources;
-(id)_actionButtonWithTitle:(id)arg0 action:(SEL)arg1 buttonColor:(id)arg2 titleColor:(id)arg3 ;
-(id)_parentViewBackgroundColor;
-(id)_roundedCornerViewBackgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_acceptButtonTapped:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_declineButtonTapped:(id)arg0 ;
-(void)_enableUserInteractions:(BOOL)arg0 ;
-(void)_handlePersonImage:(id)arg0 imageTag:(NSUInteger)arg1 ;
-(void)_reportJunk;
-(void)_reportJunkLabelTapped:(id)arg0 ;
-(void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateAlbumTitleLabel;
-(void)_updateAvatarImage:(NSUInteger)arg0 ;
-(void)_updateColors;
-(void)_updateInfoLabel;
-(void)_updateReportJunkLabel;
-(void)_updateRoundedCornerOverlayView;
-(void)_updateSubscriberInfoLabel;
-(void)_updateUI;
-(void)dealloc;
-(void)layoutSubviews;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif