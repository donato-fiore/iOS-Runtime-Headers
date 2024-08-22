// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOREMOVEEXPRESSPASSESWITHCARDTYPERESPONSE_H
#define NPKPROTOREMOVEEXPRESSPASSESWITHCARDTYPERESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoRemoveExpressPassesWithCardTypeResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *actualExpressPassInformations; // ivar: _actualExpressPassInformations
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL pending; // ivar: _pending
@property (nonatomic) BOOL success; // ivar: _success


+(Class)actualExpressPassInformationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actualExpressPassInformationAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addActualExpressPassInformation:(id)arg0 ;
-(void)clearActualExpressPassInformations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif