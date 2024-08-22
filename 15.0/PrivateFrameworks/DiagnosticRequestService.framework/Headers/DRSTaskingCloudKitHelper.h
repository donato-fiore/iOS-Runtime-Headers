// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSTASKINGCLOUDKITHELPER_H
#define DRSTASKINGCLOUDKITHELPER_H

@class CKContainer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DRSTaskingCloudKitHelper : NSObject

@property (readonly, nonatomic) CKContainer *_targetContainer; // ivar: __targetContainer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)prodContainerHelper;
+(id)sandboxContainerHelper;
+(id)taskingDeviceMetadata;
-(id)_operationWithFunctionName:(id)arg0 ;
-(id)_taskingConfigMetadataForTeamID:(id)arg0 uuidString:(id)arg1 ;
-(id)initWithContainer:(id)arg0 ;
-(void)_recordPBMessage:(id)arg0 forFunction:(id)arg1 ;
-(void)_submitOperationWithName:(id)arg0 requestObject:(id)arg1 completionBlock:(id)arg2 ;
-(void)reportTaskingConfigCompletion:(id)arg0 uuidString:(id)arg1 completionType:(id)arg2 completionDescription:(id)arg3 activeDuration:(CGFloat)arg4 transaction:(id)arg5 completionHandler:(id)arg6 ;
-(void)reportTaskingConfigReceipt:(id)arg0 uuidString:(id)arg1 receiptResult:(id)arg2 transaction:(id)arg3 completionHandler:(id)arg4 ;
-(void)reportTaskingSystemMessageReceipt:(id)arg0 messageType:(id)arg1 channelType:(id)arg2 channelEnvironment:(id)arg3 dateBroadcast:(id)arg4 dateReceived:(id)arg5 transaction:(id)arg6 completionHandler:(id)arg7 ;


@end


#endif