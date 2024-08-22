// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTCREDENTIALUNION_H
#define NPKPROTOSTANDALONEPAYMENTCREDENTIALUNION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NPKProtoStandaloneCreditAccountCredential.h"
#import "NPKProtoStandalonePaymentRemoteCredential.h"

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying>



@property (retain, nonatomic) NPKProtoStandaloneCreditAccountCredential *creditAccountCredential; // ivar: _creditAccountCredential
@property (retain, nonatomic) NSString *flowIdentifier; // ivar: _flowIdentifier
@property (readonly, nonatomic) BOOL hasCreditAccountCredential;
@property (readonly, nonatomic) BOOL hasFlowIdentifier;
@property (readonly, nonatomic) BOOL hasRemoteCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential; // ivar: _remoteCredential


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif