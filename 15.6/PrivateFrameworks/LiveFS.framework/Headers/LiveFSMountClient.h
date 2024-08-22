// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSMOUNTCLIENT_H
#define LIVEFSMOUNTCLIENT_H

@class NSXPCConnection, NSString;
@protocol LiveFSMounterClient><LiveFSMounterClientHelper;

#import <Foundation/Foundation.h>


@interface LiveFSMountClient : NSObject {
    NSXPCConnection *conn;
    NSString *provider;
    NSObject<LiveFSMounterClient><LiveFSMounterClientHelper> *helper;
}




+(id)newClient;
+(id)newClientForProvider:(id)arg0 ;
-(id)allMounts:(*id)arg0 ;
-(id)fixupConnectionFor:(id)arg0 ;
-(id)initWithProvider:(id)arg0 ;
-(id)mountVolume:(id)arg0 displayName:(id)arg1 provider:(id)arg2 domainError:(id)arg3 on:(id)arg4 how:(int)arg5 ;
-(id)mountVolume:(id)arg0 displayName:(id)arg1 provider:(id)arg2 on:(id)arg3 how:(int)arg4 ;
-(id)mountVolume:(id)arg0 provider:(id)arg1 on:(id)arg2 how:(int)arg3 ;
-(id)mounts:(*id)arg0 ;
-(id)setVerboseLevel:(int)arg0 ;
-(id)unmountVolume:(id)arg0 how:(int)arg1 ;
-(id)unmountVolumeByID:(unsigned int)arg0 how:(int)arg1 ;
-(id)updateErrorStateForVolume:(id)arg0 provider:(id)arg1 domainError:(id)arg2 ;
-(int)verboseLevelOrError:(*id)arg0 ;
-(void)unmountVolumeNamed:(id)arg0 providerName:(id)arg1 domainError:(id)arg2 how:(int)arg3 reply:(id)arg4 ;


@end


#endif