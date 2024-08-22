// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCDISABLEANDDELETEOPERATION_H
#define HDCLOUDSYNCDISABLEANDDELETEOPERATION_H



#import "HDCloudSyncOperation.h"

@interface HDCloudSyncDisableAndDeleteOperation : HDCloudSyncOperation



-(BOOL)_isSecureSecondaryContainer:(id)arg0 ;
-(id)_createZonesOperationForContainer:(id)arg0 ;
-(id)_deleteUnifiedZoneRecordsOperationForContainer:(id)arg0 zones:(id)arg1 ;
-(id)_deleteZonesOperationForContainer:(id)arg0 zones:(id)arg1 ;
-(id)_leaveSharesOperationForContainer:(id)arg0 ;
-(void)main;


@end


#endif