// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPANIMATIONEVENT_H
#define POPANIMATIONEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface POPAnimationEvent : NSObject

@property (copy, nonatomic) NSString *animationDescription; // ivar: _animationDescription
@property (readonly, nonatomic) CGFloat time; // ivar: _time
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithType:(NSUInteger)arg0 time:(CGFloat)arg1 ;
-(void)_appendDescription:(id)arg0 ;


@end


#endif