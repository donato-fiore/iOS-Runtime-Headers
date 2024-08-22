// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWRESPONSE_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentProvisioningFlowStepContext.h"
#import "NPKProtoStandaloneResponseHeader.h"

@interface NPKProtoStandalonePaymentProvisioningFlowResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowStepContext *context; // ivar: _context
@property (nonatomic) int fromStep; // ivar: _fromStep
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // ivar: _responseHeader
@property (nonatomic) int toStep; // ivar: _toStep


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fromStepAsString:(int)arg0 ;
-(id)toStepAsString:(int)arg0 ;
-(int)StringAsFromStep:(id)arg0 ;
-(int)StringAsToStep:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif