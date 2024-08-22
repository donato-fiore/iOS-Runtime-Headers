// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOGINAPPCONTAINEROVERLAYWRAPPERVIEW_H
#define SBLOGINAPPCONTAINEROVERLAYWRAPPERVIEW_H

@class UIView, _UIBackdropView;


#import "SBLockOverlayView.h"

@interface SBLoginAppContainerOverlayWrapperView : UIView {
    _UIBackdropView *_backdropView;
}


@property (readonly, nonatomic) SBLockOverlayView *overlayView; // ivar: _overlayView


-(id)initWithFrame:(struct CGRect )arg0 overlayView:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif