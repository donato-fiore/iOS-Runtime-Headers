// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKQUERYSUBSCRIPTION_H
#define CKQUERYSUBSCRIPTION_H

@class NSPredicate, NSString;
@protocol NSSecureCoding, NSCopying;


#import "CKSubscription.h"
#import "CKRecordZoneID.h"

@interface CKQuerySubscription : CKSubscription <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) NSUInteger querySubscriptionOptions; // ivar: _querySubscriptionOptions
@property (readonly, copy, nonatomic) NSString *recordType;
@property (copy) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 predicate:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithRecordType:(id)arg0 predicate:(id)arg1 subscriptionID:(id)arg2 options:(NSUInteger)arg3 ;
-(void)_validateQuerySubscriptionOptions:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif