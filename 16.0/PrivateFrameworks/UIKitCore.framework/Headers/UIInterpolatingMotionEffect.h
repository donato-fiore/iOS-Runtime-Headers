// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERPOLATINGMOTIONEFFECT_H
#define UIINTERPOLATINGMOTIONEFFECT_H

@class NSString;


#import "UIMotionEffect.h"

@interface UIInterpolatingMotionEffect : UIMotionEffect {
    CGFloat _horizontalAccelerationBoostFactor;
    CGFloat _verticalAccelerationBoostFactor;
}


@property (readonly, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) id *maximumRelativeValue; // ivar: _maximumRelativeValue
@property (retain, nonatomic) id *minimumRelativeValue; // ivar: _minimumRelativeValue
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(CGFloat)_horizontalAccelerationBoostFactor;
-(CGFloat)_verticalAccelerationBoostFactor;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 type:(NSInteger)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset )arg0 ;
-(void)_setHorizontalAccelerationBoostFactor:(CGFloat)arg0 ;
-(void)_setVerticalAccelerationBoostFactor:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif