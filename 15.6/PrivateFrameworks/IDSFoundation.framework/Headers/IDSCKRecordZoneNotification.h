// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCKRECORDZONENOTIFICATION_H
#define IDSCKRECORDZONENOTIFICATION_H



#import "IDSCKNotification.h"
#import "IDSCKRecordZoneID.h"

@interface IDSCKRecordZoneNotification : IDSCKNotification

@property (readonly, copy, nonatomic) IDSCKRecordZoneID *recordZoneID; // ivar: _recordZoneID


+(Class)__class;
+(id)alloc;


@end


#endif