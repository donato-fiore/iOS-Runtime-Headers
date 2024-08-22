// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKLOCALDEVICEIPADDRESSES_H
#define CRKLOCALDEVICEIPADDRESSES_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CRKLocalDeviceIPAddresses : NSObject

@property (readonly, copy, nonatomic) NSSet *IPAddresses; // ivar: _IPAddresses


-(BOOL)containsIPAddress:(id)arg0 ;
-(id)init;


@end


#endif