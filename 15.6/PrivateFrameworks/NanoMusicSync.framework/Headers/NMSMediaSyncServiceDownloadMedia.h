// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIASYNCSERVICEDOWNLOADMEDIA_H
#define NMSMEDIASYNCSERVICEDOWNLOADMEDIA_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NMSMediaSyncServiceDownloadMedia : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int containerType; // ivar: _containerType
@property (retain, nonatomic) NSData *dataMultiverseID; // ivar: _dataMultiverseID
@property (nonatomic) BOOL hasContainerType;
@property (readonly, nonatomic) BOOL hasDataMultiverseID;
@property (nonatomic) BOOL hasIntent;
@property (nonatomic) int intent; // ivar: _intent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)intentAsString:(int)arg0 ;
-(int)StringAsContainerType:(id)arg0 ;
-(int)StringAsIntent:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif