// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOPAYMENTSETUPFEATURESFORCONFIGURATIONRESPONSE_H
#define NPKPROTOPAYMENTSETUPFEATURESFORCONFIGURATIONRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoPaymentSetupFeaturesForConfigurationResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *paymentSetupFeatureDatas; // ivar: _paymentSetupFeatureDatas


+(Class)paymentSetupFeatureDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paymentSetupFeatureDataAtIndex:(NSUInteger)arg0 ;
-(void)addPaymentSetupFeatureData:(id)arg0 ;
-(void)clearPaymentSetupFeatureDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif