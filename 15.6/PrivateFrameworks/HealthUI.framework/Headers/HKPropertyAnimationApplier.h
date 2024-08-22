// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKPROPERTYANIMATIONAPPLIER_H
#define HKPROPERTYANIMATIONAPPLIER_H

@class NSMutableDictionary, CADisplayLink;

#import <Foundation/Foundation.h>


@interface HKPropertyAnimationApplier : NSObject {
    NSMutableDictionary *_animations;
    CADisplayLink *_displayLink;
}




-(id)init;
-(void)_applyAnimations;
-(void)_cleanupCompletedAnimations;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_startDisplayLinkIfNecessary;
-(void)_stopDisplayLinkIfNecessary;
-(void)applyAnimation:(id)arg0 ;
-(void)cancelAnimationsForProperty:(id)arg0 ;


@end


#endif