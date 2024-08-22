// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERACTIONPROGRESS_H
#define UIINTERACTIONPROGRESS_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface UIInteractionProgress : NSObject {
    NSPointerArray *_observers;
    CGFloat _previousPercentComplete;
    CGFloat _previousUpdateTime;
    CGFloat _mostRecentUpdateTime;
    NSInteger _atLeastTwoUpdates;
}


@property (readonly, nonatomic) CGFloat percentComplete; // ivar: _percentComplete
@property (readonly, nonatomic) CGFloat velocity;


-(NSInteger)numberOfObservers;
-(NSUInteger)_indexOfObserver:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addProgressObserver:(id)arg0 ;
-(void)endInteraction:(BOOL)arg0 ;
-(void)endInteraction:(BOOL)arg0 finalVelocity:(CGFloat)arg1 ;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif