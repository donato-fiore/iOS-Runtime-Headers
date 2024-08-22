// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVKVODISPATCHER_H
#define AVKVODISPATCHER_H


#import <Foundation/Foundation.h>

#import "AVCallbackContextRegistry.h"

@interface AVKVODispatcher : NSObject {
    AVCallbackContextRegistry *_callbackContextRegistry;
}




+(id)sharedKVODispatcher;
-(id)initWithDescriptionOfHowAllObservedPropertyChangesAreSerializedWithDispatcherDeallocation:(id)arg0 ;
-(id)startObservingObject:(id)arg0 weakObserver:(id)arg1 forKeyPath:(id)arg2 options:(NSUInteger)arg3 context:(*void)arg4 ;
-(id)startObservingObject:(id)arg0 weakObserver:(id)arg1 forTwoPartKeyPath:(id)arg2 options:(NSUInteger)arg3 context:(*void)arg4 ;
-(id)startObservingValueAtKeyPath:(id)arg0 ofObject:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(id)startObservingValueAtKeyPath:(id)arg0 withoutKeepingAliveObservedObject:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(id)startObservingValueAtTwoPartKeyPath:(id)arg0 ofObject:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif