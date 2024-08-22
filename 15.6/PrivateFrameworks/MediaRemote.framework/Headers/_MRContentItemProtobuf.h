// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRCONTENTITEMPROTOBUF_H
#define _MRCONTENTITEMPROTOBUF_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "_MRLyricsItemProtobuf.h"
#import "_MRContentItemMetadataProtobuf.h"

@interface _MRContentItemProtobuf : PBCodable <NSCopying>

 {
    NSString *_ancestorIdentifier;
    NSData *_artworkData;
    int _artworkDataHeight;
    int _artworkDataWidth;
    NSString *_associatedParticipantIdentifier;
    NSMutableArray *_availableLanguageOptions;
    NSMutableArray *_currentLanguageOptions;
    NSString *_identifier;
    NSString *_info;
    _MRLyricsItemProtobuf *_lyrics;
    _MRContentItemMetadataProtobuf *_metadata;
    NSString *_parentIdentifier;
    NSString *_queueIdentifier;
    NSString *_requestIdentifier;
    NSMutableArray *_sections;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif