// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLVISUALEFFECT_H
#define HUQUICKCONTROLVISUALEFFECT_H

@class UIVisualEffect;



@interface HUQuickControlVisualEffect : UIVisualEffect

@property (readonly, nonatomic) NSUInteger effectType; // ivar: _effectType


+(id)effectWithType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)effectConfig;


@end


#endif