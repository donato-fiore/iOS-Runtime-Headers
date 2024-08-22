// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSRAPIDCLOUDKITHELPER_H
#define DRSRAPIDCLOUDKITHELPER_H


#import <Foundation/Foundation.h>

#import "DiagnosticPipelineRapidServiceFunctionsClientObjc.h"

@interface DRSRapidCloudKitHelper : NSObject

@property (readonly, nonatomic) DiagnosticPipelineRapidServiceFunctionsClientObjc *objcClient; // ivar: _objcClient


+(id)devHelper;
+(id)prodHelper;
-(id)_initWithEnvironment:(NSInteger)arg0 ;
-(void)submitRapidPayload:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif