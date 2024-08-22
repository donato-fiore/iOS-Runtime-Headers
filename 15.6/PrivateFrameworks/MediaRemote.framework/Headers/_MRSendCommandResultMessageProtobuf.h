// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRSENDCOMMANDRESULTMESSAGEPROTOBUF_H
#define _MRSENDCOMMANDRESULTMESSAGEPROTOBUF_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "_MRSendCommandResultProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying>

 {
    ? _handlerReturnStatus;
    ? _has;
}


@property (retain, nonatomic) NSString *commandID; // ivar: _commandID
@property (retain, nonatomic) _MRSendCommandResultProtobuf *commandResult; // ivar: _commandResult
@property (readonly, nonatomic) *int handlerReturnStatus;
@property (readonly, nonatomic) NSUInteger handlerReturnStatusCount;
@property (retain, nonatomic) NSMutableArray *handlerReturnStatusDatas; // ivar: _handlerReturnStatusDatas
@property (readonly, nonatomic) BOOL hasCommandID;
@property (readonly, nonatomic) BOOL hasCommandResult;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (nonatomic) BOOL hasSendError;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath
@property (nonatomic) int sendError; // ivar: _sendError


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)handlerReturnStatusAsString:(int)arg0 ;
-(id)handlerReturnStatusDataAtIndex:(NSUInteger)arg0 ;
-(id)sendErrorAsString:(int)arg0 ;
-(int)StringAsHandlerReturnStatus:(id)arg0 ;
-(int)StringAsSendError:(id)arg0 ;
-(int)handlerReturnStatusAtIndex:(NSUInteger)arg0 ;
-(void)addHandlerReturnStatus:(int)arg0 ;
-(void)addHandlerReturnStatusData:(id)arg0 ;
-(void)clearHandlerReturnStatus;
-(void)clearHandlerReturnStatusDatas;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif