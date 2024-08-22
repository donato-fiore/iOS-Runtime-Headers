// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALSSUSSUREQUEST_H
#define SIRINLUINTERNALSSUSSUREQUEST_H

@class PBRequest, NSString, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALSSUSSURequest : PBRequest <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // ivar: _asrId
@property (readonly, nonatomic) BOOL hasAsrId;
@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSMutableArray *matchingSpans; // ivar: _matchingSpans
@property (retain, nonatomic) NSMutableArray *salientEntities; // ivar: _salientEntities
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)matchingSpansAtIndex:(NSUInteger)arg0 ;
-(id)salientEntitiesAtIndex:(NSUInteger)arg0 ;
-(void)addMatchingSpans:(id)arg0 ;
-(void)addSalientEntities:(id)arg0 ;
-(void)clearMatchingSpans;
-(void)clearSalientEntities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif