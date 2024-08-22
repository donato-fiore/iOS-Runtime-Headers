// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGSTATEACCOUNT_H
#define GEOLOGMSGSTATEACCOUNT_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateAccount : PBCodable <NSCopying>

 {
    ? _possibleActions;
    BOOL _signedIntoIcloud;
    ? _flags;
}


@property (nonatomic) BOOL hasSignedIntoIcloud;
@property (readonly, nonatomic) *int possibleActions;
@property (readonly, nonatomic) NSUInteger possibleActionsCount;
@property (nonatomic) BOOL signedIntoIcloud;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)possibleActionsAsString:(int)arg0 ;
-(int)StringAsPossibleActions:(id)arg0 ;
-(int)possibleActionAtIndex:(NSUInteger)arg0 ;
-(void)addPossibleAction:(int)arg0 ;
-(void)clearPossibleActions;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif