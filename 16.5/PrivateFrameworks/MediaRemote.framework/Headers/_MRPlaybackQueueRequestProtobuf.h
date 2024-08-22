// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRPLAYBACKQUEUEREQUESTPROTOBUF_H
#define _MRPLAYBACKQUEUEREQUESTPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_MRPlaybackQueueContextProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat artworkHeight; // ivar: _artworkHeight
@property (nonatomic) CGFloat artworkWidth; // ivar: _artworkWidth
@property (nonatomic) int cachingPolicy; // ivar: _cachingPolicy
@property (retain, nonatomic) NSMutableArray *contentItemIdentifiers; // ivar: _contentItemIdentifiers
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context; // ivar: _context
@property (nonatomic) BOOL hasArtworkHeight;
@property (nonatomic) BOOL hasArtworkWidth;
@property (nonatomic) BOOL hasCachingPolicy;
@property (readonly, nonatomic) BOOL hasContext;
@property (nonatomic) BOOL hasIncludeInfo;
@property (nonatomic) BOOL hasIncludeLanguageOptions;
@property (nonatomic) BOOL hasIncludeLyrics;
@property (nonatomic) BOOL hasIncludeMetadata;
@property (nonatomic) BOOL hasIncludeParticipants;
@property (nonatomic) BOOL hasIncludeSections;
@property (nonatomic) BOOL hasIsLegacyNowPlayingInfoRequest;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (nonatomic) BOOL hasReturnContentItemAssetsInUserCompletion;
@property (nonatomic) BOOL includeInfo; // ivar: _includeInfo
@property (nonatomic) BOOL includeLanguageOptions; // ivar: _includeLanguageOptions
@property (nonatomic) BOOL includeLyrics; // ivar: _includeLyrics
@property (nonatomic) BOOL includeMetadata; // ivar: _includeMetadata
@property (nonatomic) BOOL includeParticipants; // ivar: _includeParticipants
@property (nonatomic) BOOL includeSections; // ivar: _includeSections
@property (nonatomic) BOOL isLegacyNowPlayingInfoRequest; // ivar: _isLegacyNowPlayingInfoRequest
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int length; // ivar: _length
@property (nonatomic) int location; // ivar: _location
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (nonatomic) BOOL returnContentItemAssetsInUserCompletion; // ivar: _returnContentItemAssetsInUserCompletion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentItemIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContentItemIdentifiers:(id)arg0 ;
-(void)clearContentItemIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif