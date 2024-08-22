// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SYSTREAMGUTS_H
#define _SYSTREAMGUTS_H

@class NSError, NSMutableDictionary;
@protocol OS_dispatch_queue, NSStreamDelegate;

#import <Foundation/Foundation.h>


@interface _SYStreamGuts : NSObject {
    *__CFRunLoopSource _runloopSource;
    unsigned int _port;
    NSObject<OS_dispatch_queue> *_queue;
    id *_handler;
    id<NSStreamDelegate> *_delegate;
    NSError *_error;
    NSUInteger _status;
    NSMutableDictionary *_propertyStore;
}




-(id)propertyForKey:(id)arg0 ;
-(void)createRunloopSourceForStream:(id)arg0 ;
-(void)dealloc;
-(void)postStreamEvent:(NSUInteger)arg0 forStream:(id)arg1 ;
// -(void)setEventHandler:(id)arg0 queue:(unk)arg1  ;
-(void)storeProperty:(id)arg0 forKey:(id)arg1 ;


@end


#endif