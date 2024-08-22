// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRPLAYBACKQUEUEPROTOBUF_H
#define _MRPLAYBACKQUEUEPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_MRPlaybackQueueContextProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *contentItems; // ivar: _contentItems
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context; // ivar: _context
@property (readonly, nonatomic) BOOL hasContext;
@property (nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasQueueIdentifier;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (readonly, nonatomic) BOOL hasResolvedPlayerPath;
@property (nonatomic) BOOL hasSendingPlaybackQueueTransaction;
@property (nonatomic) int location; // ivar: _location
@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants
@property (retain, nonatomic) NSString *queueIdentifier; // ivar: _queueIdentifier
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath; // ivar: _resolvedPlayerPath
@property (nonatomic) BOOL sendingPlaybackQueueTransaction; // ivar: _sendingPlaybackQueueTransaction


+(Class)contentItemType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentItemAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(void)addContentItem:(id)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearContentItems;
-(void)clearParticipants;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif