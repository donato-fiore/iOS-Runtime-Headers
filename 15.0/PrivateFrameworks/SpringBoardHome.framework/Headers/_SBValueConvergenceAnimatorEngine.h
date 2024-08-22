// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBVALUECONVERGENCEANIMATORENGINE_H
#define _SBVALUECONVERGENCEANIMATORENGINE_H

@class NSMutableSet, CADisplayLink;

#import <Foundation/Foundation.h>


@interface _SBValueConvergenceAnimatorEngine : NSObject {
    NSMutableSet *_animators;
    CADisplayLink *_displayLink;
    NSMutableSet *_finishedAnimators;
}




+(id)sharedEngine;
-(BOOL)isRunningAnimator:(id)arg0 ;
-(id)init;
-(void)_ensureDisplayLink;
-(void)_onDisplayLink:(id)arg0 ;
-(void)_tearDownDisplayLink;
-(void)_updateDisplayLink;
-(void)startAnimator:(id)arg0 ;
-(void)stopAnimator:(id)arg0 ;
-(void)updateAnimator:(id)arg0 ;


@end


#endif