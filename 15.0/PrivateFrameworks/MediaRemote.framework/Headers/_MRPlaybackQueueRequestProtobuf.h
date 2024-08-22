// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRPLAYBACKQUEUEREQUESTPROTOBUF_H
#define _MRPLAYBACKQUEUEREQUESTPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_MRPlaybackQueueContextProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying>

 {
    CGFloat _artworkHeight;
    CGFloat _artworkWidth;
    int _cachingPolicy;
    NSMutableArray *_contentItemIdentifiers;
    _MRPlaybackQueueContextProtobuf *_context;
    NSString *_label;
    int _length;
    int _location;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    BOOL _includeInfo;
    BOOL _includeLanguageOptions;
    BOOL _includeLyrics;
    BOOL _includeMetadata;
    BOOL _includeSections;
    BOOL _isLegacyNowPlayingInfoRequest;
    BOOL _returnContentItemAssetsInUserCompletion;
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