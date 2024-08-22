// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTANIMATIONHANDLER_H
#define SXCOMPONENTANIMATIONHANDLER_H


#import <Foundation/Foundation.h>

#import "SXComponentAnimation.h"
#import "SXComponentView.h"

@interface SXComponentAnimationHandler : NSObject

@property (readonly, nonatomic) SXComponentAnimation *animation; // ivar: _animation
@property (readonly, nonatomic) SXComponentView *component; // ivar: _component
@property (readonly, nonatomic) CGFloat factor; // ivar: _factor
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldFinishAtEndOfScrollView;
-(CGFloat)factorForVisibileBounds:(struct CGRect )arg0 andAbsoluteComponentRect:(struct CGRect )arg1 ;
-(CGFloat)screenHeightStartOffset;
-(id)initWithComponent:(id)arg0 withAnimation:(id)arg1 ;
-(void)finishAnimation;
-(void)prepareAnimation;
-(void)startAnimation;
-(void)updateAnimationWithFactor:(CGFloat)arg0 ;


@end


#endif