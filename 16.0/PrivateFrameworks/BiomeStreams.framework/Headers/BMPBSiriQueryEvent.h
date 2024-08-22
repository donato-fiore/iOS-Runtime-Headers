// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBSIRIQUERYEVENT_H
#define BMPBSIRIQUERYEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBSiriQueryEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasQuery;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)clearResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif