// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSMOTIONSTATELISTENERPROXY_H
#define DSMOTIONSTATELISTENERPROXY_H

@class NSDate, NSData, NSError, NSHashTable;
@protocol DSListenerClientProtocol;


#import "DSListener.h"
#import "DSProviderDevice.h"
#import "DSClientMotionDataOptions.h"

@interface DSMotionStateListenerProxy : DSListener {
    NSDate *_previousIntervalStartTime;
    unsigned int _listenerCount;
}


@property (retain, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (retain, nonatomic) DSProviderDevice *cachedProvider; // ivar: _cachedProvider
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (weak, nonatomic) NSObject<DSListenerClientProtocol> *lastobserver; // ivar: _lastobserver
@property int listenerState; // ivar: _listenerState
@property (retain) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) DSClientMotionDataOptions *options; // ivar: _options
@property (retain) NSHashTable *pendingObservers; // ivar: _pendingObservers


+(id)sharedInstance;
-(id)init;
-(void)_addObserver:(id)arg0 ;
-(void)_clearCache;
-(void)_removeObserver:(id)arg0 ;
-(void)_replyWithCachedDataToObserver:(id)arg0 ;
-(void)failedToStartListenerWithError:(id)arg0 ;
-(void)receivedData:(id)arg0 fromProvider:(id)arg1 ;
-(void)requestMotionState;
-(void)startMotionStateListenerWithObserver:(id)arg0 ;
-(void)startedListener;
-(void)stopMotionStateListenerWithObserver:(id)arg0 ;
-(void)stoppedListener;
-(void)updateProviders:(id)arg0 ;


@end


#endif