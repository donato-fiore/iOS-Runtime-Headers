// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTDEVICECLUSTERMEMBER_H
#define AVOUTPUTDEVICECLUSTERMEMBER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVOutputDeviceClusterMember : NSObject {
    *OpaqueFigVolumeControllerState _volumeController;
    AVWeakReference *_weakObserver;
}


@property (readonly, nonatomic) NSString *clusterID; // ivar: _clusterID
@property (readonly, nonatomic, getter=isClusterLeader) BOOL clusterLeader; // ivar: _clusterLeader
@property (readonly, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) NSInteger deviceSubType; // ivar: _deviceSubType
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly) float volume;
@property (readonly) NSInteger volumeControlType;


-(id)initWithClusterID:(id)arg0 deviceID:(id)arg1 deviceName:(id)arg2 deviceSubType:(NSInteger)arg3 clusterLeader:(BOOL)arg4 modelID:(id)arg5 volumeController:(struct OpaqueFigVolumeControllerState *)arg6 ;
-(void)_clusterMemberDidChangeVolume:(id)arg0 deviceID:(id)arg1 ;
-(void)_clusterMemberDidChangeVolumeControlType:(id)arg0 deviceID:(id)arg1 ;
-(void)dealloc;


@end


#endif