// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSTAT_H
#define CSTAT_H

@class PBCodable;
@protocol NSCopying;



@interface CStat : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activeDurMs; // ivar: _activeDurMs
@property (nonatomic) BOOL hasActiveDurMs;
@property (nonatomic) BOOL hasIdent;
@property (nonatomic) BOOL hasIdleDurMs;
@property (nonatomic) BOOL hasSleepDurMs;
@property (nonatomic) BOOL hasSleepEntryCount;
@property (nonatomic) unsigned int ident; // ivar: _ident
@property (nonatomic) unsigned int idleDurMs; // ivar: _idleDurMs
@property (nonatomic) unsigned int sleepDurMs; // ivar: _sleepDurMs
@property (nonatomic) unsigned int sleepEntryCount; // ivar: _sleepEntryCount


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