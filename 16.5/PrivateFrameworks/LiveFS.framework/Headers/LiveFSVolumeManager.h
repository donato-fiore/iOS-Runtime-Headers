// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSVOLUMEMANAGER_H
#define LIVEFSVOLUMEMANAGER_H

@class NSMutableDictionary, NSCondition;
@protocol LiveFSVolumeManager, LiveFSVolumeManagerDelegate;

#import <Foundation/Foundation.h>


@interface LiveFSVolumeManager : NSObject <LiveFSVolumeManager>

 {
    NSObject<LiveFSVolumeManagerDelegate> *delegate;
    NSMutableDictionary *listeners;
    NSMutableDictionary *descriptions;
    NSCondition *l;
    BOOL _initDone;
}




+(id)newServiceProxyObjectWithDelegate:(id)arg0 ;
-(id)addVolume:(id)arg0 usingInterface:(id)arg1 connectionClass:(Class)arg2 andProxy:(id)arg3 withDescription:(id)arg4 ;
-(id)addVolume:(id)arg0 usingInterface:(id)arg1 connectionClass:(Class)arg2 queue:(id)arg3 proxy:(id)arg4 description:(id)arg5 ;
-(id)addVolumeCluster:(id)arg0 ;
-(id)descriptionForVolume:(id)arg0 ;
-(id)getUniqueVolumeName:(id)arg0 ;
-(id)initServiceProxyObjectWithDelegate:(id)arg0 ;
-(id)removeVolumeCluster:(id)arg0 ;
-(id)volumeProxyForVolume:(id)arg0 ;
-(void)LiveMountEjectVolumeCluster:(id)arg0 withFlags:(unsigned int)arg1 reply:(id)arg2 ;
-(void)addDisk:(id)arg0 fileSystemType:(id)arg1 reply:(id)arg2 ;
-(void)addDisk:(id)arg0 reply:(id)arg1 ;
-(void)addShimForFileSystemType:(id)arg0 parameters:(id)arg1 reply:(id)arg2 ;
-(void)addVolume:(id)arg0 atServer:(id)arg1 credentialType:(NSInteger)arg2 credential:(id)arg3 reply:(id)arg4 ;
-(void)addVolume:(id)arg0 listener:(id)arg1 description:(id)arg2 reply:(id)arg3 ;
-(void)credentialTypes:(id)arg0 ;
-(void)dealloc;
-(void)ejectDisk:(id)arg0 usingFlags:(unsigned int)arg1 reply:(id)arg2 ;
-(void)ejectVolume:(id)arg0 usingFlags:(unsigned int)arg1 reply:(id)arg2 ;
-(void)initializationFinished;
-(void)listVolumes:(id)arg0 ;
-(void)listenerForVolume:(id)arg0 reply:(id)arg1 ;
-(void)removeVolume:(id)arg0 ;
-(void)removeVolumeLocked:(id)arg0 ;
-(void)sharesAtServer:(id)arg0 credentialType:(NSInteger)arg1 credential:(id)arg2 reply:(id)arg3 ;
-(void)uniqueNameForName:(id)arg0 reply:(id)arg1 ;
-(void)unlockVolume:(id)arg0 password:(id)arg1 saveToKeychain:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif