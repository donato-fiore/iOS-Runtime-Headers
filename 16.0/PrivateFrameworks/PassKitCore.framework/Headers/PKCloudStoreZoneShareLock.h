// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCLOUDSTOREZONESHARELOCK_H
#define PKCLOUDSTOREZONESHARELOCK_H

@class NSDate, NSString;
@protocol NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>


@interface PKCloudStoreZoneShareLock : NSObject <NSSecureCoding, PKCloudStoreCoding>



@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *originDeviceIdentifier; // ivar: _originDeviceIdentifier
@property (readonly, copy, nonatomic) NSString *originDeviceName; // ivar: _originDeviceName
@property (readonly, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
+(id)recordNameForZoneName:(id)arg0 ;
+(id)recordNamePrefix;
+(id)zoneNameFromRecordName:(id)arg0 ;
+(void)_deleteDeviceDataFromCloudStoreRecord:(id)arg0 ;
+(void)deleteFromCloudStoreRecord:(id)arg0 codingType:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCloudStoreZoneShareLock:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(id)description;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneName:(id)arg0 creationDate:(id)arg1 originDeviceIdentifier:(id)arg2 originDeviceName:(id)arg3 ;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(void)_encodeDeviceDataForCloudStoreCoder:(id)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif