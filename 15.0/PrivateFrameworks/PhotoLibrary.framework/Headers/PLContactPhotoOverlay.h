// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCONTACTPHOTOOVERLAY_H
#define PLCONTACTPHOTOOVERLAY_H

@class UIView, UIImageView, CAShapeLayer, UILabel;



@interface PLContactPhotoOverlay : UIView

@property (readonly, nonatomic) UIImageView *_avatarPreview; // ivar: __avatarPreview
@property (retain, nonatomic) CAShapeLayer *circularLayer; // ivar: _circularLayer
@property (readonly, nonatomic) UIEdgeInsets overlayEdgeInsets;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )inscribingBounds;
-(void)_commonPLContactPhotoOverlayInitialization;
-(void)beginAvatarTrackingFromImageView:(id)arg0 ;
-(void)dealloc;
-(void)endAvatarTracking;
-(void)layoutSubviews;


@end


#endif