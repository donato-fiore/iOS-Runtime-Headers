// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMADVISIONRESOURCE_H
#define VCPMADVISIONRESOURCE_H

@class VNSession;
@protocol OS_dispatch_queue;


#import "VCPMADResource.h"

@interface VCPMADVisionResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VNSession *_session;
}


@property (readonly, nonatomic) VNSession *session;


-(id)init;
-(void)purge;


@end


#endif