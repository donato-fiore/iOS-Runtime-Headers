// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIBADGE_H
#define AAUIBADGE_H

@class ARUIAnimatableObject;



@interface AAUIBadge : ARUIAnimatableObject

@property (readonly, nonatomic) BOOL locksRotationY; // ivar: _locksRotationY
@property (nonatomic) CGFloat maxRotationY; // ivar: _maxRotationY
@property (nonatomic) CGPoint position; // ivar: _position
@property (nonatomic) CGFloat rotationX; // ivar: _rotationX
@property (nonatomic) CGFloat rotationY; // ivar: _rotationY


-(id)_newAnimatablePropertyForType:(NSUInteger)arg0 ;
-(id)init;
-(void)addAnimation:(id)arg0 forBadgePropertyType:(NSUInteger)arg1 ;
-(void)removeAllAnimationsForBadgePropertyType:(NSUInteger)arg0 ;


@end


#endif