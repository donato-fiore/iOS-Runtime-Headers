// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAPPGRABBERVIEW_H
#define CKAPPGRABBERVIEW_H

@class UIView, UIImageView, UILabel, _UIGrabber, NSString, UIButton;
@protocol CKAppGrabberViewDelegate;



@interface CKAppGrabberView : UIView {
    UIImageView *_iconImageView;
    UIImageView *_iconOutlineView;
    UILabel *_pluginTitleLabel;
    UIView *_headerView;
    UIView *_grayLine;
    _UIGrabber *_chevronView;
    NSString *_appIdentifier;
}


@property (readonly, nonatomic) CGFloat chevronMaxYOffset;
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (weak, nonatomic) NSObject<CKAppGrabberViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL roundsTopCorners; // ivar: _roundsTopCorners
@property (nonatomic) BOOL showsAppTitle; // ivar: _showsAppTitle
@property (nonatomic) BOOL showsGrabberPill;
@property (readonly, nonatomic) CGFloat visualOriginYOffset;


+(CGFloat)compactRoundedCornerRadius;
+(CGFloat)roundedCornerRadius;
-(CGFloat)chevronMaxYInView:(id)arg0 ;
-(CGFloat)visualOriginYInView:(id)arg0 ;
-(id)headerView;
-(id)iconImageView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)closeButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateAppTitle:(id)arg0 icon:(id)arg1 appIdentifier:(id)arg2 ;
-(void)updateHeaderFrame:(BOOL)arg0 ;
-(void)updateIconImageView:(id)arg0 ;


@end


#endif