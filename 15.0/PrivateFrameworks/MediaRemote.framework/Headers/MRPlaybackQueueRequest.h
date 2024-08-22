// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRPLAYBACKQUEUEREQUEST_H
#define MRPLAYBACKQUEUEREQUEST_H

@class NSArray, NSData, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MRPlayerPath.h"
#import "_MRPlaybackQueueRequestProtobuf.h"
#import "MRPlaybackQueueRequest.h"

@interface MRPlaybackQueueRequest : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat artworkHeight; // ivar: _artworkHeight
@property (nonatomic) CGFloat artworkWidth; // ivar: _artworkWidth
@property (nonatomic) unsigned int cachingPolicy; // ivar: _cachingPolicy
@property (readonly, nonatomic) BOOL containsNonDefaultAssets;
@property (copy, nonatomic) NSArray *contentItemIdentifiers; // ivar: _contentItemIdentifiers
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasArtworkHeight; // ivar: _hasArtworkHeight
@property (nonatomic) BOOL hasArtworkWidth; // ivar: _hasArtworkWidth
@property (nonatomic) BOOL hasCachingPolicy; // ivar: _hasCachingPolicy
@property (nonatomic) BOOL hasIncludeInfo; // ivar: _hasIncludeInfo
@property (nonatomic) BOOL hasIncludeLanguageOptions; // ivar: _hasIncludeLanguageOptions
@property (nonatomic) BOOL hasIncludeLyrics; // ivar: _hasIncludeLyrics
@property (nonatomic) BOOL hasIncludeMetadata; // ivar: _hasIncludeMetadata
@property (nonatomic) BOOL hasIncludeSections; // ivar: _hasIncludeSections
@property (nonatomic) BOOL hasLegacyNowPlayingInfoRequest; // ivar: _hasLegacyNowPlayingInfoRequest
@property (nonatomic) BOOL hasLength; // ivar: _hasLength
@property (nonatomic) BOOL hasLocation; // ivar: _hasLocation
@property (readonly, nonatomic) BOOL hasRange;
@property (nonatomic) BOOL hasReturnContentItemAssetsInUserCompletion; // ivar: _hasReturnContentItemAssetsInUserCompletion
@property (readonly, nonatomic) BOOL includeArtwork;
@property (nonatomic) BOOL includeInfo; // ivar: _includeInfo
@property (nonatomic) BOOL includeLanguageOptions; // ivar: _includeLanguageOptions
@property (nonatomic) BOOL includeLyrics; // ivar: _includeLyrics
@property (nonatomic) BOOL includeMetadata; // ivar: _includeMetadata
@property (nonatomic) BOOL includeSections; // ivar: _includeSections
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic, getter=isLegacyNowPlayingInfoRequest) BOOL legacyNowPlayingInfoRequest; // ivar: _legacyNowPlayingInfoRequest
@property (nonatomic) NSInteger length; // ivar: _length
@property (nonatomic) NSInteger location; // ivar: _location
@property (retain, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (readonly, nonatomic) _MRPlaybackQueueRequestProtobuf *protobuf;
@property (readonly, nonatomic) _NSRange range;
@property (readonly, nonatomic) BOOL rangeContainsNowPlayingItem;
@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) BOOL returnContentItemAssetsInUserCompletion; // ivar: _returnContentItemAssetsInUserCompletion
@property (readonly, nonatomic) BOOL shouldRequestItem;
@property (readonly, nonatomic) BOOL shouldRequestItemNotConsideringMetadata;
@property (readonly, nonatomic) MRPlaybackQueueRequest *skeleton;


+(BOOL)supportsSecureCoding;
+(CGFloat)defaultArtworkWidth;
+(CGFloat)defaultArtwortHeight;
+(id)defaultPlaybackQueueRequest;
+(id)defaultPlaybackQueueRequestWithRange:(struct _NSRange )arg0 ;
-(BOOL)exactMatch:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)match:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromTransactionName:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)performRequestForDestination:(id)arg0 completion:(id)arg1 ;


@end


#endif