// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOCONFLICTINGEXPRESSPASSIDENTIFIERSFORPASSINFORMATIONRESPONSE_H
#define NPKPROTOCONFLICTINGEXPRESSPASSIDENTIFIERSFORPASSINFORMATIONRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *conflictingExpressPassIdentifiers; // ivar: _conflictingExpressPassIdentifiers
@property (retain, nonatomic) NSMutableArray *conflictingReferenceExpressPassIdentifiers; // ivar: _conflictingReferenceExpressPassIdentifiers
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending; // ivar: _pending


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)conflictingExpressPassIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)conflictingReferenceExpressPassIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addConflictingExpressPassIdentifiers:(id)arg0 ;
-(void)addConflictingReferenceExpressPassIdentifiers:(id)arg0 ;
-(void)clearConflictingExpressPassIdentifiers;
-(void)clearConflictingReferenceExpressPassIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif