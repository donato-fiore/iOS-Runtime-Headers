// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTHREAD_H
#define NSTHREAD_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSThread : NSObject {
    id *_private;
    unsigned char _bytes;
}


@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) BOOL isMainThread;
@property (copy) NSString *name;
@property NSInteger qualityOfService;
@property NSUInteger stackSize;
@property (readonly, retain) NSMutableDictionary *threadDictionary;
@property CGFloat threadPriority;


+(BOOL)isDying;
+(BOOL)isMultiThreaded;
+(id)callStackReturnAddresses;
+(id)callStackSymbols;
+(id)currentThread;
+(id)mainThread;
+(void)detachNewThreadSelector:(SEL)arg0 toTarget:(id)arg1 withObject:(id)arg2 ;
+(void)detachNewThreadWithBlock:(id)arg0 ;
+(void)exit;
+(void)sleepForTimeInterval:(CGFloat)arg0 ;
+(void)sleepUntilDate:(id)arg0 ;
-(BOOL)isDying;
-(id)description;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(id)runLoop;
-(struct pthread_override_s *)_beginQoSOverride:(unsigned int)arg0 relativePriority:(int)arg1 ;
-(void)_endQoSOverride:(struct pthread_override_s *)arg0 ;
-(void)_nq:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)main;
-(void)start;


@end


#endif