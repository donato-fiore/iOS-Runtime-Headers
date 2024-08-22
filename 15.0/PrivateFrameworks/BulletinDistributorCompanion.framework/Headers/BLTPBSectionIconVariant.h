// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTPBSECTIONICONVARIANT_H
#define BLTPBSECTIONICONVARIANT_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface BLTPBSectionIconVariant : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int format; // ivar: _format
@property (readonly, nonatomic) BOOL hasImageData;
@property (nonatomic) BOOL hasPrecomposed;
@property (readonly, nonatomic) BOOL hasSystemImageName;
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) BOOL precomposed; // ivar: _precomposed
@property (retain, nonatomic) NSString *systemImageName; // ivar: _systemImageName


+(id)sectionIconVariantWithImageData:(id)arg0 systemImageName:(id)arg1 precomposed:(BOOL)arg2 format:(unsigned int)arg3 ;
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