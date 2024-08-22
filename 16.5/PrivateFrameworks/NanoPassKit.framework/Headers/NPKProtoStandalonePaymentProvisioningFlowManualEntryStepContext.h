// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWMANUALENTRYSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWMANUALENTRYSTEPCONTEXT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL cameraFirstProvisioningEnabled; // ivar: _cameraFirstProvisioningEnabled
@property (nonatomic) BOOL hasCameraFirstProvisioningEnabled;
@property (retain, nonatomic) NSMutableArray *setupFields; // ivar: _setupFields


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)setupFieldsAtIndex:(NSUInteger)arg0 ;
-(void)addSetupFields:(id)arg0 ;
-(void)clearSetupFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif