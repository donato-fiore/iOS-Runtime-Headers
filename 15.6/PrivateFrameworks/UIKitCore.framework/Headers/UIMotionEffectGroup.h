// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMOTIONEFFECTGROUP_H
#define UIMOTIONEFFECTGROUP_H

@class NSArray;


#import "UIMotionEffect.h"

@interface UIMotionEffectGroup : UIMotionEffect

@property (copy, nonatomic) NSArray *motionEffects; // ivar: _motionEffects


-(id)_keyPathsAndRelativeValuesForPose:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif