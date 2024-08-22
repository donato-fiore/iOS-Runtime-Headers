// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYSCRUBBERCLIPVIEW_H
#define _PXSTORYSCRUBBERCLIPVIEW_H

@class UIView;


#import "PXGFocusEffectView.h"
#import "_PXStoryScrubberClipViewConfiguration.h"

@interface _PXStoryScrubberClipView : PXGFocusEffectView

@property (retain, nonatomic) UIView *dimOverlayView; // ivar: _dimOverlayView
@property (retain, nonatomic) UIView *highlightOverlayView; // ivar: _highlightOverlayView
@property (copy, nonatomic) _PXStoryScrubberClipViewConfiguration *userData;


-(void)layoutSubviews;


@end


#endif