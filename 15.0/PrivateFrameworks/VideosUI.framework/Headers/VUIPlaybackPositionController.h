// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIPLAYBACKPOSITIONCONTROLLER_H
#define VUIPLAYBACKPOSITIONCONTROLLER_H

@class SBCPlaybackPositionSyncService;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUIPlaybackPositionController : NSObject {
    NSObject<OS_os_log> *_logObject;
    NSObject<OS_dispatch_queue> *_queue;
    SBCPlaybackPositionSyncService *_syncService;
}


@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)_onQueue_beginCapturingEvents;
-(void)_onQueue_endCapturingEvents;
-(void)_onQueue_updateEntityWithPlaybackPositionInfo:(id)arg0 forTrack:(id)arg1 ;
-(void)beginCapturingEvents;
-(void)endCapturingEvents;
-(void)persistPlaybackPositionInfo:(id)arg0 forTrack:(id)arg1 ;


@end


#endif