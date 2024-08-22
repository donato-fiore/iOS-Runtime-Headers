// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYLOGSESSIONSTATE_H
#define SYLOGSESSIONSTATE_H

@class PBCodable, NSDictionary, NSString, NSMutableArray;
@protocol NSCopying;


#import "SYLogErrorInfo.h"

@interface SYLogSessionState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL canRestart; // ivar: _canRestart
@property (nonatomic) BOOL canRollback; // ivar: _canRollback
@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) NSDictionary *cocoaTransportOptions;
@property (retain, nonatomic) SYLogErrorInfo *error; // ivar: _error
@property (nonatomic) CGFloat fullSessionTimeout; // ivar: _fullSessionTimeout
@property (nonatomic) BOOL hasCanRestart;
@property (nonatomic) BOOL hasCanRollback;
@property (nonatomic) BOOL hasCanceled;
@property (readonly, nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasFullSessionTimeout;
@property (nonatomic) BOOL hasIsReset;
@property (nonatomic) BOOL hasPerMessageTimeout;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isReset; // ivar: _isReset
@property (nonatomic) BOOL isSending; // ivar: _isSending
@property (nonatomic) NSUInteger maxConcurrentMessages; // ivar: _maxConcurrentMessages
@property (retain, nonatomic) NSMutableArray *peers; // ivar: _peers
@property (nonatomic) CGFloat perMessageTimeout; // ivar: _perMessageTimeout
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSMutableArray *transportOptions; // ivar: _transportOptions


+(Class)peerType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)peerAtIndex:(NSUInteger)arg0 ;
-(id)stateAsString:(int)arg0 ;
-(id)transportOptionsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(void)addPeer:(id)arg0 ;
-(void)addTransportOptions:(id)arg0 ;
-(void)clearPeers;
-(void)clearTransportOptions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif