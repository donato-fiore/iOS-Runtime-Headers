// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKRECORDZONENOTIFICATION_H
#define CKRECORDZONENOTIFICATION_H

@protocol NSSecureCoding;


#import "CKNotification.h"
#import "CKRecordZoneID.h"

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding>



@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (copy, nonatomic) CKRecordZoneID *recordZoneID; // ivar: _recordZoneID


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRemoteNotificationDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif