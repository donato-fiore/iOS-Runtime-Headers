// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSUBSCRIPTION_H
#define CKSUBSCRIPTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKNotificationInfo.h"

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) CKNotificationInfo *notificationInfo; // ivar: _notificationInfo
@property (copy, nonatomic) NSString *recordType; // ivar: _recordType
@property (copy, nonatomic) NSString *subscriptionID; // ivar: _subscriptionID
@property (nonatomic) NSInteger subscriptionType; // ivar: _subscriptionType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)subscriptionOptions;
-(id)_initWithSubscriptionID:(id)arg0 subscriptionType:(NSInteger)arg1 recordType:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 predicate:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithRecordType:(id)arg0 predicate:(id)arg1 subscriptionID:(id)arg2 options:(NSUInteger)arg3 ;
-(id)initWithZoneID:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithZoneID:(id)arg0 subscriptionID:(id)arg1 options:(NSUInteger)arg2 ;
-(id)predicate;
-(id)zoneID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif