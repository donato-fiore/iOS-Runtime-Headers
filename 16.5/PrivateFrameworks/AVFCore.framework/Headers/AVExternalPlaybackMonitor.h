// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVEXTERNALPLAYBACKMONITOR_H
#define AVEXTERNALPLAYBACKMONITOR_H


#import <Foundation/Foundation.h>

#import "AVExternalPlaybackMonitorInternal.h"

@interface AVExternalPlaybackMonitor : NSObject {
    AVExternalPlaybackMonitorInternal *_ivars;
}


@property (readonly, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
@property (readonly, getter=isAirPlayVideoPlaying) BOOL airPlayVideoPlaying;


+(id)longFormVideoExternalPlaybackMonitor;
+(void)initialize;
-(id)description;
-(id)init;
-(id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager *)arg0 ;
-(void)dealloc;


@end


#endif