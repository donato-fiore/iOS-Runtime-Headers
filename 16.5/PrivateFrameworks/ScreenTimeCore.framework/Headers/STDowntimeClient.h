// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STDOWNTIMECLIENT_H
#define STDOWNTIMECLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STDowntimeClient : NSObject

@property (readonly) NSXPCConnection *connection; // ivar: _connection


+(id)_newConnection;
-(BOOL)isDowntimeEnabledForUserID:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)toggleOnDemandDowntimeForUserID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif