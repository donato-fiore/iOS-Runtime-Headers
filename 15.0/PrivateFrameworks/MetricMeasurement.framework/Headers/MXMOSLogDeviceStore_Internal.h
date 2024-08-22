// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMOSLOGDEVICESTORE_INTERNAL_H
#define MXMOSLOGDEVICESTORE_INTERNAL_H

@class OSActivityStream, NSString, NSMutableDictionary;
@protocol OSDeviceDelegate, MXMProbeableDevice;

#import <Foundation/Foundation.h>


@interface MXMOSLogDeviceStore_Internal : NSObject <OSDeviceDelegate>

 {
    OSActivityStream *_stream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *devices; // ivar: _devices
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MXMProbeableDevice> *hostDevice; // ivar: _hostDevice
@property (readonly) Class superclass;


+(id)shared;
-(BOOL)activityStream:(id)arg0 deviceUDID:(id)arg1 deviceID:(id)arg2 status:(NSInteger)arg3 error:(id)arg4 ;
-(id)init;


@end


#endif