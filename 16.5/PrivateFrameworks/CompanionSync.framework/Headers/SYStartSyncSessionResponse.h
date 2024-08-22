// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSTARTSYNCSESSIONRESPONSE_H
#define SYSTARTSYNCSESSIONRESPONSE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "SYErrorInfo.h"
#import "SYMessageHeader.h"

@interface SYStartSyncSessionResponse : PBCodable <NSCopying>



@property (nonatomic) BOOL accepted; // ivar: _accepted
@property (retain, nonatomic) SYErrorInfo *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) SYMessageHeader *header; // ivar: _header
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) BOOL supportsRestart; // ivar: _supportsRestart
@property (nonatomic) BOOL supportsRollback; // ivar: _supportsRollback


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