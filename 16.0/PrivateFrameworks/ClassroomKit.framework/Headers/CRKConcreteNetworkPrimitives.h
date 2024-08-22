// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETENETWORKPRIMITIVES_H
#define CRKCONCRETENETWORKPRIMITIVES_H

@protocol CRKNetworkPrimitives;

#import <Foundation/Foundation.h>


@interface CRKConcreteNetworkPrimitives : NSObject <CRKNetworkPrimitives>





+(id)makePathMonitorForInterfaceType:(int)arg0 ;
-(id)ethernetNetworkPathMonitor;
-(id)wifiNetworkPathMonitor;


@end


#endif