// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCLOUDCALLINGDEVICECONTROLLER_H
#define TPSCLOUDCALLINGDEVICECONTROLLER_H

@class NSString, NSArray;
@protocol TUCallCapabilitiesDelegatePrivate, TPSCloudCallingDeviceControllerDelegate;

#import <Foundation/Foundation.h>


@interface TPSCloudCallingDeviceController : NSObject <TUCallCapabilitiesDelegatePrivate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSCloudCallingDeviceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)didChangeCloudCallingDevices;


@end


#endif