// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLLAZYOBJECT_H
#define PLLAZYOBJECT_H


#import <Foundation/Foundation.h>


@interface PLLazyObject : NSObject {
    BOOL _shouldRetryBlockOnNil;
    os_unfair_lock_s _lock;
    id *_block;
    id *_object;
}


@property (readonly) id *currentObjectValueWithoutForcingEvaluation;
@property (readonly) id *objectValue;


-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithRetriableBlock:(id)arg0 ;
-(id)initWithRetry:(BOOL)arg0 block:(id)arg1 ;
-(void)invalidate;
-(void)invalidateWithHandler:(id)arg0 ;
-(void)resetObject;
-(void)resetObjectWithHandler:(id)arg0 ;


@end


#endif