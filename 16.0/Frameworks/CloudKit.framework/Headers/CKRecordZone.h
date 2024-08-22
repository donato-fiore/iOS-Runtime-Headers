// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRECORDZONE_H
#define CKRECORDZONE_H

@class NSData, NSString, NSDate, NSArray, NSNumber;
@protocol CKPropertiesDescription, CKContainerAssignment, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKContainerID.h"
#import "CKServerChangeToken.h"
#import "CKReference.h"
#import "CKRecordZoneID.h"

@interface CKRecordZone : NSObject <CKPropertiesDescription, CKContainerAssignment, NSSecureCoding, NSCopying>

 {
    CKContainerID *_containerID;
}


@property (nonatomic) NSInteger assetQuotaUsage; // ivar: _assetQuotaUsage
@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (retain, nonatomic) NSData *clientChangeToken; // ivar: _clientChangeToken
@property (retain, nonatomic) CKServerChangeToken *currentServerChangeToken; // ivar: _currentServerChangeToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceCount; // ivar: _deviceCount
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired; // ivar: _expired
@property (nonatomic) BOOL hasUpdatedExpirationTimeInterval; // ivar: _hasUpdatedExpirationTimeInterval
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *invitedKeysToRemove; // ivar: _invitedKeysToRemove
@property (nonatomic) NSInteger metadataQuotaUsage; // ivar: _metadataQuotaUsage
@property (nonatomic) BOOL needsZoneishPCSRolled; // ivar: _needsZoneishPCSRolled
@property (retain, nonatomic) NSData *pcsKeyID; // ivar: _pcsKeyID
@property (retain, nonatomic) NSString *previousProtectionEtag; // ivar: _previousProtectionEtag
@property (retain, nonatomic) NSData *protectionData; // ivar: _protectionData
@property (retain, nonatomic) NSString *protectionEtag; // ivar: _protectionEtag
@property (nonatomic) BOOL serializeProtectionData; // ivar: _serializeProtectionData
@property (copy, nonatomic) CKReference *share; // ivar: _share
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *updatedExpirationTimeInterval; // ivar: _updatedExpirationTimeInterval
@property (copy, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID
@property (nonatomic) BOOL zoneKeyRollAllowed; // ivar: _zoneKeyRollAllowed
@property (retain, nonatomic) NSString *zonePCSLastModifierDevice; // ivar: _zonePCSLastModifierDevice
@property (retain, nonatomic) NSDate *zonePCSModificationDate; // ivar: _zonePCSModificationDate
@property (retain, nonatomic) NSData *zoneishKeyID; // ivar: _zoneishKeyID
@property (retain, nonatomic) NSData *zoneishProtectionData; // ivar: _zoneishProtectionData


+(BOOL)supportsSecureCoding;
+(id)defaultRecordZone;
+(id)systemRecordZone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneID:(id)arg0 ;
-(id)initWithZoneName:(id)arg0 ;
-(id)redactedDescription;
-(void)CKAssignToContainerWithID:(id)arg0 ;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setExpirationAfterTimeInterval:(id)arg0 ;


@end


#endif