// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKIDVREMOTEDEVICEPROTOGENERATEPRESENTMENTKEYSREQUEST_H
#define NPKIDVREMOTEDEVICEPROTOGENERATEPRESENTMENTKEYSREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoGeneratePresentmentKeysRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *configuredPartitionsIdentifiers; // ivar: _configuredPartitionsIdentifiers
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (nonatomic) BOOL hasNumKeys;
@property (nonatomic) unsigned int numKeys; // ivar: _numKeys


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