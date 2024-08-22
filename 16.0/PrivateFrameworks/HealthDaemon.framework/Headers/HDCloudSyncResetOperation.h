// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCRESETOPERATION_H
#define HDCLOUDSYNCRESETOPERATION_H

@class CKContainer;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncResetOperation : HDCloudSyncOperation {
    CKContainer *_container;
}




-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 container:(id)arg2 ;
-(void)main;


@end


#endif