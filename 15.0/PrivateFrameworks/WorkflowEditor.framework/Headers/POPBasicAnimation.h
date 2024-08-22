// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPBASICANIMATION_H
#define POPBASICANIMATION_H

@class CAMediaTimingFunction;


#import "POPPropertyAnimation.h"

@interface POPBasicAnimation : POPPropertyAnimation

@property (nonatomic) CGFloat duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;


+(id)animation;
+(id)animationWithPropertyNamed:(id)arg0 ;
+(id)defaultAnimation;
+(id)easeInAnimation;
+(id)easeInEaseOutAnimation;
+(id)easeOutAnimation;
+(id)linearAnimation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_appendDescription:(id)arg0 debug:(BOOL)arg1 ;
-(void)_initState;


@end


#endif