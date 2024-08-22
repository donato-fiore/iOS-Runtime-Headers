// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUIANIMATIONBATCH_H
#define CCUIANIMATIONBATCH_H

@class NSMutableDictionary, NSUUID;

#import <Foundation/Foundation.h>


@interface CCUIAnimationBatch : NSObject {
    NSMutableDictionary *_animationsByParameters;
}


@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID


-(id)init;
-(void)addAnimation:(id)arg0 ;
-(void)iterateAnimationsOfType:(Class)arg0 withBlock:(id)arg1 ;
-(void)iterateAnimationsWithBlock:(id)arg0 ;


@end


#endif