// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXZOOMABLEPHOTOSALPHAANIMATOR_H
#define PXZOOMABLEPHOTOSALPHAANIMATOR_H

@class NSArray;


#import "PXObservable.h"
#import "PXDisplayLink.h"

@interface PXZoomablePhotosAlphaAnimator : PXObservable {
    ? _updateFlags;
    PXDisplayLink *_displayLink;
    CGFloat _lastTickTime;
    CGFloat _currentDirection;
    CGFloat _directionAnchorColumnIndex;
    CGFloat _columnIndexDelta;
    CGFloat _columnIndexVelocity;
    NSInteger _layerCount;
    PXAlphaLayer _layers;
    ? _transitionInfos;
    BOOL _isPerformingChangesWithoutAnimation;
}


@property (readonly, nonatomic) NSArray *allowedColumns; // ivar: _allowedColumns
@property (readonly, nonatomic) CGFloat autoFadeAmount; // ivar: _autoFadeAmount
@property (nonatomic) CGFloat autoFadeColumnIndex; // ivar: _autoFadeColumnIndex
@property (readonly, nonatomic) CGFloat columnIndex; // ivar: _columnIndex
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (readonly, nonatomic) BOOL isBeingMutated; // ivar: _isBeingMutated
@property (readonly, nonatomic) NSInteger maxColumnsForAspectFit; // ivar: _maxColumnsForAspectFit
@property (nonatomic) CGFloat presentationAutoFadeAmount; // ivar: _presentationAutoFadeAmount
@property (nonatomic) CGFloat presentationColumnIndex; // ivar: _presentationColumnIndex
@property (readonly, nonatomic) CGFloat targetColumnIndex; // ivar: _targetColumnIndex


-(id)description;
-(id)init;
-(struct PXAlphaTransitionInfo *)_transitionInfoForValue:(CGFloat)arg0 ;
-(void)_invalidatePresentationValue;
-(void)_resetAnimatedValues;
-(void)_tick:(id)arg0 ;
-(void)_updatePresentationValue;
-(void)_updateTransitionInfo;
-(void)dealloc;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;
-(void)performChangesWithAnimation:(BOOL)arg0 changeBlock:(id)arg1 ;


@end


#endif