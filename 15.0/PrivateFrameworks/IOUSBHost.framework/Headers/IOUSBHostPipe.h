// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOUSBHOSTPIPE_H
#define IOUSBHOSTPIPE_H

@class NSData, NSMutableSet;


#import "IOUSBHostIOSource.h"

@interface IOUSBHostPipe : IOUSBHostIOSource

@property (retain) NSData *currentDescriptorsCache; // ivar: _currentDescriptorsCache
@property (readonly) *IOUSBHostIOSourceDescriptors descriptors;
@property (readonly) CGFloat idleTimeout;
@property (retain) NSMutableSet *invalidDescriptorCache; // ivar: _invalidDescriptorCache
@property (readonly) *IOUSBHostIOSourceDescriptors originalDescriptors;
@property (retain) NSData *originalDescriptorsCache; // ivar: _originalDescriptorsCache
@property BOOL streamsEnabled; // ivar: _streamsEnabled


-(BOOL)abortWithError:(*id)arg0 ;
-(BOOL)abortWithOption:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)adjustPipeWithDescriptors:(struct IOUSBHostIOSourceDescriptors *)arg0 error:(*id)arg1 ;
-(BOOL)clearStallWithError:(*id)arg0 ;
-(BOOL)disableStreamsWithError:(*id)arg0 ;
-(BOOL)enableStreamsWithError:(*id)arg0 ;
-(BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest )arg0 data:(id)arg1 completionTimeout:(CGFloat)arg2 error:(*id)arg3 completionHandler:(id)arg4 ;
-(BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest )arg0 data:(id)arg1 error:(*id)arg2 completionHandler:(id)arg3 ;
-(BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest )arg0 error:(*id)arg1 completionHandler:(id)arg2 ;
-(BOOL)enqueueIORequestWithData:(id)arg0 completionTimeout:(CGFloat)arg1 error:(*id)arg2 completionHandler:(id)arg3 ;
-(BOOL)enqueueIORequestWithData:(id)arg0 frameList:(struct IOUSBHostIsochronousFrame *)arg1 frameListCount:(NSUInteger)arg2 firstFrameNumber:(NSUInteger)arg3 error:(*id)arg4 completionHandler:(id)arg5 ;
// -(BOOL)enqueueIORequestWithData:(id)arg0 frameList:(struct IOUSBHostIsochronousFrame *)arg1 frameListCount:(NSUInteger)arg2 firstFrameNumber:(NSUInteger)arg3 options:(unsigned int)arg4 error:(*id)arg5 completionHandler:(id)arg6 version:(unk)arg7  ;
-(BOOL)enqueueIORequestWithData:(id)arg0 transactionList:(struct IOUSBHostIsochronousTransaction *)arg1 transactionListCount:(NSUInteger)arg2 firstFrameNumber:(NSUInteger)arg3 options:(unsigned int)arg4 error:(*id)arg5 completionHandler:(id)arg6 ;
-(BOOL)sendControlRequest:(struct IOUSBDeviceRequest )arg0 data:(id)arg1 bytesTransferred:(*NSUInteger)arg2 completionTimeout:(CGFloat)arg3 error:(*id)arg4 ;
-(BOOL)sendControlRequest:(struct IOUSBDeviceRequest )arg0 data:(id)arg1 bytesTransferred:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)sendControlRequest:(struct IOUSBDeviceRequest )arg0 error:(*id)arg1 ;
-(BOOL)sendIORequestWithData:(id)arg0 bytesTransferred:(*NSUInteger)arg1 completionTimeout:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)sendIORequestWithData:(id)arg0 frameList:(*void)arg1 frameListCount:(NSUInteger)arg2 firstFrameNumber:(NSUInteger)arg3 options:(unsigned int)arg4 error:(*id)arg5 version:(NSUInteger)arg6 ;
-(BOOL)sendIORequestWithData:(id)arg0 frameList:(struct IOUSBHostIsochronousFrame *)arg1 frameListCount:(NSUInteger)arg2 firstFrameNumber:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)sendIORequestWithData:(id)arg0 transactionList:(struct IOUSBHostIsochronousTransaction *)arg1 transactionListCount:(NSUInteger)arg2 firstFrameNumber:(NSUInteger)arg3 options:(unsigned int)arg4 error:(*id)arg5 ;
-(id)copyStreamWithStreamID:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithHostInterface:(id)arg0 endpointAddress:(NSUInteger)arg1 ioConnection:(unsigned int)arg2 ioNotificationPortRef:(struct IONotificationPort *)arg3 deviceAddress:(NSUInteger)arg4 ;
-(struct IOUSBHostIOSourceDescriptors *)ioSourceDescriptorsWithOption:(NSUInteger)arg0 ;


@end


#endif