// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCCONDITIONALOPERATION_H
#define HDCLOUDSYNCCONDITIONALOPERATION_H



#import "HDCloudSyncOperation.h"

@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation; // ivar: _operation
@property (copy) id *shouldRunHandler; // ivar: _shouldRunHandler


+(BOOL)shouldLogAtOperationEnd;
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(BOOL)finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(id)description;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 operation:(id)arg2 shouldRunHandler:(id)arg3 ;
-(void)main;
-(void)skip;


@end


#endif