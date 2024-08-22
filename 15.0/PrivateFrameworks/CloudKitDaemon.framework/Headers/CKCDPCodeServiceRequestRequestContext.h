// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCDPCODESERVICEREQUESTREQUESTCONTEXT_H
#define CKCDPCODESERVICEREQUESTREQUESTCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CKCDPCodeServiceRequestDatabaseOwner.h"
#import "CKCDPCodeServiceRequestOperationGroup.h"

@interface CKCDPCodeServiceRequestRequestContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *applicationBundleId; // ivar: _applicationBundleId
@property (retain, nonatomic) NSString *clientInfo; // ivar: _clientInfo
@property (retain, nonatomic) NSString *containerName; // ivar: _containerName
@property (nonatomic) int databaseEnvironment; // ivar: _databaseEnvironment
@property (retain, nonatomic) CKCDPCodeServiceRequestDatabaseOwner *databaseOwnerId; // ivar: _databaseOwnerId
@property (nonatomic) int databaseType; // ivar: _databaseType
@property (retain, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) NSUInteger dsid; // ivar: _dsid
@property (readonly, nonatomic) BOOL hasApplicationBundleId;
@property (readonly, nonatomic) BOOL hasClientInfo;
@property (readonly, nonatomic) BOOL hasContainerName;
@property (nonatomic) BOOL hasDatabaseEnvironment;
@property (readonly, nonatomic) BOOL hasDatabaseOwnerId;
@property (nonatomic) BOOL hasDatabaseType;
@property (readonly, nonatomic) BOOL hasDeviceId;
@property (nonatomic) BOOL hasDsid;
@property (readonly, nonatomic) BOOL hasOperationGroup;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) CKCDPCodeServiceRequestOperationGroup *operationGroup; // ivar: _operationGroup
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent
@property (retain, nonatomic) NSString *userId; // ivar: _userId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)databaseEnvironmentAsString:(int)arg0 ;
-(id)databaseTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsDatabaseEnvironment:(id)arg0 ;
-(int)StringAsDatabaseType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif