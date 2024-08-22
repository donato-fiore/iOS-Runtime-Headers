// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYMESSAGEHEADER_H
#define SYMESSAGEHEADER_H

@class PBCodable;
@protocol NSCopying;


#import "SYPeer.h"
#import "SYVectorClock.h"

@interface SYMessageHeader : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTimeout;
@property (retain, nonatomic) SYPeer *sender; // ivar: _sender
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) SYVectorClock *state; // ivar: _state
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int version; // ivar: _version


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