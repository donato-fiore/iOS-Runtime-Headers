// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOGENTRYVISIONLSLHEADINGESTIMATION_H
#define CLPLOGENTRYVISIONLSLHEADINGESTIMATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CLPLOGENTRYVISIONLSLHeadingEstimation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasStatusDEPRECATED;
@property (retain, nonatomic) NSMutableArray *headings; // ivar: _headings
@property (nonatomic) int status; // ivar: _status
@property (nonatomic) int statusDEPRECATED; // ivar: _statusDEPRECATED


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)headingsAtIndex:(NSUInteger)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(id)statusDEPRECATEDAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)StringAsStatusDEPRECATED:(id)arg0 ;
-(void)addHeadings:(id)arg0 ;
-(void)clearHeadings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif