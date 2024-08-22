// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIACTIVITYUSERDEFAULTSACTIVITYCELL_H
#define _UIACTIVITYUSERDEFAULTSACTIVITYCELL_H

@class UITableViewCell, NSLayoutConstraint, UIView, UIImageView, UILabel;


#import "_UIUserDefaultsActivityProxy.h"

@interface _UIActivityUserDefaultsActivityCell : UITableViewCell {
    NSLayoutConstraint *_titleLabelHeightAnchor;
}


@property (retain, nonatomic) UIView *activityImageSlotView; // ivar: _activityImageSlotView
@property (retain, nonatomic) UIImageView *activityImageView; // ivar: _activityImageView
@property (retain, nonatomic) _UIUserDefaultsActivityProxy *activityProxy; // ivar: _activityProxy
@property (retain, nonatomic) UILabel *activityTitleLabel; // ivar: _activityTitleLabel
@property (retain, nonatomic) UIView *activityTitleView; // ivar: _activityTitleView
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeadingConstraint; // ivar: _imageViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint; // ivar: _imageViewWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint; // ivar: _labelLeadingConstraint
@property (nonatomic) NSUInteger sequence; // ivar: _sequence


+(id)bodyShortFont;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateImageDarkening;
-(void)prepareForReuse;


@end


#endif