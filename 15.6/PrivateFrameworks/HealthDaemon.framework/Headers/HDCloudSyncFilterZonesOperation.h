// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCFILTERZONESOPERATION_H
#define HDCLOUDSYNCFILTERZONESOPERATION_H

@class NSString;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncFilterZonesOperation : HDCloudSyncOperation {
    NSString *_syncCircleIdentifier;
    NSString *_zoneOwner;
}




-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 zoneOwner:(id)arg2 ;
-(void)main;


@end


#endif