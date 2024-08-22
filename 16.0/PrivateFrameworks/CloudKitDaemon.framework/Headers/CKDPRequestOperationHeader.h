// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPREQUESTOPERATIONHEADER_H
#define CKDPREQUESTOPERATIONHEADER_H

@class PBCodable, NSMutableArray, NSString, NSData, CKDPIdentifier;
@protocol NSCopying;


#import "CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions.h"
#import "CKDPLocale.h"

@interface CKDPRequestOperationHeader : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *activeThrottlingLabels; // ivar: _activeThrottlingLabels
@property (retain, nonatomic) NSString *applicationBundle; // ivar: _applicationBundle
@property (nonatomic) NSUInteger applicationConfigVersion; // ivar: _applicationConfigVersion
@property (retain, nonatomic) NSString *applicationContainer; // ivar: _applicationContainer
@property (nonatomic) int applicationContainerEnvironment; // ivar: _applicationContainerEnvironment
@property (retain, nonatomic) NSString *applicationVersion; // ivar: _applicationVersion
@property (retain, nonatomic) CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions; // ivar: _assetAuthorizeGetRequestOptions
@property (retain, nonatomic) NSData *clientChangeToken; // ivar: _clientChangeToken
@property (retain, nonatomic) NSString *deviceAssignedName; // ivar: _deviceAssignedName
@property (retain, nonatomic) NSString *deviceHardwareID; // ivar: _deviceHardwareID
@property (retain, nonatomic) NSString *deviceHardwareVersion; // ivar: _deviceHardwareVersion
@property (retain, nonatomic) CKDPIdentifier *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSString *deviceLibraryName; // ivar: _deviceLibraryName
@property (retain, nonatomic) NSString *deviceLibraryVersion; // ivar: _deviceLibraryVersion
@property (nonatomic) NSUInteger deviceProtocolVersion; // ivar: _deviceProtocolVersion
@property (retain, nonatomic) NSString *deviceSerialNumber; // ivar: _deviceSerialNumber
@property (nonatomic) BOOL deviceSoftwareIsAppleInternal; // ivar: _deviceSoftwareIsAppleInternal
@property (retain, nonatomic) NSString *deviceSoftwareVersion; // ivar: _deviceSoftwareVersion
@property (retain, nonatomic) NSString *deviceUDID; // ivar: _deviceUDID
@property (nonatomic) BOOL entitlementsValidated; // ivar: _entitlementsValidated
@property (nonatomic) NSUInteger globalConfigVersion; // ivar: _globalConfigVersion
@property (readonly, nonatomic) BOOL hasApplicationBundle;
@property (nonatomic) BOOL hasApplicationConfigVersion;
@property (readonly, nonatomic) BOOL hasApplicationContainer;
@property (nonatomic) BOOL hasApplicationContainerEnvironment;
@property (readonly, nonatomic) BOOL hasApplicationVersion;
@property (readonly, nonatomic) BOOL hasAssetAuthorizeGetRequestOptions;
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (readonly, nonatomic) BOOL hasDeviceAssignedName;
@property (readonly, nonatomic) BOOL hasDeviceHardwareID;
@property (readonly, nonatomic) BOOL hasDeviceHardwareVersion;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasDeviceLibraryName;
@property (readonly, nonatomic) BOOL hasDeviceLibraryVersion;
@property (nonatomic) BOOL hasDeviceProtocolVersion;
@property (readonly, nonatomic) BOOL hasDeviceSerialNumber;
@property (nonatomic) BOOL hasDeviceSoftwareIsAppleInternal;
@property (readonly, nonatomic) BOOL hasDeviceSoftwareVersion;
@property (readonly, nonatomic) BOOL hasDeviceUDID;
@property (nonatomic) BOOL hasEntitlementsValidated;
@property (nonatomic) BOOL hasGlobalConfigVersion;
@property (nonatomic) BOOL hasIsolationLevel;
@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasMmcsProtocolVersion;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (nonatomic) BOOL hasOperationGroupQuantity;
@property (nonatomic) BOOL hasRequestOriginator;
@property (nonatomic) BOOL hasTargetDatabase;
@property (readonly, nonatomic) BOOL hasUserIDContainerID;
@property (readonly, nonatomic) BOOL hasUserToken;
@property (nonatomic) int isolationLevel; // ivar: _isolationLevel
@property (retain, nonatomic) CKDPLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSString *mmcsProtocolVersion; // ivar: _mmcsProtocolVersion
@property (retain, nonatomic) NSString *operationGroupName; // ivar: _operationGroupName
@property (nonatomic) NSUInteger operationGroupQuantity; // ivar: _operationGroupQuantity
@property (nonatomic) int requestOriginator; // ivar: _requestOriginator
@property (retain, nonatomic) NSMutableArray *serviceIdentityKeyIDs; // ivar: _serviceIdentityKeyIDs
@property (retain, nonatomic) NSMutableArray *supplementalZoneInfos; // ivar: _supplementalZoneInfos
@property (nonatomic) int targetDatabase; // ivar: _targetDatabase
@property (retain, nonatomic) NSString *userIDContainerID; // ivar: _userIDContainerID
@property (retain, nonatomic) NSString *userToken; // ivar: _userToken


+(Class)activeThrottlingLabelType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeThrottlingLabelAtIndex:(NSUInteger)arg0 ;
-(id)applicationContainerEnvironmentAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)isolationLevelAsString:(int)arg0 ;
-(id)requestOriginatorAsString:(int)arg0 ;
-(id)serviceIdentityKeyIDsAtIndex:(NSUInteger)arg0 ;
-(id)supplementalZoneInfosAtIndex:(NSUInteger)arg0 ;
-(id)targetDatabaseAsString:(int)arg0 ;
-(int)StringAsApplicationContainerEnvironment:(id)arg0 ;
-(int)StringAsIsolationLevel:(id)arg0 ;
-(int)StringAsRequestOriginator:(id)arg0 ;
-(int)StringAsTargetDatabase:(id)arg0 ;
-(void)addActiveThrottlingLabel:(id)arg0 ;
-(void)addServiceIdentityKeyIDs:(id)arg0 ;
-(void)addSupplementalZoneInfos:(id)arg0 ;
-(void)clearActiveThrottlingLabels;
-(void)clearServiceIdentityKeyIDs;
-(void)clearSupplementalZoneInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif