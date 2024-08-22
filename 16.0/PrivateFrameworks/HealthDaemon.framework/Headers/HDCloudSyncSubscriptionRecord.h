// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCSUBSCRIPTIONRECORD_H
#define HDCLOUDSYNCSUBSCRIPTIONRECORD_H



#import "HDCloudSyncRecord.h"

@interface HDCloudSyncSubscriptionRecord : HDCloudSyncRecord



+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isSubscriptionRecord:(id)arg0 ;
+(id)recordForZoneID:(id)arg0 ;
+(id)recordIDWithZoneID:(id)arg0 ;
+(id)recordIDsWithZoneID:(id)arg0 ;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)printDescription;


@end


#endif