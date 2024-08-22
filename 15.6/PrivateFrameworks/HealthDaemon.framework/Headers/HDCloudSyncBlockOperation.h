// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCBLOCKOPERATION_H
#define HDCLOUDSYNCBLOCKOPERATION_H



#import "HDCloudSyncOperation.h"

@interface HDCloudSyncBlockOperation : HDCloudSyncOperation {
    id *_block;
}




-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 block:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 synchronousBlock:(id)arg2 ;
-(void)main;
-(void)skip;


@end


#endif