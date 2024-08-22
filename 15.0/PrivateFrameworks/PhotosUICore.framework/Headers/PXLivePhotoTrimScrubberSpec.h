// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXLIVEPHOTOTRIMSCRUBBERSPEC_H
#define PXLIVEPHOTOTRIMSCRUBBERSPEC_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface PXLivePhotoTrimScrubberSpec : NSObject

@property (retain, nonatomic) UIColor *disabledOverlayColor; // ivar: _disabledOverlayColor
@property (nonatomic) BOOL fallbackToKeyTimeTracking; // ivar: _fallbackToKeyTimeTracking
@property (nonatomic) BOOL fallbackToPlayheadTracking; // ivar: _fallbackToPlayheadTracking
@property (retain, nonatomic) UIColor *filmstripBorderColor; // ivar: _filmstripBorderColor
@property (nonatomic) CGFloat filmstripCornerRadius; // ivar: _filmstripCornerRadius
@property (nonatomic) UIEdgeInsets filmstripViewInsets; // ivar: _filmstripViewInsets
@property (nonatomic) CGFloat handleAnchorX; // ivar: _handleAnchorX
@property (nonatomic) CGFloat handleHeight; // ivar: _handleHeight
@property (nonatomic) CGFloat handleTouchDistance; // ivar: _handleTouchDistance
@property (nonatomic) CGFloat handleWidth; // ivar: _handleWidth
@property (nonatomic) CGFloat loupeInnerCornerRadius; // ivar: _loupeInnerCornerRadius
@property (nonatomic) CGFloat loupeOuterCornerRadius; // ivar: _loupeOuterCornerRadius
@property (nonatomic) CGFloat loupeVerticalInset; // ivar: _loupeVerticalInset
@property (nonatomic) CGFloat playheadWidth; // ivar: _playheadWidth
@property (nonatomic) CGFloat scrubberHeight; // ivar: _scrubberHeight
@property (nonatomic) BOOL useMiniScrubberHeight; // ivar: _useMiniScrubberHeight


-(id)init;
-(void)_updateScrubberHeight;


@end


#endif