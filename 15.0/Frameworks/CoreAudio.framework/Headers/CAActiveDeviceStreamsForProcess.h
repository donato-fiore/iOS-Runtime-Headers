// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAACTIVEDEVICESTREAMSFORPROCESS_H
#define CAACTIVEDEVICESTREAMSFORPROCESS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CAProcessDevicePair.h"

@interface CAActiveDeviceStreamsForProcess : NSObject

@property (readonly) NSArray *activeStreams; // ivar: _activeStreams
@property (readonly) CAProcessDevicePair *pair; // ivar: _pair


-(id)initWithProcessDevicePair:(id)arg0 andActiveStreamArray:(id)arg1 ;


@end


#endif