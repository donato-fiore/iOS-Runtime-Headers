// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEPBEVENT_H
#define ATXMODEPBEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXModePBEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) BOOL hasIsStart;
@property (readonly, nonatomic) BOOL hasJsonMeta;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasOriginBundleId;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasStrValue;
@property (nonatomic) int intValue; // ivar: _intValue
@property (nonatomic) BOOL isStart; // ivar: _isStart
@property (retain, nonatomic) NSString *jsonMeta; // ivar: _jsonMeta
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) int origin; // ivar: _origin
@property (retain, nonatomic) NSString *originBundleId; // ivar: _originBundleId
@property (nonatomic) CGFloat startDate; // ivar: _startDate
@property (retain, nonatomic) NSString *strValue; // ivar: _strValue
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)modeAsString:(int)arg0 ;
-(id)originAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsMode:(id)arg0 ;
-(int)StringAsOrigin:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif