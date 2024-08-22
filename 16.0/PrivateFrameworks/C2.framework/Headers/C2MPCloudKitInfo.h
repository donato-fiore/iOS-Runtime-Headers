// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2MPCLOUDKITINFO_H
#define C2MPCLOUDKITINFO_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface C2MPCloudKitInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL anonymous; // ivar: _anonymous
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (retain, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (retain, nonatomic) NSString *clientBundleId; // ivar: _clientBundleId
@property (retain, nonatomic) NSMutableArray *clientOperations; // ivar: _clientOperations
@property (retain, nonatomic) NSString *clientProcessVersion; // ivar: _clientProcessVersion
@property (retain, nonatomic) NSString *container; // ivar: _container
@property (retain, nonatomic) NSString *containerScopedDeviceIdentifier; // ivar: _containerScopedDeviceIdentifier
@property (retain, nonatomic) NSString *containerScopedUserIdentifier; // ivar: _containerScopedUserIdentifier
@property (retain, nonatomic) NSString *databaseScope; // ivar: _databaseScope
@property (retain, nonatomic) NSString *environment; // ivar: _environment
@property (nonatomic) BOOL hasAnonymous;
@property (readonly, nonatomic) BOOL hasApplicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, nonatomic) BOOL hasApplicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (readonly, nonatomic) BOOL hasClientProcessVersion;
@property (readonly, nonatomic) BOOL hasContainer;
@property (readonly, nonatomic) BOOL hasContainerScopedDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasContainerScopedUserIdentifier;
@property (readonly, nonatomic) BOOL hasDatabaseScope;
@property (readonly, nonatomic) BOOL hasEnvironment;
@property (nonatomic) BOOL hasReportClientOperationFrequency;
@property (nonatomic) BOOL hasReportClientOperationFrequencyBase;
@property (nonatomic) BOOL hasReportOperationGroupFrequency;
@property (nonatomic) BOOL hasReportOperationGroupFrequencyBase;
@property (retain, nonatomic) NSMutableArray *operationGroups; // ivar: _operationGroups
@property (nonatomic) NSUInteger reportClientOperationFrequency; // ivar: _reportClientOperationFrequency
@property (nonatomic) NSUInteger reportClientOperationFrequencyBase; // ivar: _reportClientOperationFrequencyBase
@property (nonatomic) NSUInteger reportOperationGroupFrequency; // ivar: _reportOperationGroupFrequency
@property (nonatomic) NSUInteger reportOperationGroupFrequencyBase; // ivar: _reportOperationGroupFrequencyBase


+(Class)clientOperationType;
+(Class)operationGroupType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientOperationAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)operationGroupAtIndex:(NSUInteger)arg0 ;
-(void)addClientOperation:(id)arg0 ;
-(void)addOperationGroup:(id)arg0 ;
-(void)clearClientOperations;
-(void)clearOperationGroups;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif