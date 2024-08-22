// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTFULLSCREENTRANSITIONTRACKER_H
#define MTFULLSCREENTRANSITIONTRACKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MTFullscreenTransitionTracker : NSObject

@property (nonatomic) BOOL isTransitioning; // ivar: _isTransitioning
@property (retain, nonatomic) NSMutableArray *pendingBlocks; // ivar: _pendingBlocks


+(void)performAfterTransitioning:(id)arg0 ;
-(id)init;
-(void)didFinishTransition:(id)arg0 ;
-(void)willBeginTransition:(id)arg0 ;


@end


#endif