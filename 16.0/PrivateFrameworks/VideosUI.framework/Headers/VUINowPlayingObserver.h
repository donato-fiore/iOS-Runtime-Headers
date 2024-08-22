// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUINOWPLAYINGOBSERVER_H
#define VUINOWPLAYINGOBSERVER_H

@protocol VUINowPlayingObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VUINowPlayingObservation.h"

@interface VUINowPlayingObserver : NSObject

@property (weak, nonatomic) NSObject<VUINowPlayingObserverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VUINowPlayingObservation *latestObservation; // ivar: _latestObservation
@property (nonatomic, getter=isObserving) BOOL observing; // ivar: _observing
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue
@property (nonatomic) NSUInteger updateObservationContext; // ivar: _updateObservationContext


-(id)init;
-(void)_handleNowPlayingAppDidChangeNotification:(id)arg0 ;
-(void)_handleNowPlayingAppIsPlayingDidChangeNotification:(id)arg0 ;
-(void)_notifyDelegateLatestObservationDidChange:(id)arg0 ;
-(void)_startObserving;
-(void)_stopObserving;
-(void)_updateLatestObservation;
-(void)_updateLatestObservationWithBundleIdentifier:(id)arg0 playbackState:(unsigned int)arg1 ;
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;


@end


#endif