// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMADVIRECTANGLEDETECTIONTASK_H
#define VCPMADVIRECTANGLEDETECTIONTASK_H

@class MADVIRectangleDetectionRequest, NSString, VNImageBasedRequest;
@protocol VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol, MTLDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPMADServiceImageAsset.h"

@interface VCPMADVIRectangleDetectionTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol>

 {
    MADVIRectangleDetectionRequest *_request;
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