// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRSENDCOMMANDRESULTPROTOBUF_H
#define _MRSENDCOMMANDRESULTPROTOBUF_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRSendCommandResultProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (nonatomic) BOOL hasSendError;
@property (readonly, nonatomic) BOOL hasSendErrorDescription;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath
@property (nonatomic) int sendError; // ivar: _sendError
@property (retain, nonatomic) NSString *sendErrorDescription; // ivar: _sendErrorDescription
@property (retain, nonatomic) NSMutableArray *statuses; // ivar: _statuses


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sendErrorAsString:(int)arg0 ;
-(id)statusesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsSendError:(id)arg0 ;
-(void)addStatuses:(id)arg0 ;
-(void)clearStatuses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif