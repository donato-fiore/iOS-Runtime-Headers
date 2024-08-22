// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXOVERRIDDENCLOUDCAPABILITIESPROVIDER_H
#define _PXOVERRIDDENCLOUDCAPABILITIESPROVIDER_H

@class NSDictionary, NSError;
@protocol PXCloudCapabilitiesProvider;

#import <Foundation/Foundation.h>

#import "PXObservable.h"

@interface _PXOverriddenCloudCapabilitiesProvider : NSObject <PXCloudCapabilitiesProvider>

 {
    NSDictionary *_overrides;
    id<PXCloudCapabilitiesProvider> *_subProvider;
}


@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) PXObservable *observable;


-(NSInteger)statusForCapability:(id)arg0 ;
-(id)init;
-(id)initWithCloudCapabilitiesProvider:(id)arg0 overrides:(id)arg1 ;
-(void)requestStatusForCapability:(id)arg0 handler:(id)arg1 ;
-(void)startGatheringCapabilityStatuses;


@end


#endif