// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPROTOAUDIOFILEPLAYERASSETUPDATEMETADATA_H
#define SPPROTOAUDIOFILEPLAYERASSETUPDATEMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SPProtoAudioFilePlayerAssetUpdateMetaData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasAlbumTitle;
@property (readonly, nonatomic) BOOL hasArtist;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasSandboxExtensionToken;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasURL;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *sandboxExtensionToken; // ivar: _sandboxExtensionToken
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uRL; // ivar: _uRL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sockPuppetMessage;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif