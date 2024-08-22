// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STGENERICINTENTHELPER_H
#define STGENERICINTENTHELPER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface STGenericIntentHelper : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSMutableDictionary *handlers; // ivar: _handlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *siriResponseQueue; // ivar: _siriResponseQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitForIntentCompleteSemaphore; // ivar: _waitForIntentCompleteSemaphore


+(id)sharedHelper;
-(BOOL)_invokeHandlerForIntent:(id)arg0 ;
-(id)init;
-(void)_handleIntent:(id)arg0 withTask:(id)arg1 andApplication:(id)arg2 ;
-(void)finishedLaunching:(BOOL)arg0 ;
-(void)forIntent:(id)arg0 registerHandler:(id)arg1 ;
-(void)forIntentParam:(id)arg0 predict:(id)arg1 ;
-(void)handleSiriTask:(id)arg0 withApplication:(id)arg1 ;


@end


#endif