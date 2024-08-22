// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HWPMESSAGE_H
#define HWPMESSAGE_H

@class PBCodable, PBUnknownFields, NSData, NSString;
@protocol NSCopying;



@interface HWPMessage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (nonatomic) NSInteger creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSData *drawing; // ivar: _drawing
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasDrawing;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int version; // ivar: _version


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