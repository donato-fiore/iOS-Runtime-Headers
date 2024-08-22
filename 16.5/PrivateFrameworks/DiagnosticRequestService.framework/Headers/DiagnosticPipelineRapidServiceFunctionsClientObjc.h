// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAGNOSTICPIPELINERAPIDSERVICEFUNCTIONSCLIENTOBJC_H
#define DIAGNOSTICPIPELINERAPIDSERVICEFUNCTIONSCLIENTOBJC_H


#import <Foundation/Foundation.h>


@interface DiagnosticPipelineRapidServiceFunctionsClientObjc : NSObject {
    ? client;
    ? container;
}


@property (nonatomic, readonly) NSInteger environment; // ivar: environment


-(id)init;
-(id)initWithEnvironment:(NSInteger)arg0 ;
-(void)submitRapidPayloadWithBuildVariant:(id)arg0 deviceCategory:(id)arg1 deviceModel:(id)arg2 platform:(id)arg3 teamID:(id)arg4 issueCategory:(id)arg5 contextDictionaryData:(id)arg6 requestTime:(NSUInteger)arg7 build:(id)arg8 logType:(id)arg9 logSize:(NSUInteger)arg10 fileName:(id)arg11 uploadAttempts:(unsigned int)arg12 payload:(id)arg13 completionHandler:(id)arg14 ;


@end


#endif