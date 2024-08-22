// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFRSSIQUEUE_H
#define SFRSSIQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SFRSSIQueue : NSObject {
    NSMutableArray *_rssiValues;
    NSMutableArray *_tickValues;
}


@property (readonly, nonatomic) CGFloat velocity;
@property (readonly, nonatomic) CGFloat velocitySmoothed;


-(CGFloat)velocityFromA:(NSUInteger)arg0 toB:(NSUInteger)arg1 ;
-(void)addSample:(CGFloat)arg0 atTicks:(NSUInteger)arg1 ;


@end


#endif