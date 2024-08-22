// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAANIMATIONGROUP_H
#define CAANIMATIONGROUP_H

@class NSArray;


#import "CAAnimation.h"

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray *animations;


-(*void)_copyRenderAnimationForLayer:(id)arg0 ;
-(unsigned int)_propertyFlagsForLayer:(id)arg0 ;
-(void)CA_prepareRenderValue;
-(void)applyForTime:(CGFloat)arg0 presentationObject:(id)arg1 modelObject:(id)arg2 ;
-(void)setDefaultDuration:(CGFloat)arg0 ;


@end


#endif