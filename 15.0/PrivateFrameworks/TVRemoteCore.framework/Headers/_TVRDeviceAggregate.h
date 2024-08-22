// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRDEVICEAGGREGATE_H
#define _TVRDEVICEAGGREGATE_H


#import <Foundation/Foundation.h>

#import "_TVRCHMServiceWrapper.h"
#import "_TVRCMRTelevisionWrapper.h"
#import "_TVRXDevice.h"
#import "_TVRCRPCompanionLinkClientWrapper.h"
#import "_TVRCRMSDeviceWrapper.h"

@interface _TVRDeviceAggregate : NSObject

@property (retain, nonatomic) _TVRCHMServiceWrapper *homeKit; // ivar: _homeKit
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *mediaRemote; // ivar: _mediaRemote
@property (retain, nonatomic) _TVRXDevice *publicDevice; // ivar: _publicDevice
@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *rapport; // ivar: _rapport
@property (retain, nonatomic) _TVRCRMSDeviceWrapper *remoteMediaService; // ivar: _remoteMediaService


-(BOOL)isEmpty;
-(id)bestImpl;


@end


#endif