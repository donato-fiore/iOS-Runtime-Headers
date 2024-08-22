// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPSEARCHABLEITEMVERSION_H
#define FPSEARCHABLEITEMVERSION_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface FPSearchableItemVersion : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *contentVersion; // ivar: _contentVersion
@property (readonly, nonatomic) BOOL hasContentVersion;
@property (readonly, nonatomic) BOOL hasMetadataVersion;
@property (retain, nonatomic) NSData *metadataVersion; // ivar: _metadataVersion


+(id)stringFromVersion:(id)arg0 ;
+(id)versionFromString:(id)arg0 ;
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