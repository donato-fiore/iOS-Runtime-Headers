// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMADVIREMOVEBACKGROUNDTASK_H
#define VCPMADVIREMOVEBACKGROUNDTASK_H

@class MADVIRemoveBackgroundRequest, NSString, VNImageBasedRequest;
@protocol VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol, MTLDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPMADServiceImageAsset.h"

@interface VCPMADVIRemoveBackgroundTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol>

 {
    MADVIRemoveBackgroundRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    id<MTLDevice> *_preferredMetalDevice;
    NSString *_signpostPayload;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    atomic<bool> _canceled;
    VNImageBasedRequest *_weakRequest;
}




+(id)dependencies;
+(id)taskWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(BOOL)autoCancellable;
-(float)resourceRequirement;
-(id)initWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(int)run;
-(void)cancel;
-(void)setPreferredMetalDevice:(id)arg0 ;


@end


#endif