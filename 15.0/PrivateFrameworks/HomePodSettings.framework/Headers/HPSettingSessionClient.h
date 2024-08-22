// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSETTINGSESSIONCLIENT_H
#define HPSETTINGSESSIONCLIENT_H

@class NSXPCConnection, NSUUID;

#import <Foundation/Foundation.h>


@interface HPSettingSessionClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID


+(id)clientWithXPCConnection:(id)arg0 ;
-(id)copy;
-(id)description;


@end


#endif