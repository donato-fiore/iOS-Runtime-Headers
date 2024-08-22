// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCDATAUPLOADREQUESTRECORD_H
#define HDCLOUDSYNCDATAUPLOADREQUESTRECORD_H



#import "HDCloudSyncSubscriptionRecord.h"

@interface HDCloudSyncDataUploadRequestRecord : HDCloudSyncSubscriptionRecord



+(BOOL)isDataUploadRequestRecord:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(id)recordForZoneID:(id)arg0 ;
+(id)recordIDWithZoneID:(id)arg0 ;
+(id)recordType;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)printDescription;
-(id)serializeUnderlyingMessage;


@end


#endif