// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPMEDIAREMOTEPLAYBACKOBSERVER_H
#define LPMEDIAREMOTEPLAYBACKOBSERVER_H

@class MPModelGenericObject, NSHashTable, NSTimer;

#import <Foundation/Foundation.h>


@interface LPMediaRemotePlaybackObserver : NSObject {
    MPModelGenericObject *_enqueuedItem;
    MPModelGenericObject *_enqueuedItemContext;
    CGFloat _elapsedTime;
    CGFloat _totalTime;
    BOOL _isPlaying;
    BOOL _enqueuedItemIsLive;
    NSHashTable *_clients;
    NSTimer *_timer;
}




+(id)shared;
-(BOOL)isPlaying;
-(BOOL)playbackInformationMatchesPlayingItem:(id)arg0 ;
-(CGFloat)elapsedFractionForPlaybackInformation:(id)arg0 ;
-(CGFloat)minimumUpdateInterval;
-(void)addClient:(id)arg0 ;
-(void)dispatchPlayingItemDidChangeToAllClients;
-(void)removeClient:(id)arg0 ;
-(void)updatePlaybackState;


@end


#endif