// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMADVIMACHINEREADABLECODEDETECTIONTASK_H
#define VCPMADVIMACHINEREADABLECODEDETECTIONTASK_H

@class MADVIMachineReadableCodeDetectionRequest, NSString, VNImageBasedRequest;
@protocol VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPMADServiceImageAsset.h"

@interface VCPMADVIMachineReadableCodeDetectionTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol>

 {
    MADVIMachineReadableCodeDetectionRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    atomic<bool> _canceled;
    VNImageBasedRequest *_weakRequest;
}




+(BOOL)enableGating;
+(id)dependencies;
+(id)taskWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(BOOL)autoCancellable;
-(BOOL)canReuseResultsForRequest;
-(float)resourceRequirement;
-(id)initWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(int)run;
-(void)cancel;


@end


#endif