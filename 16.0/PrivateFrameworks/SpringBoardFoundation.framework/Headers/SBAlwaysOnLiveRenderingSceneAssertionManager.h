// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALWAYSONLIVERENDERINGSCENEASSERTIONMANAGER_H
#define SBALWAYSONLIVERENDERINGSCENEASSERTIONMANAGER_H

@class BLSAssertion, NSHashTable, NSString;
@protocol BLSBacklightStateObserving, BLSAssertionObserving;

#import <Foundation/Foundation.h>


@interface SBAlwaysOnLiveRenderingSceneAssertionManager : NSObject <BLSBacklightStateObserving>

 {
    BLSAssertion *_liveRenderingAssertion;
    NSHashTable *_liveRenderingAssertionProxies;
}


@property (weak, nonatomic) NSObject<BLSAssertionObserving> *assertionObserver; // ivar: _assertionObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_nextLiveRenderingAssertionProxyIfAny;
-(id)acquireLiveRenderingAssertionWithReason:(id)arg0 ;
-(id)assertionAttributes;
-(id)init;
-(void)_acquireLiveRenderingAssertionIfNeededForProxy:(id)arg0 backlight:(id)arg1 ;
-(void)_acquireLiveRenderingAssertionProxy:(id)arg0 ;
-(void)_invalidateWithReason:(id)arg0 ;
-(void)_releaseLiveRenderingAssertionProxy:(id)arg0 ;
-(void)_releaseLiveRenderingAssertionWithReason:(id)arg0 ;
-(void)backlight:(id)arg0 didChangeAlwaysOnEnabled:(BOOL)arg1 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif