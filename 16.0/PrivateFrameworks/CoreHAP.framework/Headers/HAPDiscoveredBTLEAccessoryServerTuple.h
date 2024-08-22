// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPDISCOVEREDBTLEACCESSORYSERVERTUPLE_H
#define HAPDISCOVEREDBTLEACCESSORYSERVERTUPLE_H

@class HMFObject;


#import "HAPAccessoryServerBTLE.h"

@interface HAPDiscoveredBTLEAccessoryServerTuple : HMFObject

@property (readonly, nonatomic) HAPAccessoryServerBTLE *accessoryServer; // ivar: _accessoryServer
@property (nonatomic) CGFloat lastSeen; // ivar: _lastSeen


+(id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg0 ;


@end


#endif