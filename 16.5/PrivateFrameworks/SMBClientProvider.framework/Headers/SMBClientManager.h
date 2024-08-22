// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMBCLIENTMANAGER_H
#define SMBCLIENTMANAGER_H

@class LiveFSClient;



@interface SMBClientManager : LiveFSClient



+(id)newManager;
-(id)addVolume:(id)arg0 atServer:(id)arg1 credentialType:(NSInteger)arg2 credential:(id)arg3 ;
-(id)forgetVolume:(id)arg0 ;
-(id)listenerForVolume:(id)arg0 error:(*id)arg1 ;
-(id)sharesAtServer:(id)arg0 credentialType:(NSInteger)arg1 credential:(id)arg2 error:(*id)arg3 ;
-(id)volumes:(*id)arg0 ;
-(void)addSMBServerOrShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)addVolumes:(id)arg0 atServer:(id)arg1 credentialType:(NSInteger)arg2 credential:(id)arg3 completionHandler:(id)arg4 ;
-(void)credentialTypesForServer:(id)arg0 completionHandler:(id)arg1 ;
-(void)forgetVolume:(id)arg0 completionHandler:(id)arg1 ;
-(void)forgetVolume:(id)arg0 withFlags:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)listenerForVolume:(id)arg0 completionHandler:(id)arg1 ;
-(void)mountsFromServer:(id)arg0 completionHandler:(id)arg1 ;
-(void)sharesAtServer:(id)arg0 credentialType:(NSInteger)arg1 credential:(id)arg2 completionHandler:(id)arg3 ;
-(void)volumesWithCompletionHandler:(id)arg0 ;


@end


#endif