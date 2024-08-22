// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCINEMATOGRAPHYNETWORKPAYLOAD_H
#define PTCINEMATOGRAPHYNETWORKPAYLOAD_H


#import <Foundation/Foundation.h>

#import "PTCinematographyDetection.h"

@interface PTCinematographyNetworkPayload : NSObject

@property (readonly) PTCinematographyDetection *detection; // ivar: _detection
@property (readonly) BOOL isMissingDetection; // ivar: _isMissingDetection
@property (readonly) ? time; // ivar: _time


-(id)initWithTime:(struct ? )arg0 detection:(id)arg1 missing:(BOOL)arg2 ;


@end


#endif