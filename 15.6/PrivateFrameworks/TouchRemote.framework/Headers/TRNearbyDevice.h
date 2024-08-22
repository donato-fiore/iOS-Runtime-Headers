// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRNEARBYDEVICE_H
#define TRNEARBYDEVICE_H

@class NSUUID, SFDevice;

#import <Foundation/Foundation.h>


@interface TRNearbyDevice : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) SFDevice *representedDevice; // ivar: _representedDevice
@property (nonatomic) NSUInteger supportedService; // ivar: _supportedService


-(id)description;
-(id)init;
-(id)initWithRepresentedDevice:(id)arg0 supportedService:(NSUInteger)arg1 ;


@end


#endif