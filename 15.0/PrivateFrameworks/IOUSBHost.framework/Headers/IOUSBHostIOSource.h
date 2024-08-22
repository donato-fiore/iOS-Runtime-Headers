// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOUSBHOSTIOSOURCE_H
#define IOUSBHOSTIOSOURCE_H


#import <Foundation/Foundation.h>

#import "IOUSBHostInterface.h"

@interface IOUSBHostIOSource : NSObject

@property unsigned int debugLoggingMask; // ivar: _debugLoggingMask
@property NSUInteger deviceAddress; // ivar: _deviceAddress
@property NSUInteger endpointAddress; // ivar: _endpointAddress
@property (retain) IOUSBHostInterface *hostInterface; // ivar: _hostInterface
@property unsigned int ioConnection; // ivar: _ioConnection
@property *IONotificationPort ioNotificationPortRef; // ivar: _ioNotificationPortRef


-(id)initWithHostInterface:(id)arg0 endpointAddress:(NSUInteger)arg1 ioConnection:(unsigned int)arg2 ioNotificationPortRef:(struct IONotificationPort *)arg3 deviceAddress:(NSUInteger)arg4 ;


@end


#endif