// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCLIPPEDZOOMVIEW_H
#define SBCLIPPEDZOOMVIEW_H

@class UIView;


#import "SBZoomView.h"
#import "SBFullscreenZoomView.h"

@interface SBClippedZoomView : SBZoomView {
    SBFullscreenZoomView *_fullscreenZoomViewToClip;
    UIView *_clippingView;
}




-(id)initWithClippingFrame:(struct CGRect )arg0 fullscreenZoomView:(id)arg1 ;


@end


#endif