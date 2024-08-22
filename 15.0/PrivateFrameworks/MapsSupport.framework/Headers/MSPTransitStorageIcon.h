// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPTRANSITSTORAGEICON_H
#define MSPTRANSITSTORAGEICON_H

@class PBCodable, PBUnknownFields, NSString, GEOStyleAttributes;
@protocol GEOTransitIconDataSource, NSCopying;



@interface MSPTransitStorageIcon : PBCodable <GEOTransitIconDataSource, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (readonly, nonatomic) unsigned int cartoID;
@property (nonatomic) unsigned int cartoID; // ivar: _cartoID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int defaultTransitType;
@property (nonatomic) unsigned int defaultTransitType; // ivar: _defaultTransitType
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCartoID;
@property (nonatomic) BOOL hasDefaultTransitType;
@property (nonatomic) BOOL hasIconAttributeKey;
@property (nonatomic) BOOL hasIconAttributeValue;
@property (nonatomic) BOOL hasIconType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int iconAttributeKey;
@property (nonatomic) unsigned int iconAttributeKey; // ivar: _iconAttributeKey
@property (readonly, nonatomic) unsigned int iconAttributeValue;
@property (nonatomic) unsigned int iconAttributeValue; // ivar: _iconAttributeValue
@property (readonly, nonatomic) int iconType;
@property (nonatomic) int iconType; // ivar: _iconType
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)iconTypeAsString:(int)arg0 ;
-(id)initWithIcon:(id)arg0 ;
-(int)StringAsIconType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif