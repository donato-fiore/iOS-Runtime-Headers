// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKRECORDZONESUBSCRIPTION_H
#define CKRECORDZONESUBSCRIPTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "CKSubscription.h"
#import "CKRecordZoneID.h"

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>



@property (copy) NSString *recordType;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneID:(id)arg0 ;
-(id)initWithZoneID:(id)arg0 subscriptionID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif