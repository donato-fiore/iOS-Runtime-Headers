// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSTAT_H
#define PSTAT_H

@class PBCodable;
@protocol NSCopying;



@interface PStat : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activeDurMs; // ivar: _activeDurMs
@property (nonatomic) BOOL hasActiveDurMs;
@property (nonatomic) BOOL hasIdent;
@property (nonatomic) BOOL hasInactiveDurMs;
@property (nonatomic) BOOL hasSleepBlockCount;
@property (nonatomic) BOOL hasToActiveCount;
@property (nonatomic) unsigned int ident; // ivar: _ident
@property (nonatomic) unsigned int inactiveDurMs; // ivar: _inactiveDurMs
@property (nonatomic) unsigned int sleepBlockCount; // ivar: _sleepBlockCount
@property (nonatomic) unsigned int toActiveCount; // ivar: _toActiveCount


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