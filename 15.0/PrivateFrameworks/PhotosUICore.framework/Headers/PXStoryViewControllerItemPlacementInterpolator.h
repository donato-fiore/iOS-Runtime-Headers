// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYVIEWCONTROLLERITEMPLACEMENTINTERPOLATOR_H
#define PXSTORYVIEWCONTROLLERITEMPLACEMENTINTERPOLATOR_H

@class UIView, CAMediaTimingFunction;

#import <Foundation/Foundation.h>

#import "PXStoryItemPlacement.h"

@interface PXStoryViewControllerItemPlacementInterpolator : NSObject {
    PXStoryItemPlacement *_sourcePlacement;
    PXStoryItemPlacement *_targetPlacement;
    NSInteger _layering;
    UIView *_containerView;
    CGFloat _duration;
    CAMediaTimingFunction *_mainTimingFunction;
    CAMediaTimingFunction *_secondaryTimingFunction;
    CAMediaTimingFunction *_fadeTimingFunction;
    BOOL _hasValidGeometry;
    CGRect _sourceRect;
    CGRect _sourceRectVelocity;
    CGRect _targetRect;
    BOOL _alwaysHideSource;
    BOOL _alwaysHideTarget;
    BOOL _animatesDisplayedAssetContentsRect;
    BOOL _animatesCornerRadius;
    BOOL _animatesNormalizedDisplayedAssetRect;
    BOOL _animatesNormalizedTitleRect;
    BOOL _animatesNormalizedSubtitleRect;
}


@property (nonatomic) CGFloat time; // ivar: _time


-(id)adjustedPlacement:(id)arg0 ;
-(id)init;
-(id)initWithSourcePlacement:(id)arg0 targetPlacement:(id)arg1 layering:(NSInteger)arg2 containerView:(id)arg3 duration:(CGFloat)arg4 ;


@end


#endif