// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWREADERMODEINGESTIONSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWREADERMODEINGESTIONSTEPCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIngestionProgress;
@property (nonatomic) BOOL hasIngestionState;
@property (readonly, nonatomic) BOOL hasPhysicalCardImageURL;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) float ingestionProgress; // ivar: _ingestionProgress
@property (nonatomic) int ingestionState; // ivar: _ingestionState
@property (retain, nonatomic) NSString *physicalCardImageURL; // ivar: _physicalCardImageURL
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ingestionStateAsString:(int)arg0 ;
-(int)StringAsIngestionState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif