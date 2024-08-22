// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCLOUDSTOREZONE_H
#define PKCLOUDSTOREZONE_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCloudStoreZone : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *containerName; // ivar: _containerName
@property (copy, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (nonatomic) NSInteger scope; // ivar: _scope
@property (copy, nonatomic) NSSet *shareParticipants; // ivar: _shareParticipants
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName
@property (retain, nonatomic) NSString *zoneSubscriptionIdentifier; // ivar: _zoneSubscriptionIdentifier


+(BOOL)supportsSecureCoding;
+(void)zoneValueForZoneName:(id)arg0 outZoneType:(*NSUInteger)arg1 outAccountIdentifier:(*id)arg2 altDSID:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)zoneType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneID:(id)arg0 containerDatabase:(id)arg1 ;
-(id)initWithZoneID:(id)arg0 containerName:(id)arg1 scope:(NSInteger)arg2 ;
-(id)recordZone;
-(id)shareParticipantWithHandle:(id)arg0 ;
-(id)shareParticipantWithLookupInfo:(id)arg0 ;
-(id)zoneSubscription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif