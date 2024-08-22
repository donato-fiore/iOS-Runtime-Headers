// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHMULTIDATALAYERANIMATIONINFO_H
#define TSCHMULTIDATALAYERANIMATIONINFO_H

@class NSArray, CAMediaTimingFunction;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying>



@property (nonatomic) BOOL aboveIntercept; // ivar: _aboveIntercept
@property (nonatomic) BOOL atIntercept; // ivar: _atIntercept
@property (nonatomic) CGRect chartBodyFrameInRepElementSpace; // ivar: _chartBodyFrameInRepElementSpace
@property (nonatomic) BOOL crossesIntercept; // ivar: _crossesIntercept
@property (nonatomic) BOOL currentAboveIntercept; // ivar: _currentAboveIntercept
@property (nonatomic) BOOL currentAtIntercept; // ivar: _currentAtIntercept
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL elementUndefined; // ivar: _elementUndefined
@property (nonatomic) BOOL horizontalChart; // ivar: _horizontalChart
@property (nonatomic) CGRect interceptRect; // ivar: _interceptRect
@property (copy, nonatomic) NSArray *keyTimes; // ivar: _keyTimes
@property (readonly, nonatomic) NSArray *layerAnimationValues; // ivar: _layerAnimationValues
@property (nonatomic) BOOL shouldAnimate; // ivar: _shouldAnimate
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


+(id)animationInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addAnimationForLayer:(id)arg0 key:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 ;
-(void)addAnimationForLayer:(id)arg0 key:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 needPresentationLayerValues:(BOOL)arg4 ;
-(void)addImageContentsAnimationForLayer:(id)arg0 fromImage:(id)arg1 toImage:(id)arg2 keyTimes:(id)arg3 ;


@end


#endif