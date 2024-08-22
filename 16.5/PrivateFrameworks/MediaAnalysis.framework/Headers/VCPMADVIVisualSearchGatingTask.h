// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADVIVISUALSEARCHGATINGTASK_H
#define VCPMADVIVISUALSEARCHGATINGTASK_H

@class MADVIVisualSearchGatingRequest, NSString;
@protocol VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol, MTLDevice, OS_dispatch_queue, VICancellable;

#import <Foundation/Foundation.h>

#import "VCPMADServiceImageAsset.h"

@interface VCPMADVIVisualSearchGatingTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol>

 {
    MADVIVisualSearchGatingRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    id<MTLDevice> *_preferredMetalDevice;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    atomic<bool> _canceled;
    id<VICancellable> *_cancellable;
}




+(id)dependencies;
+(id)taskWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(BOOL)autoCancellable;
-(float)resourceRequirement;
-(id)createQueryContextWithError:(*id)arg0 ;
-(id)initWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(int)run;
-(void)cancel;
-(void)setPreferredMetalDevice:(id)arg0 ;
-(void)storeResults:(id)arg0 ;


@end


#endif