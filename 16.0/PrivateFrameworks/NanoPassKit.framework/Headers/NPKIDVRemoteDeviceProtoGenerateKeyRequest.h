// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKIDVREMOTEDEVICEPROTOGENERATEKEYREQUEST_H
#define NPKIDVREMOTEDEVICEPROTOGENERATEKEYREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoGenerateKeyRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *configuredPartitionsIdentifiers; // ivar: _configuredPartitionsIdentifiers
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (readonly, nonatomic) BOOL hasKeyTypeString;
@property (retain, nonatomic) NSString *keyTypeString; // ivar: _keyTypeString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)configuredPartitionsIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addConfiguredPartitionsIdentifiers:(id)arg0 ;
-(void)clearConfiguredPartitionsIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif