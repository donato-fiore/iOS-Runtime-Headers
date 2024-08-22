// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERANIMATIONATTRIBUTES_H
#define SBSWITCHERANIMATIONATTRIBUTES_H

@class SBFFluidBehaviorSettings;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBSwitcherAnimationAttributes : NSObject <NSCopying, NSMutableCopying>



@property (retain, nonatomic) SBFFluidBehaviorSettings *clippingSettings; // ivar: _clippingSettings
@property (nonatomic) NSInteger clippingUpdateMode; // ivar: _clippingUpdateMode
@property (retain, nonatomic) SBFFluidBehaviorSettings *cornerRadiusSettings; // ivar: _cornerRadiusSettings
@property (nonatomic) NSInteger cornerRadiusUpdateMode; // ivar: _cornerRadiusUpdateMode
@property (retain, nonatomic) SBFFluidBehaviorSettings *layoutSettings; // ivar: _layoutSettings
@property (nonatomic) NSInteger layoutUpdateMode; // ivar: _layoutUpdateMode
@property (retain, nonatomic) SBFFluidBehaviorSettings *meshSettings; // ivar: _meshSettings
@property (nonatomic) NSInteger meshUpdateMode; // ivar: _meshUpdateMode
@property (retain, nonatomic) SBFFluidBehaviorSettings *opacitySettings; // ivar: _opacitySettings
@property (nonatomic) NSInteger opacityUpdateMode; // ivar: _opacityUpdateMode
@property (retain, nonatomic) SBFFluidBehaviorSettings *positionSettings; // ivar: _positionSettings
@property (nonatomic) NSInteger positionUpdateMode; // ivar: _positionUpdateMode
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings; // ivar: _scaleSettings
@property (nonatomic) NSInteger scaleUpdateMode; // ivar: _scaleUpdateMode
@property (nonatomic) NSInteger titleAndIconOpacityUpdateMode; // ivar: _titleAndIconOpacityUpdateMode
@property (nonatomic) NSInteger updateMode; // ivar: _updateMode


-(id)_copyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif