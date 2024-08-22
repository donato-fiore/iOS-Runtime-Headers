// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUISESSIONCONTROLLER_H
#define MRUISESSIONCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC25MediaRemoteDaemonServices17SessionController.h"

@interface MRUISessionController : NSObject

@property (readonly, nonatomic) NSString *nowPlayingSessionIdentifier;
@property (readonly, nonatomic) _TtC25MediaRemoteDaemonServices17SessionController *sessionController; // ivar: _sessionController


+(BOOL)deviceSupportsSessions;
-(id)contextForSessionIdentifier:(id)arg0 ;
-(id)currentSessionInfo;
-(id)init;
-(void)clearSessions;
-(void)endMirroringSession;
-(void)endNowPlayingSession;
-(void)startMirroringSession;
-(void)startNowPlayingSession;


@end


#endif