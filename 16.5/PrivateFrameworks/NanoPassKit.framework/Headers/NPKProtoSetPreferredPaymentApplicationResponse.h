// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSETPREFERREDPAYMENTAPPLICATIONRESPONSE_H
#define NPKPROTOSETPREFERREDPAYMENTAPPLICATIONRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NPKProtoSetPreferredPaymentApplicationResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPassID;
@property (readonly, nonatomic) BOOL hasPreferredApplicationAID;
@property (retain, nonatomic) NSString *passID; // ivar: _passID
@property (retain, nonatomic) NSString *preferredApplicationAID; // ivar: _preferredApplicationAID


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