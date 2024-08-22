// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGEVIEWOVERLAYVIEW_H
#define _UIIMAGEVIEWOVERLAYVIEW_H

@protocol _UIImageViewOverlayViewDelegate;


#import "UIView.h"

@interface _UIImageViewOverlayView : UIView

@property (weak, nonatomic) NSObject<_UIImageViewOverlayViewDelegate> *overlayViewDelegate; // ivar: _overlayViewDelegate


-(void)setClipsToBounds:(BOOL)arg0 ;


@end


#endif