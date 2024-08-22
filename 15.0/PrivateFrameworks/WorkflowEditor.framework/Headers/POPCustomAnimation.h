// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPCUSTOMANIMATION_H
#define POPCUSTOMANIMATION_H



#import "POPAnimation.h"

@interface POPCustomAnimation : POPAnimation

@property (copy, nonatomic) id *animate; // ivar: _animate
@property (readonly, nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (readonly, nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime


+(id)animationWithBlock:(id)arg0 ;
-(BOOL)_advance:(id)arg0 currentTime:(CGFloat)arg1 elapsedTime:(CGFloat)arg2 ;
-(CGFloat)beginTime;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_appendDescription:(id)arg0 debug:(BOOL)arg1 ;


@end


#endif