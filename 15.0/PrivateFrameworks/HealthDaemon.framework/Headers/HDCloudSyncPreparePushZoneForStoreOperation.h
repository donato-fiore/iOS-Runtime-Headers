// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCPREPAREPUSHZONEFORSTOREOPERATION_H
#define HDCLOUDSYNCPREPAREPUSHZONEFORSTOREOPERATION_H



#import "HDCloudSyncOperation.h"
#import "HDCloudSyncStore.h"
#import "HDCloudSyncTarget.h"

@interface HDCloudSyncPreparePushZoneForStoreOperation : HDCloudSyncOperation {
    HDCloudSyncStore *_store;
}


@property (readonly, nonatomic) HDCloudSyncTarget *pushTarget; // ivar: _pushTarget


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 store:(id)arg2 ;
-(void)main;


@end


#endif