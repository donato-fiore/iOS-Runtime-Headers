// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWCHOOSECREDENTIALSSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWCHOOSECREDENTIALSSTEPCONTEXT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowsManualEntry; // ivar: _allowsManualEntry
@property (retain, nonatomic) NSMutableArray *credentials; // ivar: _credentials
@property (nonatomic) BOOL hasAllowsManualEntry;
@property (retain, nonatomic) NSMutableArray *remoteCredentials; // ivar: _remoteCredentials


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)remoteCredentialsAtIndex:(NSUInteger)arg0 ;
-(void)addCredentials:(id)arg0 ;
-(void)addRemoteCredentials:(id)arg0 ;
-(void)clearCredentials;
-(void)clearRemoteCredentials;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif