// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NMRSENDCOMMANDMESSAGEPROTOBUF_H
#define _NMRSENDCOMMANDMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_NMRCommandOptionsProtobuf.h"

@interface _NMRSendCommandMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) int command; // ivar: _command
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasCommand;
@property (readonly, nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) _NMRCommandOptionsProtobuf *options; // ivar: _options
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)commandAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCommand:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif