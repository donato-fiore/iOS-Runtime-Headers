// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCDEVICEEVENTMANAGER_H
#define TVRCDEVICEEVENTMANAGER_H


#import <Foundation/Foundation.h>

#import "TVRCDevice.h"

@interface TVRCDeviceEventManager : NSObject

@property (retain, nonatomic) TVRCDevice *device; // ivar: _device
@property (copy, nonatomic) id *eventResponseHandler; // ivar: _eventResponseHandler


-(id)initWithDevice:(id)arg0 responseHandler:(id)arg1 ;
-(void)sendEvent:(id)arg0 options:(id)arg1 ;


@end


#endif