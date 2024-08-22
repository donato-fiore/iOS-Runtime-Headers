// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRPLAYBACKSESSIONMIGRATERESPONSEMESSAGEPROTOBUF_H
#define _MRPLAYBACKSESSIONMIGRATERESPONSEMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRPlaybackSessionMigrateRequestProtobuf.h"

@interface _MRPlaybackSessionMigrateResponseMessageProtobuf : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *request; // ivar: _request


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