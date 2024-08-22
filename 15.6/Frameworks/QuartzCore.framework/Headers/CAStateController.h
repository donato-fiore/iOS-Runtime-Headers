// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CASTATECONTROLLER_H
#define CASTATECONTROLLER_H

@protocol CAStateControllerDelegate;

#import <Foundation/Foundation.h>

#import "CALayer.h"

@interface CAStateController : NSObject {
    *_CAStateControllerData _data;
}


@property (weak) NSObject<CAStateControllerDelegate> *delegate;
@property (readonly) CALayer *layer;


-(id)initWithLayer:(id)arg0 ;
-(id)removeAllStateChanges;
-(id)stateOfLayer:(id)arg0 ;
-(void)_addAnimation:(id)arg0 forKey:(id)arg1 target:(id)arg2 undo:(id)arg3 ;
-(void)_applyTransition:(id)arg0 layer:(id)arg1 undo:(id)arg2 speed:(float)arg3 ;
-(void)_applyTransitionElement:(id)arg0 layer:(id)arg1 undo:(id)arg2 speed:(float)arg3 ;
-(void)_nextStateTimer:(id)arg0 ;
-(void)_removeTransition:(id)arg0 layer:(id)arg1 ;
-(void)cancelTimers;
-(void)dealloc;
-(void)restoreStateChanges:(id)arg0 ;
-(void)setInitialStatesOfLayer:(id)arg0 ;
-(void)setInitialStatesOfLayer:(id)arg0 transitionSpeed:(float)arg1 ;
-(void)setState:(id)arg0 ofLayer:(id)arg1 ;
-(void)setState:(id)arg0 ofLayer:(id)arg1 transitionSpeed:(float)arg2 ;


@end


#endif