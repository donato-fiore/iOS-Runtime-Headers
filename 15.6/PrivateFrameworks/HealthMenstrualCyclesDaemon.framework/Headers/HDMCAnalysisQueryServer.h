// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMCANALYSISQUERYSERVER_H
#define HDMCANALYSISQUERYSERVER_H

@class HDQueryServer, HKMCAnalysisQueryConfiguration, HKMCAnalysis, NSString;
@protocol HDMCAnalysisManagerObserver;


#import "HDMCProfileExtension.h"

@interface HDMCAnalysisQueryServer : HDQueryServer <HDMCAnalysisManagerObserver>

 {
    HDMCProfileExtension *_profileExtension;
    HKMCAnalysisQueryConfiguration *_configuration;
    HKMCAnalysis *_analysis;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(id)_analysisQueryClientProxy;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 profileExtension:(id)arg4 ;
-(id)objectTypes;
-(void)_handleAnalysis:(id)arg0 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)analysisManager:(id)arg0 didUpdateAnalysis:(id)arg1 ;


@end


#endif