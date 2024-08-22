// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATIDSCONNECTIONINFO_H
#define ATIDSCONNECTIONINFO_H

@class IDSDevice;

#import <Foundation/Foundation.h>

#import "ATIDSSocket.h"

@interface ATIDSConnectionInfo : NSObject

@property (nonatomic) NSUInteger connectionState; // ivar: _connectionState
@property (retain, nonatomic) IDSDevice *device; // ivar: _device
@property (nonatomic) unsigned int failureCount; // ivar: _failureCount
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) ATIDSSocket *socket; // ivar: _socket
@property (nonatomic) CGFloat wakeupTimestamp; // ivar: _wakeupTimestamp


-(id)init;
-(void)dealloc;


@end


#endif