// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTUIPROXIMITYDATASHARINGOPTINVIEW_H
#define VTUIPROXIMITYDATASHARINGOPTINVIEW_H

@class UILabel, UIButton;


#import "VTUIProximityView.h"
#import "VTUIProximityContainerView.h"
#import "VTUIButton.h"

@interface VTUIProximityDataSharingOptInView : VTUIProximityView {
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (retain, nonatomic) UIButton *aboutLink; // ivar: _aboutLink
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (retain, nonatomic) VTUIButton *notNowButton; // ivar: _notNowButton
@property (retain, nonatomic) VTUIButton *shareButton; // ivar: _shareButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupContent;
-(void)_setupPortraitConstraints;


@end


#endif