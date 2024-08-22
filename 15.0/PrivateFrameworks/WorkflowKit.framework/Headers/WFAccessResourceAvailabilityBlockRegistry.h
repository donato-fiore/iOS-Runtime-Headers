// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCESSRESOURCEAVAILABILITYBLOCKREGISTRY_H
#define WFACCESSRESOURCEAVAILABILITYBLOCKREGISTRY_H


#import <Foundation/Foundation.h>


@interface WFAccessResourceAvailabilityBlockRegistry : NSObject



+(id)contactAccessResourceAvailabilityBlock:(SEL)arg0 ;
+(id)remoteServerAccessResourceAvailabilityBlock:(SEL)arg0 ;
+(void)rediscoverAvailabilityBlocksIfNeeded;
+(void)registerAvailabilityBlocksInActionKit;
+(void)setContactAccessResourceAvailabilityBlock:(id)arg0 ;
+(void)setRemoteServerAccessResourceAvailabilityBlock:(id)arg0 ;


@end


#endif