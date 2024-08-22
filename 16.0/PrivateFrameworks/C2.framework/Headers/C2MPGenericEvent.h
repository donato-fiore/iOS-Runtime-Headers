// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2MPGENERICEVENT_H
#define C2MPGENERICEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface C2MPGenericEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasTimestampEnd;
@property (nonatomic) BOOL hasTimestampStart;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSMutableArray *metrics; // ivar: _metrics
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger timestampEnd; // ivar: _timestampEnd
@property (nonatomic) NSUInteger timestampStart; // ivar: _timestampStart
@property (nonatomic) int type; // ivar: _type


+(Class)metricType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)metricAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addMetric:(id)arg0 ;
-(void)clearMetrics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif