// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERASTATUSOVERLAYVIEW_H
#define HUCAMERASTATUSOVERLAYVIEW_H

@class UIView, UIImageView, UIColor, NSString;


#import "HULegibilityLabel.h"

@interface HUCameraStatusOverlayView : UIView

@property (retain, nonatomic) UIImageView *alertBadge; // ivar: _alertBadge
@property (nonatomic) BOOL didUpdateConstraints; // ivar: _didUpdateConstraints
@property (nonatomic) BOOL isDisplayingForSingleCamera; // ivar: _isDisplayingForSingleCamera
@property (retain, nonatomic) UIColor *statusColor; // ivar: _statusColor
@property (retain, nonatomic) NSString *statusImageName; // ivar: _statusImageName
@property (retain, nonatomic) UIImageView *statusIndicatorImageView; // ivar: _statusIndicatorImageView
@property (retain, nonatomic) HULegibilityLabel *statusLabel; // ivar: _statusLabel
@property (copy, nonatomic) NSString *statusString; // ivar: _statusString


-(id)_chevronImage;
-(id)_exclamationImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setBadgeStatus:(NSUInteger)arg0 ;
-(void)updateStatusForPlaybackEngine:(id)arg0 ;
-(void)updateStatusLabelBounds;


@end


#endif