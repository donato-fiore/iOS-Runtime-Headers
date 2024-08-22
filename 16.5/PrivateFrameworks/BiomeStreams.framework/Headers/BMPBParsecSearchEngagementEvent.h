// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBPARSECSEARCHENGAGEMENTEVENT_H
#define BMPBPARSECSEARCHENGAGEMENTEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBParsecSearchEngagementEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *completedQuery; // ivar: _completedQuery
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (retain, nonatomic) NSString *domainId; // ivar: _domainId
@property (retain, nonatomic) NSMutableArray *entities; // ivar: _entities
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasCompletedQuery;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (readonly, nonatomic) BOOL hasResultId;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (readonly, nonatomic) BOOL hasUserInput;
@property (retain, nonatomic) NSString *resultId; // ivar: _resultId
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId
@property (retain, nonatomic) NSString *userInput; // ivar: _userInput


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entitiesAtIndex:(NSUInteger)arg0 ;
-(void)addEntities:(id)arg0 ;
-(void)clearEntities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif