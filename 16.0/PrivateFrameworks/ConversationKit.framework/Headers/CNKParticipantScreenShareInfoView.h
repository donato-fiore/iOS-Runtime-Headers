// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKPARTICIPANTSCREENSHAREINFOVIEW_H
#define CNKPARTICIPANTSCREENSHAREINFOVIEW_H

@class UIView, UIImage;



@interface CNKParticipantScreenShareInfoView : UIView {
    ? nameLabel;
    ? stackView;
    ? avatarImageView;
    ? backgroundBlurView;
    ? normalConstraints;
    ? fullScreenConstraints;
    ? isFullScreenMode;
}


@property (nonatomic, retain) UIImage *avatarImage; // ivar: avatarImage
@property (nonatomic) CGFloat customCornerRadius; // ivar: customCornerRadius
@property (nonatomic, readonly) CGFloat preferredHeight;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWith:(id)arg0 isFullScreenMode:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif