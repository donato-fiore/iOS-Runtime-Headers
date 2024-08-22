// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWSECONDARYMANUALENTRYSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWSECONDARYMANUALENTRYSTEPCONTEXT_H

@class PBCodable;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentCredentialUnion.h"
#import "NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext.h"
#import "NPKProtoStandalonePaymentRemoteCredential.h"

@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowsAddingDifferentCard; // ivar: _allowsAddingDifferentCard
@property (retain, nonatomic) NPKProtoStandalonePaymentCredentialUnion *credential; // ivar: _credential
@property (nonatomic) BOOL hasAllowsAddingDifferentCard;
@property (readonly, nonatomic) BOOL hasCredential;
@property (readonly, nonatomic) BOOL hasRemoteCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext; // ivar: _manualEntryStepContext
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