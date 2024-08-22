// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYFULLSYNCREQUESTACK_H
#define SYFULLSYNCREQUESTACK_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SYErrorInfo.h"
#import "SYMessageHeader.h"

@interface SYFullSyncRequestAck : PBCodable <NSCopying>



@property (nonatomic) BOOL accepted; // ivar: _accepted
@property (retain, nonatomic) SYErrorInfo *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasInProgressSyncID;
@property (retain, nonatomic) SYMessageHeader *header; // ivar: _header
@property (retain, nonatomic) NSString *inProgressSyncID; // ivar: _inProgressSyncID
@property (retain, nonatomic) NSString *requestSyncID; // ivar: _requestSyncID


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