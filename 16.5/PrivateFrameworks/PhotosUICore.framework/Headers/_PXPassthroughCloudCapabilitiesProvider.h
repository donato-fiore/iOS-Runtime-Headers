// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXPASSTHROUGHCLOUDCAPABILITIESPROVIDER_H
#define _PXPASSTHROUGHCLOUDCAPABILITIESPROVIDER_H

@class NSArray, NSError;
@protocol PXCloudCapabilitiesProvider;

#import <Foundation/Foundation.h>

#import "PXObservable.h"

@interface _PXPassthroughCloudCapabilitiesProvider : NSObject <PXCloudCapabilitiesProvider>

 {
    NSArray *_enabledCapabilities;
}


@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) PXObservable *observable;


-(NSInteger)statusForCapability:(id)arg0 ;
-(id)initWithEnabledCapabilities:(id)arg0 ;
-(void)requestStatusForCapability:(id)arg0 handler:(id)arg1 ;
-(void)startGatheringCapabilityStatuses;


@end


#endif