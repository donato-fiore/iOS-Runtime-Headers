// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCKEYVALUESTORESAVEPOLICYAPPBACKGROUND_H
#define FCKEYVALUESTORESAVEPOLICYAPPBACKGROUND_H

@class NSString;
@protocol FCAppActivityObserving, FCBackgroundTaskable, OS_dispatch_queue;


#import "FCKeyValueStoreSavePolicy.h"

@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving>

 {
    id<FCBackgroundTaskable> *_backgroundTaskable;
    BOOL _inBackground;
    NSObject<OS_dispatch_queue> *_pendingQueue;
    id *_pendingHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithActivityMonitor:(id)arg0 backgroundTaskable:(id)arg1 ;
-(void)_saveIfNeeded;
-(void)activityObservingApplicationDidEnterBackground;
-(void)activityObservingApplicationWillEnterForeground;
-(void)activityObservingApplicationWillTerminate;
-(void)scheduleSaveOnQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif