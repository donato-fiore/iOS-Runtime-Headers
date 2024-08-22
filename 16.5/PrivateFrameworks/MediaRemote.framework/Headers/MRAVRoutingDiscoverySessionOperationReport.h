// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVROUTINGDISCOVERYSESSIONOPERATIONREPORT_H
#define MRAVROUTINGDISCOVERYSESSIONOPERATIONREPORT_H

@class NSArray, NSError;

#import <Foundation/Foundation.h>


@interface MRAVRoutingDiscoverySessionOperationReport : NSObject

@property (retain, nonatomic) NSArray *discoveredOutputDeviceUIDs; // ivar: _discoveredOutputDeviceUIDs
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSArray *undiscoveredOutputDeviceUIDs; // ivar: _undiscoveredOutputDeviceUIDs


-(id)description;


@end


#endif