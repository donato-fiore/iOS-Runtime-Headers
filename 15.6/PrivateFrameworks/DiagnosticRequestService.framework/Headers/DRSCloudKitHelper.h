// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSCLOUDKITHELPER_H
#define DRSCLOUDKITHELPER_H

@class CKContainer;

#import <Foundation/Foundation.h>

#import "DRSRapidCloudKitHelper.h"

@interface DRSCloudKitHelper : NSObject

@property (retain, nonatomic) CKContainer *_targetContainer; // ivar: __targetContainer
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly, nonatomic) NSInteger rapidEnvironment; // ivar: _rapidEnvironment
@property (readonly, nonatomic) DRSRapidCloudKitHelper *rapidHelper; // ivar: _rapidHelper


+(id)helperForCKConfig:(id)arg0 ;
+(id)prodContainerHelper;
+(id)sandboxContainerHelper;
-(BOOL)_handleRAPIDRequests:(id)arg0 xpcActivity:(id)arg1 errorsOut:(id)arg2 ;
-(id)_requestsPassingUploadSizeCap:(id)arg0 remainingQuota:(NSUInteger)arg1 ;
-(id)initWithContainerEnvironment:(NSInteger)arg0 rapidEnvironment:(NSInteger)arg1 ;
-(id)initWithEnvironment:(NSInteger)arg0 ;
-(void)_configureOperation:(id)arg0 container:(id)arg1 xpcActivity:(id)arg2 ;
-(void)_sendDecisionServerRequests:(id)arg0 xpcActivity:(id)arg1 replyHandler:(id)arg2 ;
-(void)_uploadRecords:(id)arg0 containerName:(id)arg1 xpcActivity:(id)arg2 completionHandler:(id)arg3 ;
-(void)reportTerminalRequestStats:(id)arg0 xpcActivity:(id)arg1 replyHandler:(id)arg2 ;
-(void)shouldEnableDataGathering:(id)arg0 xpcActivity:(id)arg1 replyHandler:(id)arg2 ;
-(void)shouldUploadRequests:(id)arg0 xpcActivity:(id)arg1 replyHandler:(id)arg2 ;
-(void)uploadRequests:(id)arg0 contactDecisionServer:(BOOL)arg1 xpcActivity:(id)arg2 remainingUploadQuota:(NSUInteger)arg3 completionHandler:(id)arg4 ;


@end


#endif