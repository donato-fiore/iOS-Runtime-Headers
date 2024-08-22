// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBTRANSITIONEFFECT_H
#define RBTRANSITIONEFFECT_H


#import <Foundation/Foundation.h>


@interface RBTransitionEffect : NSObject {
    Effect _effect;
    ? _args;
}


@property (nonatomic) float beginTime;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int events;
@property (nonatomic) unsigned int type;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)argumentValueAtIndex:(NSUInteger)arg0 ;
-(void)setArgumentValue:(float)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif