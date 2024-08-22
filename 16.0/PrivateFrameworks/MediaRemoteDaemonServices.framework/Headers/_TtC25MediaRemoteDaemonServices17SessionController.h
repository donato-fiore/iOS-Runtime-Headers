// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC25MEDIAREMOTEDAEMONSERVICES17SESSIONCONTROLLER_H
#define _TTC25MEDIAREMOTEDAEMONSERVICES17SESSIONCONTROLLER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _TtC25MediaRemoteDaemonServices17SessionController : NSObject

@property (nonatomic, readonly) NSDictionary *currentSessionInfo;
@property (nonatomic, readonly) NSString *nowPlayingSessionIdentifier;


+(BOOL)deviceSupportsSessions;
-(id)contextForSessionIdentifier:(id)arg0 ;
-(id)init;
-(void)clearSessions;
-(void)endMirroringSession;
-(void)endNowPlayingSession;
-(void)startMirroringSession;
-(void)startNowPlayingSession;


@end


#endif