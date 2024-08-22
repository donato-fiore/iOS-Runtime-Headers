// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMADIMAGESAFETYCLASSIFICATIONRESOURCE_H
#define VCPMADIMAGESAFETYCLASSIFICATIONRESOURCE_H

@class CVNLPCommSafetyHandler;
@protocol OS_dispatch_queue;


#import "VCPMADResource.h"

@interface VCPMADImageSafetyClassificationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    CVNLPCommSafetyHandler *_handler;
}




+(id)sharedResource;
-(id)handler;
-(id)init;
-(void)purge;


@end


#endif