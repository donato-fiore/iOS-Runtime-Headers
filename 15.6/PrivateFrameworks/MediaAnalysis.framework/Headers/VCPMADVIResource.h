// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


-(CGFloat)activeCost;
-(CGFloat)inactiveCost;
-(id)init;
-(void)purge;


@end


#endif