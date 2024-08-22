// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMITASKSERVICECLIENT_H
#define HMITASKSERVICECLIENT_H

@class VCPHomeKitAnalysisService;


#import "HMITaskService.h"

@interface HMITaskServiceClient : HMITaskService

@property (readonly) VCPHomeKitAnalysisService *remote; // ivar: _remote


+(id)logCategory;
-(BOOL)cancelTask:(int)arg0 ;
-(id)init;
// -(int)submitTaskWithOptions:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif