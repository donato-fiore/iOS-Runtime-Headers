// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPROMISE_H
#define NTKPROMISE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKPromise : NSObject {
    unsigned int _bgPriority;
    unsigned int _fgPriority;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    id *_loaderQueue_loadedObject;
    os_unfair_lock_s _lock;
    id *_lock_loadedObject;
    NSUInteger _lock_promiseState;
}


@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) id *object;


+(id)metalPipelinePromiseNamed:(id)arg0 withBlock:(id)arg1 ;
+(id)promiseNamed:(id)arg0 withBackgroundPriority:(unsigned int)arg1 foregroundPriority:(unsigned int)arg2 block:(id)arg3 ;
+(id)promiseNamed:(id)arg0 withBlock:(id)arg1 ;
-(id)initWithName:(id)arg0 backgroundPriority:(unsigned int)arg1 foregroundPriority:(unsigned int)arg2 block:(id)arg3 ;
-(id)initWithName:(id)arg0 block:(id)arg1 ;
-(void)_beginLoadingBlock:(id)arg0 ;


@end


#endif