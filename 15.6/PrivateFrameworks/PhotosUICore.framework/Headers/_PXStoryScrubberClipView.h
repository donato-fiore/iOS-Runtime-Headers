// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYSCRUBBERCLIPVIEW_H
#define _PXSTORYSCRUBBERCLIPVIEW_H

@class UIView;


#import "PXGFocusEffectView.h"

@interface _PXStoryScrubberClipView : PXGFocusEffectView

@property (retain, nonatomic) UIView *focusedOverlayView; // ivar: _focusedOverlayView
@property (retain, nonatomic) UIView *unfocusedOverlayView; // ivar: _unfocusedOverlayView


-(void)layoutSubviews;


@end


#endif