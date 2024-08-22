// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFNOLOCATIONVIEW_H
#define FMFNOLOCATIONVIEW_H

@class UIView, NSLayoutConstraint, UILabel, UIImage, UIImageView;
@protocol FMFNoLocationViewDelegate;



@interface FMFNoLocationView : UIView

@property (nonatomic) BOOL blockLabelUpdates; // ivar: _blockLabelUpdates
@property (retain, nonatomic) UIView *blur; // ivar: _blur
@property (retain, nonatomic) NSLayoutConstraint *bottomInsetConstraint; // ivar: _bottomInsetConstraint
@property (weak, nonatomic) NSObject<FMFNoLocationViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *detailsLabel; // ivar: _detailsLabel
@property (retain, nonatomic) UIView *insetView; // ivar: _insetView
@property (retain, nonatomic) UIImage *offlineProfileImage; // ivar: _offlineProfileImage
@property (retain, nonatomic) UIImageView *offlineProfileImageView; // ivar: _offlineProfileImageView
@property (retain, nonatomic) UIImageView *personImageView; // ivar: _personImageView
@property (retain, nonatomic) NSLayoutConstraint *topInsetConstraint; // ivar: _topInsetConstraint


-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addLayoutConstraints;
-(void)dealloc;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)updateConstriantsForInsets;
-(void)updateLabel;
-(void)updateLabelNotification:(id)arg0 ;
-(void)updatePersonImageViewImage;


@end


#endif