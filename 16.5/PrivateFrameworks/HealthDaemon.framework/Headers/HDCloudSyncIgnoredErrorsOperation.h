// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCIGNOREDERRORSOPERATION_H
#define HDCLOUDSYNCIGNOREDERRORSOPERATION_H



#import "HDCloudSyncOperation.h"

@interface HDCloudSyncIgnoredErrorsOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation; // ivar: _operation


+(BOOL)shouldLogAtOperationEnd;
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(id)description;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 operation:(id)arg2 ;
-(void)main;
-(void)skip;


@end


#endif