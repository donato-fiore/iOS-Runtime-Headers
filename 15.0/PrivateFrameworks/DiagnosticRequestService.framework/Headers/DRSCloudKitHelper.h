// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSCLOUDKITHELPER_H
#define DRSCLOUDKITHELPER_H

@class CKContainer;

#import <Foundation/Foundation.h>


@interface DRSCloudKitHelper : NSObject

@property (retain, nonatomic) CKContainer *_targetContainer; // ivar: __targetContainer


+(id)prodContainerHelper;
+(id)sandboxContainerHelper;
-(id)_requestsPassingUploadSizeCap:(id)arg0 remainingQuota:(NSUInteger)arg1 ;
-(id)initWithContainer:(id)arg0 ;
-(void)_configureOperation:(id)arg0 xpcActivity:(id)arg1 ;
-(void)_sendDecisionServerRequests:(id)arg0 xpcActivity:(id)arg1 replyHandler:(id)arg2 ;
-(void)_uploadRecords:(id)arg0 xpcActivity:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportTerminalRequestStats:(id)arg0 xpcActivity:(id)arg1 replyHandler:(id)arg2 ;
-(void)shouldEnableDataGathering:(id)arg0 xpcActivity:(id)arg1 replyHandler:(id)arg2 ;
-(void)shouldUploadRequests:(id)arg0 xpcActivity:(id)arg1 replyHandler:(id)arg2 ;
-(void)uploadRequests:(id)arg0 contactDecisionServer:(BOOL)arg1 xpcActivity:(id)arg2 remainingUploadQuota:(NSUInteger)arg3 completionHandler:(id)arg4 ;


@end


#endif