// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDZONEINFORMATION_H
#define HMDCLOUDZONEINFORMATION_H

@class HMFObject, NSString, NSUUID;
@protocol NSSecureCoding, HMDBackingStoreObjectProtocol;



@interface HMDCloudZoneInformation : HMFObject <NSSecureCoding, HMDBackingStoreObjectProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=didFetchFailed) BOOL fetchFailed; // ivar: _fetchFailed
@property (nonatomic, getter=isFirstFetch) BOOL firstFetch; // ivar: _firstFetch
@property (nonatomic, getter=doesHandlesCloudRecord) BOOL handlesCloudRecord; // ivar: _handlesCloudRecord
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic, getter=isZoneCreated) BOOL zoneCreated; // ivar: _zoneCreated


+(BOOL)supportsSecureCoding;
+(id)cloudZoneInformationWithCloudZones:(id)arg0 ;
+(id)cloudZonesArrayWithCloudZones:(id)arg0 ;
+(id)cloudZonesWithDictionary:(id)arg0 ;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)emptyModelObjectWithChangeType:(NSUInteger)arg0 parent:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOwnerName:(id)arg0 uuid:(id)arg1 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 parent:(id)arg1 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 parent:(id)arg2 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateCloudZoneInformationWithModel:(id)arg0 message:(id)arg1 ;


@end


#endif