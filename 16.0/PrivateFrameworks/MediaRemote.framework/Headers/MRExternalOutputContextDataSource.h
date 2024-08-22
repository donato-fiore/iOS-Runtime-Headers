// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MREXTERNALOUTPUTCONTEXTDATASOURCE_H
#define MREXTERNALOUTPUTCONTEXTDATASOURCE_H

@class NSString, NSMutableArray;


#import "MROutputContextDataSource.h"

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
}




-(float)volume;
-(id)initWithUniqueIdentifier:(id)arg0 ;
-(id)outputDevices;
-(id)uniqueIdentifier;
-(unsigned int)volumeControlCapabilities;
-(void)removeAllOutputDevices;
-(void)removeOutputDevices:(id)arg0 ;
-(void)updateOutputDevices:(id)arg0 ;
-(void)updateVolume:(float)arg0 outputDeviceUID:(id)arg1 ;
-(void)updateVolumeControlCapabilities:(unsigned int)arg0 outputDeviceUID:(id)arg1 ;


@end


#endif