// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSKEEPALIVE_H
#define VSKEEPALIVE_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface VSKeepAlive : NSObject {
    NSXPCConnection *_serverConnection;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) NSInteger audioType; // ivar: _audioType
@property (nonatomic) BOOL keepAudioSessionActive; // ivar: _keepAudioSessionActive


-(id)_remoteKeepAlive;
-(id)_serverConnection;
-(void)_ensureKeepAliveMaintenance;
-(void)dealloc;


@end


#endif