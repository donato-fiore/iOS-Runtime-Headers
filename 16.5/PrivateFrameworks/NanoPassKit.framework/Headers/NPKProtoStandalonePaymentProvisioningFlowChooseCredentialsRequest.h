// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWCHOOSECREDENTIALSREQUEST_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWCHOOSECREDENTIALSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoStandaloneRequestHeader.h"

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *chosenPaymentCredentialIdentifiers; // ivar: _chosenPaymentCredentialIdentifiers
@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // ivar: _requestHeader


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)chosenPaymentCredentialIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addChosenPaymentCredentialIdentifiers:(id)arg0 ;
-(void)clearChosenPaymentCredentialIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif