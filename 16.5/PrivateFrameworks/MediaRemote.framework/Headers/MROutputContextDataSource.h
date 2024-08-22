// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MROUTPUTCONTEXTDATASOURCE_H
#define MROUTPUTCONTEXTDATASOURCE_H

@class NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MROutputContextDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}


@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) BOOL isMuted; // ivar: _isMuted
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) NSArray *outputDevices; // ivar: _outputDevices
@property (nonatomic) BOOL shouldLog; // ivar: _shouldLog
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) float volume; // ivar: _volume
@property (readonly, nonatomic) unsigned int volumeControlCapabilities; // ivar: _volumeControlCapabilities


-(BOOL)isMutedForOutputDevice:(id)arg0 error:(*id)arg1 ;
-(float)volumeForOutputDeviceUID:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)outputDeviceForUID:(id)arg0 ;
-(unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg0 error:(*id)arg1 ;


@end


#endif