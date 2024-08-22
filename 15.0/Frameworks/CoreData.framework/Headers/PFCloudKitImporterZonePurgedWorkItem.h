// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITIMPORTERZONEPURGEDWORKITEM_H
#define PFCLOUDKITIMPORTERZONEPURGEDWORKITEM_H

@class CKRecordZoneID;


#import "PFCloudKitImporterWorkItem.h"

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {
    CKRecordZoneID *_purgedRecordZoneID;
}




-(id)description;
-(id)initWithPurgedRecordZoneID:(id)arg0 options:(id)arg1 request:(id)arg2 ;
-(void)dealloc;
-(void)doWorkForStore:(id)arg0 inMonitor:(id)arg1 completion:(id)arg2 ;


@end


#endif