// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINVITATIONVIEWCONTROLLER_H
#define ICINVITATIONVIEWCONTROLLER_H

@class ICNAViewController, SWAttributionView, ICTextBackgroundView, SWHighlight, ICInvitation, UIImageView, UIButton, UILabel;



@interface ICInvitationViewController : ICNAViewController

@property (weak, nonatomic) SWAttributionView *attributionView; // ivar: _attributionView
@property (nonatomic) UIEdgeInsets backgroundInsets; // ivar: _backgroundInsets
@property (weak, nonatomic) ICTextBackgroundView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) id *didTapViewButton; // ivar: _didTapViewButton
@property (retain, nonatomic) SWHighlight *highlight; // ivar: _highlight
@property (retain, nonatomic) ICInvitation *invitation; // ivar: _invitation
@property (weak, nonatomic) UIImageView *invitationImageView; // ivar: _invitationImageView
@property (weak, nonatomic) UIButton *largeViewButton; // ivar: _largeViewButton
@property (nonatomic) BOOL showsActivityIndicator; // ivar: _showsActivityIndicator
@property (weak, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (weak, nonatomic) UIButton *viewButton; // ivar: _viewButton


-(id)init;
-(void)accessibilityDarkerSystemColorsStatusDidChange:(id)arg0 ;
-(void)dealloc;
-(void)viewButtonDidTap:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif