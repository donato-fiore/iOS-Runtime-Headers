// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOUSBHOSTOBJECT_H
#define IOUSBHOSTOBJECT_H

@class NSMutableDictionary, NSMutableSet, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IOUSBHostInterestNotificationReference.h"

@interface IOUSBHostObject : NSObject

@property (readonly) *IOUSBBOSDescriptor capabilityDescriptors;
@property NSUInteger debugLoggingMask; // ivar: _debugLoggingMask
@property (retain) NSMutableDictionary *descriptorCache; // ivar: _descriptorCache
@property (readonly) NSUInteger deviceAddress;
@property (readonly) *IOUSBDeviceDescriptor deviceDescriptor;
@property (copy) id *interestHandler; // ivar: _interestHandler
@property unsigned int interestNotificationObject; // ivar: _interestNotificationObject
@property *IONotificationPort interestNotificationPortRef; // ivar: _interestNotificationPortRef
@property (retain) NSObject<OS_dispatch_queue> *interestNotificationQueue; // ivar: _interestNotificationQueue
@property (retain) IOUSBHostInterestNotificationReference *interestNotificationReference; // ivar: _interestNotificationReference
@property (retain) NSMutableSet *invalidDescriptorCache; // ivar: _invalidDescriptorCache
@property unsigned int ioConnection; // ivar: _ioConnection
@property *IONotificationPort ioNotificationPortRef; // ivar: _ioNotificationPortRef
@property unsigned int ioService; // ivar: _ioService
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSArray *supportedStringLanguages; // ivar: _supportedStringLanguages


-(BOOL)abortDeviceRequestsWithError:(*id)arg0 ;
-(BOOL)abortDeviceRequestsWithOption:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)enqueueDeviceRequest:(struct IOUSBDeviceRequest )arg0 data:(id)arg1 completionTimeout:(CGFloat)arg2 error:(*id)arg3 completionHandler:(id)arg4 ;
-(BOOL)enqueueDeviceRequest:(struct IOUSBDeviceRequest )arg0 data:(id)arg1 error:(*id)arg2 completionHandler:(id)arg3 ;
-(BOOL)enqueueDeviceRequest:(struct IOUSBDeviceRequest )arg0 error:(*id)arg1 completionHandler:(id)arg2 ;
-(BOOL)openWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)sendDeviceRequest:(struct IOUSBDeviceRequest )arg0 data:(id)arg1 bytesTransferred:(*NSUInteger)arg2 completionTimeout:(CGFloat)arg3 error:(*id)arg4 ;
-(BOOL)sendDeviceRequest:(struct IOUSBDeviceRequest )arg0 data:(id)arg1 bytesTransferred:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)sendDeviceRequest:(struct IOUSBDeviceRequest )arg0 error:(*id)arg1 ;
-(NSUInteger)frameNumberWithTime:(*NSUInteger)arg0 ;
-(id)initWithIOService:(unsigned int)arg0 options:(NSUInteger)arg1 queue:(id)arg2 error:(*id)arg3 interestHandler:(id)arg4 ;
-(id)initWithIOService:(unsigned int)arg0 queue:(id)arg1 error:(*id)arg2 interestHandler:(id)arg3 ;
-(id)ioDataWithCapacity:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)stringWithIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)stringWithIndex:(NSUInteger)arg0 languageID:(NSUInteger)arg1 error:(*id)arg2 ;
-(struct IOUSBConfigurationDescriptor *)configurationDescriptorWithConfigurationValue:(NSUInteger)arg0 error:(*id)arg1 ;
-(struct IOUSBConfigurationDescriptor *)configurationDescriptorWithIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(struct IOUSBDescriptorHeader *)descriptorWithType:(int)arg0 length:(*NSUInteger)arg1 error:(*id)arg2 ;
-(struct IOUSBDescriptorHeader *)descriptorWithType:(int)arg0 length:(*NSUInteger)arg1 index:(NSUInteger)arg2 languageID:(NSUInteger)arg3 error:(*id)arg4 ;
-(struct IOUSBDescriptorHeader *)descriptorWithType:(int)arg0 length:(*NSUInteger)arg1 index:(NSUInteger)arg2 languageID:(NSUInteger)arg3 requestType:(int)arg4 requestRecipient:(int)arg5 error:(*id)arg6 ;
-(void)closeWithOptions:(unsigned int)arg0 ;
-(void)dealloc;
-(void)destroy;


@end


#endif