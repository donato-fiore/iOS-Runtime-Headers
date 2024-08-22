// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKELASTICFUNCTION_H
#define CKELASTICFUNCTION_H


#import <Foundation/Foundation.h>


@interface CKElasticFunction : NSObject {
    CGFloat _elastic;
    CGFloat _oldForce;
    CGFloat _velocity;
}


@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) CGFloat input; // ivar: _currentValue
@property (readonly, nonatomic) CGFloat output;
@property (nonatomic) CGFloat tension; // ivar: _tension
@property (readonly, nonatomic) CGFloat velocity;


+(id)functionWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 initialValue:(CGFloat)arg2 ;
-(id)init;
-(void)step;


@end


#endif