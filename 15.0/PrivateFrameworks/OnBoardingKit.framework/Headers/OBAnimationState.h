// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBANIMATIONSTATE_H
#define OBANIMATIONSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OBAnimationState : NSObject

@property (retain, nonatomic) NSString *darkName; // ivar: _darkName
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration
@property (nonatomic) CGFloat transitionSpeed; // ivar: _transitionSpeed


-(id)initWithStateName:(id)arg0 darkStateName:(id)arg1 transitionDuration:(CGFloat)arg2 transitionSpeed:(CGFloat)arg3 ;
-(id)initWithStateName:(id)arg0 transitionDuration:(CGFloat)arg1 transitionSpeed:(CGFloat)arg2 ;
-(id)stateForLayer:(id)arg0 ;


@end


#endif