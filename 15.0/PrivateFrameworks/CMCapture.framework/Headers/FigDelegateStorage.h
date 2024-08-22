// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGDELEGATESTORAGE_H
#define FIGDELEGATESTORAGE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigDelegateStorage : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id *_delegate;
    os_unfair_lock_s _lock;
}


@property (readonly) id *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;


+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)invokeDelegateCallbackWithBlock:(id)arg0 ;


@end


#endif