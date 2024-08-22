// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUANIMATIONQUEUE_H
#define NUANIMATIONQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface NUAnimationQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *queue; // ivar: _queue
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running


-(id)init;
-(void)addAnimation:(id)arg0 ;
-(void)cancel;
-(void)runUntilEmpty;


@end


#endif