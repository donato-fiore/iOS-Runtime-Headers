// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDVOLUMEMANAGER_H
#define CKDVOLUMEMANAGER_H


#import <Foundation/Foundation.h>


@interface CKDVolumeManager : NSObject



+(id)deviceIDForVolumeUUID:(id)arg0 ;
+(id)volumeForDeviceID:(id)arg0 ;
+(id)volumeForVolumeUUID:(id)arg0 ;
+(id)volumeUUIDForDeviceID:(id)arg0 ;
+(void)_rebuildVolumes;
+(void)initialize;


@end


#endif