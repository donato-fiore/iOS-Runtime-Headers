// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVWEAKLYOBSERVEDOBJECTCLIENTBLOCKKVONOTIFIER_H
#define AVWEAKLYOBSERVEDOBJECTCLIENTBLOCKKVONOTIFIER_H

@class NSString;
@protocol AVKVONotifier, AVWeakObservable;

#import <Foundation/Foundation.h>

#import "AVCallbackContextRegistry.h"
#import "AVWeakReference.h"

@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier>

 {
    AVCallbackContextRegistry *_callbackContextRegistry;
    *void _callbackContextToken;
    NSObject *_observer;
    AVWeakReference *_weakReferenceToObject;
    NSObject<AVWeakObservable> *_unsafeUnretainedObject;
    NSString *_keyPath;
    NSUInteger _options;
    id *_block;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCallbackContextRegistry:(id)arg0 observer:(id)arg1 object:(id)arg2 keyPath:(id)arg3 options:(NSUInteger)arg4 block:(id)arg5 ;
-(void)callbackDidFireWithChangeDictionary:(id)arg0 ;
-(void)cancelCallbacks;
-(void)dealloc;
-(void)start;


@end


#endif