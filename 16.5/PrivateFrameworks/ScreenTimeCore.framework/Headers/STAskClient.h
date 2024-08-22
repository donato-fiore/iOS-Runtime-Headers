// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STASKCLIENT_H
#define STASKCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STAskClient : NSObject

@property (readonly) NSXPCConnection *connection; // ivar: _connection


+(id)_newConnection;
-(BOOL)respondToAskForTimeRequestWithIdentifier:(id)arg0 answer:(NSInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(void)dealloc;


@end


#endif