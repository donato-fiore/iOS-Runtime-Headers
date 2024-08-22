// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGEVENTDIRECTIONSREQUESTDETAILS_H
#define GEOLOGMSGEVENTDIRECTIONSREQUESTDETAILS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable <NSCopying>

 {
    int _destination;
    int _origin;
    int _purpose;
    BOOL _navStarted;
    ? _flags;
}


@property (nonatomic) int destination;
@property (nonatomic) BOOL hasDestination;
@property (nonatomic) BOOL hasNavStarted;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) BOOL navStarted;
@property (nonatomic) int origin;
@property (nonatomic) int purpose;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)originAsString:(int)arg0 ;
-(id)purposeAsString:(int)arg0 ;
-(int)StringAsDestination:(id)arg0 ;
-(int)StringAsOrigin:(id)arg0 ;
-(int)StringAsPurpose:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif