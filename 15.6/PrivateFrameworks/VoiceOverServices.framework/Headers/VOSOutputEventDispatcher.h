// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSOUTPUTEVENTDISPATCHER_H
#define VOSOUTPUTEVENTDISPATCHER_H

@class NSHashTable, NSString;
@protocol VOSOutputEventDispatching, OS_dispatch_queue, VOSSoundPack, VOSHapticPack;

#import <Foundation/Foundation.h>


@interface VOSOutputEventDispatcher : NSObject <VOSOutputEventDispatching>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_eventHandlers;
    id<VOSSoundPack> *_cachedActiveSoundPack;
    id<VOSHapticPack> *_cachedActiveHapticPack;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)shouldPlayHapticForEvent:(id)arg0 ;
-(BOOL)shouldPlaySoundForEvent:(id)arg0 ;
-(id)_activeHapticPack;
-(id)_activeSoundPack;
-(id)_init;
-(void)addEventHandler:(id)arg0 ;
-(void)removeEventHandler:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif