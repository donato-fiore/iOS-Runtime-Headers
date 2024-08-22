// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRLAZYKVOADAPTER_H
#define XRLAZYKVOADAPTER_H

@class NSMapTable, NSArray;
@protocol XRLazyKVOResponder;

#import <Foundation/Foundation.h>

#import "_XRLazyKVOBlockToken.h"

@interface XRLazyKVOAdapter : NSObject {
    NSMapTable *_keyPathsByContextByClz;
    NSMapTable *_keyPathsByContextByObj;
    unordered_set<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> _updatedContexts;
    unordered_set<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> _presentedContexts;
    id<XRLazyKVOResponder> *_responder;
    BOOL _implementsWillChangeHandler;
}


@property (copy, nonatomic) NSArray *runLoopModes; // ivar: _runLoopModes
@property (retain, nonatomic) _XRLazyKVOBlockToken *strongBlockAdapterToken; // ivar: _strongBlockAdapterToken
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


+(id)observeKeyPath:(id)arg0 object:(id)arg1 observer:(id)arg2 lazyUpdateBlock:(id)arg3 ;
+(id)observeKeyPathArray:(id)arg0 object:(id)arg1 observer:(id)arg2 lazyUpdateBlock:(id)arg3 ;
-(BOOL)hasContextChanged:(*void)arg0 ;
-(id)init;
-(id)initWithLazyKVOResponder:(id)arg0 ;
-(void)_callbackHandler;
-(void)clear;
-(void)dealloc;
-(void)fireCallbackContext:(*void)arg0 whenKeypaths:(id)arg1 changeOnClass:(Class)arg2 ;
-(void)observeObject:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObservationsForObject:(id)arg0 ;


@end


#endif