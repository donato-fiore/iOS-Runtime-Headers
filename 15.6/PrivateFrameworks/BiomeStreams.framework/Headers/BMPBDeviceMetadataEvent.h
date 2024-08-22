// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBDEVICEMETADATAEVENT_H
#define BMPBDEVICEMETADATAEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBDeviceMetadataEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *build; // ivar: _build
@property (readonly, nonatomic) BOOL hasBuild;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasPlatform;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int platform; // ivar: _platform


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)platformAsString:(int)arg0 ;
-(int)StringAsPlatform:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif