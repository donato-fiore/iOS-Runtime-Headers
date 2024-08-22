// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MROUTPUTCONTEXTDATASOURCE_H
#define MROUTPUTCONTEXTDATASOURCE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MROutputContextDataSource : NSObject

@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) BOOL isMuted; // ivar: _isMuted
@property (readonly, nonatomic) NSArray *outputDevices; // ivar: _outputDevices
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) float volume; // ivar: _volume
@property (readonly, nonatomic) unsigned int volumeControlCapabilities; // ivar: _volumeControlCapabilities


-(id)description;
-(id)outputDeviceForUID:(id)arg0 ;


@end


#endif