// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAPROCESSDEVICEPAIR_H
#define CAPROCESSDEVICEPAIR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CAProcessDevicePair : NSObject

@property (readonly) NSString *deviceUID; // ivar: _deviceUID
@property (readonly) int processID; // ivar: _processID


-(id)initWithProcessID:(int)arg0 andDeviceUID:(id)arg1 ;


@end


#endif