// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGGROUPGLOBALANIMATIONSEQUENCER_H
#define ARUIRINGGROUPGLOBALANIMATIONSEQUENCER_H

@class CADisplayLink, NSString;
@protocol ARUIAnimationSequencing;

#import <Foundation/Foundation.h>

#import "ARUIObserverStore.h"

@interface ARUIRingGroupGlobalAnimationSequencer : NSObject <ARUIAnimationSequencing>

 {
    ARUIObserverStore *_observers;
    CADisplayLink *_displayLink;
    CGFloat _lastUpdateTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_needsDisplayLink;
-(id)_init;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_updateDisplayLink;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif