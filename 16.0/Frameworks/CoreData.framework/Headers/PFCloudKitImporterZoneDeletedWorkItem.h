// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCLOUDKITIMPORTERZONEDELETEDWORKITEM_H
#define PFCLOUDKITIMPORTERZONEDELETEDWORKITEM_H

@class CKRecordZoneID;


#import "PFCloudKitImporterWorkItem.h"

@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem {
    CKRecordZoneID *_deletedRecordZoneID;
}




-(id)description;
-(id)initWithDeletedRecordZoneID:(id)arg0 options:(id)arg1 request:(id)arg2 ;
-(void)dealloc;
-(void)doWorkForStore:(id)arg0 inMonitor:(id)arg1 completion:(id)arg2 ;


@end


#endif