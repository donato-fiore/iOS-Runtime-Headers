// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICACTIVITYSTREAMDOCKVIEW_H
#define ICACTIVITYSTREAMDOCKVIEW_H

@class UIView, NSLayoutConstraint, ICCloudSyncingObject, ICActivityStreamSelection;
@protocol ICActivityStreamCoordinating;



@interface ICActivityStreamDockView : UIView {
    ? $__lazy_storage_$_topBorderView;
    ? $__lazy_storage_$_backgroundEffectView;
    ? $__lazy_storage_$_colorBar;
    ? $__lazy_storage_$_avatarView;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_subtitleLabel;
    ? $__lazy_storage_$_showAllActivityButton;
    ? $__lazy_storage_$_closeButton;
    ? $__lazy_storage_$_horizontalStack;
    ? $__lazy_storage_$_verticalStack;
    ? $__lazy_storage_$_baselineLayoutGuide;
    ? colorBarHidden;
}


@property (nonatomic, readonly) CGFloat buttonHeight; // ivar: buttonHeight
@property (nonatomic, readonly) CGFloat closeButtonHeight; // ivar: closeButtonHeight
@property (nonatomic, readonly) CGFloat closeButtonImageHeight;
@property (nonatomic, readonly) NSObject<ICActivityStreamCoordinating> *coordinator; // ivar: coordinator
@property (nonatomic, retain) NSLayoutConstraint *horizontalStackLeadingConstraint; // ivar: horizontalStackLeadingConstraint
@property (nonatomic, readonly) BOOL isDisplayedInCard; // ivar: isDisplayedInCard
@property (nonatomic, readonly) CGFloat margin; // ivar: margin
@property (nonatomic, retain) ICCloudSyncingObject *object; // ivar: object
@property (nonatomic, retain) ICActivityStreamSelection *selection; // ivar: selection


-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinator:(id)arg0 isDisplayedInCard:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)update;


@end


#endif