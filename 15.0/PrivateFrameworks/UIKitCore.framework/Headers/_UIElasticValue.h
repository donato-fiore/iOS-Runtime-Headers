// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIELASTICVALUE_H
#define _UIELASTICVALUE_H


#import <Foundation/Foundation.h>


@interface _UIElasticValue : NSObject

@property (nonatomic) CGFloat currentValue; // ivar: _currentValue
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) CGFloat momentum; // ivar: _momentum
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (readonly, nonatomic, getter=isSteady) BOOL steady;
@property (nonatomic) CGFloat targetValue; // ivar: _targetValue


-(id)description;
-(id)init;
-(id)initWithValue:(CGFloat)arg0 ;
-(void)update:(CGFloat)arg0 ;
-(void)updateFromDisplayLink:(id)arg0 ;


@end


#endif