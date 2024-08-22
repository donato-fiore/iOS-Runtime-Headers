// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC7SIRIGEO11MAPSSERVICE25CAPABILITYFETCHEROBSERVER_H
#define _TTCC7SIRIGEO11MAPSSERVICE25CAPABILITYFETCHEROBSERVER_H

@protocol MSPSharedTripCapabilityLevelFetcherObserver;

#import <Foundation/Foundation.h>


@interface _TtCC7SiriGeo11MapsService25CapabilityFetcherObserver : NSObject <MSPSharedTripCapabilityLevelFetcherObserver>

 {
    ? logObject;
    ? timeout;
    ? levelFetcher;
    ? completion;
    ? capabilities;
}




-(id)init;
-(void)capabilityLevelsDidUpdate;


@end


#endif