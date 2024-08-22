// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASTATECONTROLLERLAYER_H
#define CASTATECONTROLLERLAYER_H

@class NSMutableArray, NSTimer;

#import <Foundation/Foundation.h>

#import "CAState.h"
#import "CALayer.h"
#import "CAStateControllerUndo.h"

@interface CAStateControllerLayer : NSObject {
    NSMutableArray *_transitions;
    NSTimer *_nextTimer;
    CAState *_nextState;
    float _nextSpeed;
}


@property (retain, nonatomic) CAState *currentState; // ivar: _currentState
@property (readonly) CALayer *layer; // ivar: _layer
@property (readonly) CAStateControllerUndo *undoStack; // ivar: _undoStack


-(id)initWithLayer:(id)arg0 ;
-(void)addTransition:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeTransition:(id)arg0 ;


@end


#endif