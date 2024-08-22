// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCDELETESEQUENCEOPERATION_H
#define HDCLOUDSYNCDELETESEQUENCEOPERATION_H

@class NSDictionary;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncDeleteSequenceOperation : HDCloudSyncOperation {
    NSDictionary *_targetsBySequence;
}




-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 targetsBySequence:(id)arg1 ;
-(void)main;


@end


#endif