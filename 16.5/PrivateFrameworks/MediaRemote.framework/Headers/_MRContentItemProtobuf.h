// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRCONTENTITEMPROTOBUF_H
#define _MRCONTENTITEMPROTOBUF_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "_MRLyricsItemProtobuf.h"
#import "_MRContentItemMetadataProtobuf.h"

@interface _MRContentItemProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *ancestorIdentifier; // ivar: _ancestorIdentifier
@property (retain, nonatomic) NSData *artworkData; // ivar: _artworkData
@property (nonatomic) int artworkDataHeight; // ivar: _artworkDataHeight
@property (nonatomic) int artworkDataWidth; // ivar: _artworkDataWidth
@property (retain, nonatomic) NSString *associatedParticipantIdentifier; // ivar: _associatedParticipantIdentifier
@property (retain, nonatomic) NSMutableArray *availableLanguageOptions; // ivar: _availableLanguageOptions
@property (retain, nonatomic) NSMutableArray *currentLanguageOptions; // ivar: _currentLanguageOptions
@property (readonly, nonatomic) BOOL hasAncestorIdentifier;
@property (readonly, nonatomic) BOOL hasArtworkData;
@property (nonatomic) BOOL hasArtworkDataHeight;
@property (nonatomic) BOOL hasArtworkDataWidth;
@property (readonly, nonatomic) BOOL hasAssociatedParticipantIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasInfo;
@property (readonly, nonatomic) BOOL hasLyrics;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (readonly, nonatomic) BOOL hasQueueIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *info; // ivar: _info
@property (retain, nonatomic) _MRLyricsItemProtobuf *lyrics; // ivar: _lyrics
@property (retain, nonatomic) _MRContentItemMetadataProtobuf *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier
@property (retain, nonatomic) NSString *queueIdentifier; // ivar: _queueIdentifier
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableLanguageOptionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentLanguageOptionsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionsAtIndex:(NSUInteger)arg0 ;
-(void)addAvailableLanguageOptions:(id)arg0 ;
-(void)addCurrentLanguageOptions:(id)arg0 ;
-(void)addSections:(id)arg0 ;
-(void)clearAvailableLanguageOptions;
-(void)clearCurrentLanguageOptions;
-(void)clearSections;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif