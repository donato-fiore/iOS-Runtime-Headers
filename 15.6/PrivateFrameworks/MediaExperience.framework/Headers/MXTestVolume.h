// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXTESTVOLUME_H
#define MXTESTVOLUME_H



#import "MXTestSessionFactory.h"

@interface MXTestVolume : MXTestSessionFactory



-(int)setVolumeForRoute:(id)arg0 subType:(id)arg1 deviceID:(id)arg2 category:(id)arg3 mode:(id)arg4 volume:(float)arg5 ;
-(int)testBluetoothVolumePreferences;
-(int)verifyVolumeForRoute:(id)arg0 subType:(id)arg1 deviceID:(id)arg2 category:(id)arg3 mode:(id)arg4 volume:(float)arg5 ;


@end


#endif