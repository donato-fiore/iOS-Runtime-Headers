// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVOUTPUTDEVICEGROUP_H
#define AVOUTPUTDEVICEGROUP_H

@class NSArray;
@protocol AVOutputDeviceGroupImpl;

#import <Foundation/Foundation.h>

#import "AVOutputDevice.h"

@interface AVOutputDeviceGroup : NSObject {
    id<AVOutputDeviceGroupImpl> *_impl;
}


@property (readonly) AVOutputDevice *groupLeader;
@property (readonly) NSArray *outputDevices;
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice;
@property (readonly) float volume;
@property (readonly) NSInteger volumeControlType;


+(id)outputDeviceGroupWithRemoteGroupID:(struct __CFString *)arg0 syncController:(struct OpaqueAPSyncController *)arg1 ;
+(id)sharedAudioPresentationOutputGroup;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)impl;
-(id)initWithOutputDeviceGroupImpl:(id)arg0 ;
-(void)addOutputDevice:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)outputDeviceGroupImpl:(id)arg0 didChangeOutputDevicesWithInitiator:(id)arg1 ;
-(void)outputDeviceGroupImplDidChangeVolume:(id)arg0 ;
-(void)outputDeviceGroupImplDidChangeVolumeControlType:(id)arg0 ;
-(void)removeOutputDevice:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif