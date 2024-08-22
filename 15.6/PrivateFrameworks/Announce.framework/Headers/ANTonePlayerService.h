// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANTONEPLAYERSERVICE_H
#define ANTONEPLAYERSERVICE_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ANTonePlayerService : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)playTone:(NSUInteger)arg0 audioSessionID:(unsigned int)arg1 endpointUUID:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif