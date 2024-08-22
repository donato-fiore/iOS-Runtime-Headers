// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMATCHEVENTQUEUE_H
#define GKMATCHEVENTQUEUE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "GKPlayer.h"

@interface GKMatchEventQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *connectionInfo; // ivar: _connectionInfo
@property (nonatomic) BOOL counted; // ivar: _counted
@property (nonatomic) NSInteger deferedPlayerState; // ivar: _deferedPlayerState
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (nonatomic) BOOL hasInitRelayInfo; // ivar: _hasInitRelayInfo
@property (nonatomic) BOOL hasUpdateRelayInfo; // ivar: _hasUpdateRelayInfo
@property (retain, nonatomic) GKPlayer *hostPlayer; // ivar: _hostPlayer
@property (nonatomic) BOOL okToSend; // ivar: _okToSend
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (nonatomic) NSInteger playerState; // ivar: _playerState
@property (nonatomic) BOOL relayInitiated; // ivar: _relayInitiated
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber


-(id)init;


@end


#endif