// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOUSBHOSTSTREAM_H
#define IOUSBHOSTSTREAM_H



#import "IOUSBHostIOSource.h"
#import "IOUSBHostPipe.h"

@interface IOUSBHostStream : IOUSBHostIOSource

@property (retain) IOUSBHostPipe *hostPipe; // ivar: _hostPipe
@property NSUInteger streamID; // ivar: _streamID


-(BOOL)abortWithError:(*id)arg0 ;
-(BOOL)abortWithOption:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)enqueueIORequestWithData:(id)arg0 error:(*id)arg1 completionHandler:(id)arg2 ;
-(BOOL)sendIORequestWithData:(id)arg0 bytesTransferred:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithHostPipe:(id)arg0 streamID:(NSUInteger)arg1 ioConnection:(unsigned int)arg2 ioNotificationPortRef:(struct IONotificationPort *)arg3 ;


@end


#endif