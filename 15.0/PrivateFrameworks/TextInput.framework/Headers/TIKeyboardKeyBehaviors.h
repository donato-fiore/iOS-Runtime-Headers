// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDKEYBEHAVIORS_H
#define TIKEYBOARDKEYBEHAVIORS_H


#import <Foundation/Foundation.h>


@interface TIKeyboardKeyBehaviors : NSObject

@property (nonatomic) NSUInteger returnKeyBehavior; // ivar: _returnKeyBehavior
@property (nonatomic) NSUInteger spaceKeyBehavior; // ivar: _spaceKeyBehavior
@property (nonatomic) NSUInteger tabKeyBehavior; // ivar: _tabKeyBehavior


+(id)behaviorForSpaceKey:(NSUInteger)arg0 forReturnKey:(NSUInteger)arg1 ;
+(id)behaviorForSpaceKey:(NSUInteger)arg0 forReturnKey:(NSUInteger)arg1 forTabKey:(NSUInteger)arg2 ;
-(id)initWithSpaceKeyBehavior:(NSUInteger)arg0 returnKeyBehavior:(NSUInteger)arg1 tabKeyBehavior:(NSUInteger)arg2 ;


@end


#endif