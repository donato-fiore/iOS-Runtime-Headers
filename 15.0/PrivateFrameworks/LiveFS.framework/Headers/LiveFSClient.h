// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSCLIENT_H
#define LIVEFSCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface LiveFSClient : NSObject {
    NSXPCConnection *conn;
}




+(id)interfaceForListeners;
+(id)newConnectionForService:(id)arg0 ;
+(id)supportDirURL:(NSUInteger)arg0 forURL:(id)arg1 daemonPrefName:(id)arg2 error:(*id)arg3 ;
-(id)forgetVolume:(id)arg0 ;
-(id)forgetVolume:(id)arg0 withFlags:(unsigned int)arg1 ;
-(id)initConnectionForService:(id)arg0 ;
-(id)listenerForVolume:(id)arg0 error:(*id)arg1 ;
-(id)terminateDevice:(id)arg0 ;
-(id)volumes:(*id)arg0 ;
-(void)dealloc;
-(void)listenerForVolume:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlockVolume:(id)arg0 password:(id)arg1 saveToKeychain:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif