// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIANIMATABLEPROPERTY_H
#define ARUIANIMATABLEPROPERTY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ARUIAnimatableProperty : NSObject {
    id *_getter;
    id *_setter;
    NSMutableArray *_animations;
}


@property (retain, nonatomic) id *currentValue; // ivar: _currentValue
@property (retain, nonatomic) id *endValue; // ivar: _endValue
@property (retain, nonatomic) id *startValue; // ivar: _startValue


-(BOOL)isFinishedAnimating;
// -(id)initWithGetter:(id)arg0 setter:(unk)arg1  ;
-(void)addPropertyAnimation:(id)arg0 ;
-(void)removeAllPropertyAnimations;
-(void)setValueImmediate:(id)arg0 ;
-(void)update:(CGFloat)arg0 ;


@end


#endif