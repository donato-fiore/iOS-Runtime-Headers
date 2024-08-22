// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAEXTERNALANIMATION_H
#define CAEXTERNALANIMATION_H



#import "CAPropertyAnimation.h"

@interface CAExternalAnimation : CAPropertyAnimation

@property (readonly) NSUInteger animId;
@property (copy) id *presentationBlock; // ivar: _presentationBlock


+(id)animationWithKeyPath:(id)arg0 ;
-(*void)_copyRenderAnimationForLayer:(id)arg0 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applyForTime:(CGFloat)arg0 presentationObject:(id)arg1 modelObject:(id)arg2 ;
-(void)dealloc;


@end


#endif