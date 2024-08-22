// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLIENTDATACOLLECTIONOBSERVATIONSTATEMONITOR_H
#define HDCLIENTDATACOLLECTIONOBSERVATIONSTATEMONITOR_H

@class NSLock, NSString;
@protocol HDProcessStateObserver, HDClientDataCollectionObservationStateMonitorDelegate;

#import <Foundation/Foundation.h>

#import "HDHealthStoreClient.h"
#import "HDProfile.h"

@interface HDClientDataCollectionObservationStateMonitor : NSObject <HDProcessStateObserver>

 {
    NSLock *_lock;
    uint8_t _invalidated;
}


@property (readonly, nonatomic) HDHealthStoreClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDClientDataCollectionObservationStateMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


-(id)currentObserverState;
-(id)init;
-(id)initWithClient:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)processDidEnterBackground:(id)arg0 ;
-(void)processDidEnterForeground:(id)arg0 ;
-(void)workoutManagerDidChangeState:(id)arg0 ;


@end


#endif