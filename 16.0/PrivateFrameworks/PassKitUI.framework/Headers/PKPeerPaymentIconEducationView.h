// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTICONEDUCATIONVIEW_H
#define PKPEERPAYMENTICONEDUCATIONVIEW_H

@class UIView;


#import "PKPaymentSetupInitialCardEducationIconsView.h"
#import "PKWatchDeviceImageOverlayView.h"

@interface PKPeerPaymentIconEducationView : UIView {
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;
    PKWatchDeviceImageOverlayView *_watchDeviceImageView;
}


@property (nonatomic) BOOL showIconsView; // ivar: _showIconsView
@property (nonatomic) BOOL showWatchView; // ivar: _showWatchView


-(id)_imageForWatchView;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif