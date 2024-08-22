// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYSTARTSYNCSESSION_H
#define SYSTARTSYNCSESSION_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "SYMessageHeader.h"

@interface SYStartSyncSession : PBCodable <NSCopying>



@property (nonatomic) BOOL expectsRestartSupport; // ivar: _expectsRestartSupport
@property (nonatomic) BOOL expectsRollbackSupport; // ivar: _expectsRollbackSupport
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) SYMessageHeader *header; // ivar: _header
@property (nonatomic) BOOL isResetSync; // ivar: _isResetSync
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) CGFloat sessionTimeout; // ivar: _sessionTimeout


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif