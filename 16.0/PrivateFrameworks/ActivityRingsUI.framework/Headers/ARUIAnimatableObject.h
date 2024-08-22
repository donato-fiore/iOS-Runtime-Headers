// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUIANIMATABLEOBJECT_H
#define ARUIANIMATABLEOBJECT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ARUIAnimatableObject : NSObject {
    NSMutableDictionary *_animatableProperties;
}




-(BOOL)areAnimationsInProgress;
-(id)_animatablePropertyForType:(NSUInteger)arg0 ;
-(id)_newAnimatablePropertyForType:(NSUInteger)arg0 ;
-(id)endingValueForPropertyType:(NSUInteger)arg0 ;
-(void)addAnimation:(id)arg0 forPropertyType:(NSUInteger)arg1 ;
-(void)removeAllAnimationsForPropertyType:(NSUInteger)arg0 ;
-(void)setValue:(id)arg0 forPropertyType:(NSUInteger)arg1 ;
-(void)update:(CGFloat)arg0 ;


@end


#endif