// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOREMOVEEXPRESSPASSWITHUNIQUEIDENTIFIERRESPONSE_H
#define NPKPROTOREMOVEEXPRESSPASSWITHUNIQUEIDENTIFIERRESPONSE_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoRemoveExpressPassWithUniqueIdentifierResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *actualExpressPassInformation; // ivar: _actualExpressPassInformation
@property (retain, nonatomic) NSMutableArray *currentExpressPassesInformations; // ivar: _currentExpressPassesInformations
@property (readonly, nonatomic) BOOL hasActualExpressPassInformation;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL pending; // ivar: _pending
@property (nonatomic) BOOL success; // ivar: _success


+(Class)currentExpressPassesInformationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentExpressPassesInformationAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCurrentExpressPassesInformation:(id)arg0 ;
-(void)clearCurrentExpressPassesInformations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif