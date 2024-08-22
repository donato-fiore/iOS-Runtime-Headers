// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSSERVICE_H
#define LIVEFSSERVICE_H

@class NSMutableDictionary, NSCondition;
@protocol LiveFSMount, LiveFSMountDelegate;

#import <Foundation/Foundation.h>


@interface LiveFSService : NSObject <LiveFSMount>

 {
    NSObject<LiveFSMountDelegate> *delegate;
    NSMutableDictionary *listeners;
    NSMutableDictionary *descriptions;
    NSCondition *l;
    BOOL _initDone;
}




+(id)newServiceProxyObjectWithDelegate:(id)arg0 ;
-(id)addVolume:(id)arg0 usingInterface:(id)arg1 connectionClass:(Class)arg2 andProxy:(id)arg3 withDescription:(id)arg4 ;
-(id)addVolume:(id)arg0 usingInterface:(id)arg1 connectionClass:(Class)arg2 queue:(id)arg3 andProxy:(id)arg4 withDescription:(id)arg5 ;
-(id)addVolumeCluster:(id)arg0 ;
-(id)descriptionForVolume:(id)arg0 ;
-(id)getUniqueVolumeName:(id)arg0 ;
-(id)initServiceProxyObjectWithDelegate:(id)arg0 ;
-(id)removeVolumeCluster:(id)arg0 ;
-(id)volumeProxyForVolume:(id)arg0 ;
-(void)LiveMountAddDisk:(id)arg0 FileSystemType:(id)arg1 reply:(id)arg2 ;
-(void)LiveMountAddDisk:(id)arg0 reply:(id)arg1 ;
-(void)LiveMountAddShimForFileSystemType:(id)arg0 parameterDict:(id)arg1 reply:(id)arg2 ;
-(void)LiveMountAddVolume:(id)arg0 atServer:(id)arg1 credentialType:(NSInteger)arg2 credential:(id)arg3 reply:(id)arg4 ;
-(void)LiveMountAddVolume:(id)arg0 withListener:(id)arg1 andWithDescription:(id)arg2 reply:(id)arg3 ;
-(void)LiveMountCredentialTypes:(id)arg0 ;
-(void)LiveMountEjectDisk:(id)arg0 reply:(id)arg1 ;
-(void)LiveMountEjectVolume:(id)arg0 reply:(id)arg1 ;
-(void)LiveMountEjectVolume:(id)arg0 withFlags:(unsigned int)arg1 reply:(id)arg2 ;
-(void)LiveMountEjectVolumeCluster:(id)arg0 withFlags:(unsigned int)arg1 reply:(id)arg2 ;
-(void)LiveMountGetUniqueName:(id)arg0 reply:(id)arg1 ;
-(void)LiveMountList:(id)arg0 ;
-(void)LiveMountListenerForVolume:(id)arg0 completionHandler:(id)arg1 ;
-(void)LiveMountListenerForVolume:(id)arg0 reply:(id)arg1 ;
-(void)LiveMountSharesAtServer:(id)arg0 credentialType:(NSInteger)arg1 credential:(id)arg2 reply:(id)arg3 ;
-(void)dealloc;
-(void)initializationFinished;
-(void)removeVolume:(id)arg0 ;
-(void)removeVolumeLocked:(id)arg0 ;
-(void)unlockVolume:(id)arg0 password:(id)arg1 saveToKeychain:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif