// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCOLLABORATORAVATARSVIEW_H
#define ICCOLLABORATORAVATARSVIEW_H

@class UIView, NSArray, UIStackView, CKShare;



@interface ICCollaboratorAvatarsView : UIView

@property (retain, nonatomic) NSArray *avatarContainerViews; // ivar: _avatarContainerViews
@property (retain, nonatomic) UIStackView *avatarStackView; // ivar: _avatarStackView
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) CGFloat dimension; // ivar: _dimension
@property (readonly, nonatomic) NSUInteger displayedAvatarCount;
@property (retain, nonatomic) NSArray *participants; // ivar: _participants
@property (nonatomic) BOOL reverseZIndexing; // ivar: _reverseZIndexing
@property (nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (weak, nonatomic) CKShare *share; // ivar: _share
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (nonatomic) BOOL useImageRenderer; // ivar: _useImageRenderer


-(id)avatarViewsWithShare:(id)arg0 ;
-(id)avatarsFromRendererWithParticipants:(id)arg0 ;
-(id)createAvatarContainerView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)setUpAvatarContainerViews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateShadows;
-(void)updateUI;


@end


#endif