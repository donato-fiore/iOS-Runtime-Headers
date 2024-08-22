// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITILTMOTIONEFFECT_H
#define _UITILTMOTIONEFFECT_H



#import "UIMotionEffect.h"

@interface _UITiltMotionEffect : UIMotionEffect

@property (nonatomic) CGFloat maximumHorizontalTiltAngle; // ivar: _maximumHorizontalTiltAngle
@property (nonatomic) CGFloat maximumVerticalTiltAngle; // ivar: _maximumVerticalTiltAngle
@property (nonatomic) CGFloat rotatingSphereRadius; // ivar: _rotatingSphereRadius


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif