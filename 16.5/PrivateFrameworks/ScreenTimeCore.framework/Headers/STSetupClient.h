// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSETUPCLIENT_H
#define STSETUPCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STSetupClient : NSObject

@property (readonly) NSXPCConnection *connection; // ivar: _connection


+(id)_newConnection;
-(BOOL)applyUpdatedConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)currentConfigurationForUser:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)collectPasscodeFromUserWithCompletionHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif