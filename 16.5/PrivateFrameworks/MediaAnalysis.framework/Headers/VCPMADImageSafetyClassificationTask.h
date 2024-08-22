// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADIMAGESAFETYCLASSIFICATIONTASK_H
#define VCPMADIMAGESAFETYCLASSIFICATIONTASK_H

@class MADImageSafetyClassificationRequest, NSString;
@protocol VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol;

#import <Foundation/Foundation.h>

#import "VCPMADServiceImageAsset.h"

@interface VCPMADImageSafetyClassificationTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol>

 {
    MADImageSafetyClassificationRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    atomic<bool> _canceled;
}




+(id)dependencies;
+(id)taskWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(BOOL)autoCancellable;
-(float)resourceRequirement;
-(id)initWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(int)run;
-(void)cancel;
-(void)logMemoryWithMessage:(id)arg0 ;


@end


#endif