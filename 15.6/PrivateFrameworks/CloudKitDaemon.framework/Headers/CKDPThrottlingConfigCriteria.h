// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPTHROTTLINGCONFIGCRITERIA_H
#define CKDPTHROTTLINGCONFIGCRITERIA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CKDPThrottlingConfigCriteria : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) int containerEnvironment; // ivar: _containerEnvironment
@property (retain, nonatomic) NSString *containerName; // ivar: _containerName
@property (nonatomic) int databaseType; // ivar: _databaseType
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasContainerEnvironment;
@property (readonly, nonatomic) BOOL hasContainerName;
@property (nonatomic) BOOL hasDatabaseType;
@property (readonly, nonatomic) BOOL hasInvernessFunctionName;
@property (readonly, nonatomic) BOOL hasInvernessServiceName;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (nonatomic) BOOL hasOperationType;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSString *invernessFunctionName; // ivar: _invernessFunctionName
@property (retain, nonatomic) NSString *invernessServiceName; // ivar: _invernessServiceName
@property (retain, nonatomic) NSString *operationGroupName; // ivar: _operationGroupName
@property (nonatomic) int operationType; // ivar: _operationType
@property (retain, nonatomic) NSString *zoneName; // ivar: _zoneName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerEnvironmentAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)databaseTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)operationTypeAsString:(int)arg0 ;
-(int)StringAsContainerEnvironment:(id)arg0 ;
-(int)StringAsDatabaseType:(id)arg0 ;
-(int)StringAsOperationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif