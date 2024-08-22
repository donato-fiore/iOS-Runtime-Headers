// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMADPERSONIDENTIFICATIONTASK_H
#define VCPMADPERSONIDENTIFICATIONTASK_H

@class MADPersonIdentificationRequest, NSString;
@protocol VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol;

#import <Foundation/Foundation.h>

#import "VCPMADServiceImageAsset.h"

@interface VCPMADPersonIdentificationTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol>

 {
    MADPersonIdentificationRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    atomic<bool> _canceled;
}




+(id)dependencies;
+(id)taskName;
+(id)taskWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(BOOL)autoCancellable;
-(float)resourceRequirement;
-(id)initWithRequest:(id)arg0 imageAsset:(id)arg1 andSignpostPayload:(id)arg2 ;
-(int)run;
-(void)cancel;


@end


#endif