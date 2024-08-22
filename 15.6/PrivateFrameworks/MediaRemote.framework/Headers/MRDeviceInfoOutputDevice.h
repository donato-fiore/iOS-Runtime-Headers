// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRDEVICEINFOOUTPUTDEVICE_H
#define MRDEVICEINFOOUTPUTDEVICE_H



#import "MRAVOutputDevice.h"
#import "MRDeviceInfo.h"

@interface MRDeviceInfoOutputDevice : MRAVOutputDevice

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo; // ivar: _deviceInfo


-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)isGroupable;
-(BOOL)isLocalDevice;
-(BOOL)isRemoteControllable;
-(BOOL)shouldBeLocallyHosted;
-(BOOL)supportsMultiplayer;
-(NSInteger)hostDeviceClass;
-(id)avOutputDevice;
-(id)groupID;
-(id)initWithDeviceInfo:(id)arg0 ;
-(id)logicalDeviceID;
-(id)modelID;
-(id)name;
-(id)uid;
-(unsigned int)deviceSubtype;
-(unsigned int)deviceType;


@end


#endif