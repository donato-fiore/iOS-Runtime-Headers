// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWDIDENCOUNTERERRORRESPONSE_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWDIDENCOUNTERERRORRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "NPKProtoStandaloneError.h"
#import "NPKProtoStandaloneResponseHeader.h"

@interface NPKProtoStandalonePaymentProvisioningFlowDidEncounterErrorResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NPKProtoStandaloneError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // ivar: _responseHeader


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