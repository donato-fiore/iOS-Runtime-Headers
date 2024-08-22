// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFSPRINGANIMATIONDELEGATE_H
#define MFSPRINGANIMATIONDELEGATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFSpringAnimationDelegate : NSObject

@property (readonly, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks


-(id)init;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif