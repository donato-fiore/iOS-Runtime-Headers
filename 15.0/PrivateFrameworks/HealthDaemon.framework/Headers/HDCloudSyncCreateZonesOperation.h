// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCCREATEZONESOPERATION_H
#define HDCLOUDSYNCCREATEZONESOPERATION_H

@class CKContainer, NSArray;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncCreateZonesOperation : HDCloudSyncOperation {
    CKContainer *_container;
    NSArray *_zones;
}




+(BOOL)shouldLogAtOperationStart;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 zones:(id)arg2 container:(id)arg3 ;
-(void)main;


@end


#endif