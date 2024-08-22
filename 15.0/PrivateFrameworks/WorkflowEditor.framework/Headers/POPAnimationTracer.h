// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPANIMATIONTRACER_H
#define POPANIMATIONTRACER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "POPAnimation.h"

@interface POPAnimationTracer : NSObject {
    POPAnimation *_animation;
    *_POPAnimationState _animationState;
    NSMutableArray *_events;
    BOOL _animationHasVelocity;
}


@property (readonly, nonatomic) NSArray *allEvents;
@property (nonatomic) BOOL shouldLogAndResetOnCompletion; // ivar: _shouldLogAndResetOnCompletion
@property (readonly, nonatomic) NSArray *writeEvents;


-(id)eventsWithType:(NSUInteger)arg0 ;
-(id)initWithAnimation:(id)arg0 ;
-(void)autoreversed;
-(void)didReachToValue:(id)arg0 ;
-(void)didStart;
-(void)didStop:(BOOL)arg0 ;
-(void)readPropertyValue:(id)arg0 ;
-(void)reset;
-(void)start;
-(void)stop;
-(void)updateBounciness:(float)arg0 ;
-(void)updateFriction:(float)arg0 ;
-(void)updateFromValue:(id)arg0 ;
-(void)updateMass:(float)arg0 ;
-(void)updateSpeed:(float)arg0 ;
-(void)updateTension:(float)arg0 ;
-(void)updateToValue:(id)arg0 ;
-(void)updateVelocity:(id)arg0 ;
-(void)writePropertyValue:(id)arg0 ;


@end


#endif