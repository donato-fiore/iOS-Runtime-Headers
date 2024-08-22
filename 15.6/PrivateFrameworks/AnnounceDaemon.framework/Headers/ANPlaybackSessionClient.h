// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANPLAYBACKSESSIONCLIENT_H
#define ANPLAYBACKSESSIONCLIENT_H

@class NSXPCConnection, NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface ANPlaybackSessionClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSUUID *endpointID; // ivar: _endpointID
@property (retain, nonatomic) NSString *groupID; // ivar: _groupID
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID


+(id)clientWithXPCConnection:(id)arg0 ;
-(id)copy;
-(id)description;


@end


#endif