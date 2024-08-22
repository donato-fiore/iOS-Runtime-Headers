// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVRDEVICEAGGREGATE_H
#define _TVRDEVICEAGGREGATE_H


#import <Foundation/Foundation.h>

#import "TVRCHMServiceWrapper.h"
#import "TVRXDevice.h"
#import "TVRCRPCompanionLinkClientWrapper.h"
#import "_TVRCRMSDeviceWrapper.h"

@interface _TVRDeviceAggregate : NSObject

@property (retain, nonatomic) TVRCHMServiceWrapper *homeKit; // ivar: _homeKit
@property (retain, nonatomic) TVRXDevice *publicDevice; // ivar: _publicDevice
@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *rapport; // ivar: _rapport
@property (retain, nonatomic) _TVRCRMSDeviceWrapper *remoteMediaService; // ivar: _remoteMediaService


-(BOOL)isEmpty;
-(id)bestImpl;


@end


#endif