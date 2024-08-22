// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALNLUREQUESTRULE_H
#define SIRINLUINTERNALNLUREQUESTRULE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALNluRequestRule : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (readonly, nonatomic) BOOL hasDeviceType;
@property (readonly, nonatomic) BOOL hasIdA;
@property (readonly, nonatomic) BOOL hasLocaleId;
@property (readonly, nonatomic) BOOL hasUserInterfaceIdiom;
@property (retain, nonatomic) NSString *idA; // ivar: _idA
@property (retain, nonatomic) NSString *localeId; // ivar: _localeId
@property (retain, nonatomic) NSMutableArray *turnInputRules; // ivar: _turnInputRules
@property (retain, nonatomic) NSString *userInterfaceIdiom; // ivar: _userInterfaceIdiom


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)turnInputRulesAtIndex:(NSUInteger)arg0 ;
-(void)addTurnInputRules:(id)arg0 ;
-(void)clearTurnInputRules;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif