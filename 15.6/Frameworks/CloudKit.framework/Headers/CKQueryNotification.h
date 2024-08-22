// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKQUERYNOTIFICATION_H
#define CKQUERYNOTIFICATION_H

@class NSDictionary;
@protocol NSSecureCoding;


#import "CKNotification.h"
#import "CKRecordID.h"

@interface CKQueryNotification : CKNotification <NSSecureCoding>



@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (nonatomic) NSInteger queryNotificationReason; // ivar: _queryNotificationReason
@property (copy, nonatomic) NSDictionary *recordFields; // ivar: _recordFields
@property (copy, nonatomic) CKRecordID *recordID; // ivar: _recordID


+(BOOL)supportsSecureCoding;
-(BOOL)isPublicDatabase;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRemoteNotificationDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif