// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRTRANSFERSSTATUSMANAGER_H
#define BRTRANSFERSSTATUSMANAGER_H

@class NSOperationQueue, NSProgress, NSString, NSArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRTransfersStatusManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSProgress *_globalUploadProgress;
    NSProgress *_globalDownloadProgress;
    id *_globalProgressSubscriber;
    NSUInteger _shouldHideGlobalDownloadProgressCount;
    NSObject<OS_dispatch_source> *_timerToDisplayGlobalProgress;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_personaIdentifier;
}


@property (readonly, copy) NSArray *transfers; // ivar: _transfers


+(id)defaultManager;
+(void)initialize;
-(id)initWithPersonaIdentifier:(id)arg0 ;
-(id)startObservingItemDownloadProgressAtURL:(id)arg0 ;
-(void)_progressSubscription;
-(void)_setGlobalProgress:(id)arg0 forIvar:(*id)arg1 ;
-(void)_setupTimerToDisplayGlobalProgress;
-(void)addTransfer:(id)arg0 ;
-(void)dealloc;
-(void)downloadAndObserveItemAtURL:(id)arg0 handler:(id)arg1 ;
-(void)insertTransfer:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeTransfer:(id)arg0 ;
-(void)showGlobalProgressIfNeeded;
-(void)stopObservingItemDownloadProgress:(id)arg0 ;


@end


#endif