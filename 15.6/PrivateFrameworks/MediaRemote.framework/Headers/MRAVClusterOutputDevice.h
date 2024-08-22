// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVCLUSTEROUTPUTDEVICE_H
#define MRAVCLUSTEROUTPUTDEVICE_H

@class NSArray;


#import "MRAVConcreteOutputDevice.h"

@interface MRAVClusterOutputDevice : MRAVConcreteOutputDevice

@property (readonly, nonatomic) NSArray *memberOutputDevices; // ivar: _memberOutputDevices


-(BOOL)anyDeviceSupportsMultiplayer;
-(BOOL)isLocalDevice;
-(id)clusterComposition;
-(id)initWithDevices:(id)arg0 sourceInfo:(id)arg1 ;
-(id)initWithPrimaryOutputDevice:(id)arg0 members:(id)arg1 sourceInfo:(id)arg2 ;
-(id)primaryID;
-(id)uid;
-(unsigned int)deviceSubtype;
-(unsigned int)deviceType;


@end


#endif