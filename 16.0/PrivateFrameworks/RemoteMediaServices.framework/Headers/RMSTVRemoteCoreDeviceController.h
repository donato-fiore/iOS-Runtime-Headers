// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSTVREMOTECOREDEVICECONTROLLER_H
#define RMSTVREMOTECOREDEVICECONTROLLER_H

@class TVRCDeviceQuery, NSMapTable, NSString;
@protocol TVRCDeviceQueryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RMSTVRemoteCoreDeviceController : NSObject <TVRCDeviceQueryDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    TVRCDeviceQuery *_deviceQuery;
    NSMapTable *_discoveryCompletionHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(id)_deviceForIdentifier:(id)arg0 ;
-(id)deviceForIdentifier:(id)arg0 ;
-(id)init;
-(void)_finishDiscoveryWithDevice:(id)arg0 forIdentifier:(id)arg1 ;
-(void)deviceQueryDidUpdateDevices:(id)arg0 ;
-(void)discoverDeviceWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif