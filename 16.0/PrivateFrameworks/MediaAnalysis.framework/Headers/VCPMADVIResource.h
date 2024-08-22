// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMADVIRESOURCE_H
#define VCPMADVIRESOURCE_H

@class VIService;
@protocol OS_dispatch_queue;


#import "VCPMADResource.h"

@interface VCPMADVIResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VIService *_service;
}


@property (readonly, nonatomic) VIService *service;


-(NSInteger)activeCost;
-(NSInteger)inactiveCost;
-(id)init;
-(void)purge;


@end


#endif