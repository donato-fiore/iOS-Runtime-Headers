// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRSENDVIRTUALTOUCHEVENTMESSAGEPROTOBUF_H
#define _MRSENDVIRTUALTOUCHEVENTMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRVirtualTouchEventProtobuf.h"

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _MRVirtualTouchEventProtobuf *event; // ivar: _event
@property (readonly, nonatomic) BOOL hasEvent;
@property (nonatomic) BOOL hasVirtualDeviceID;
@property (nonatomic) NSUInteger virtualDeviceID; // ivar: _virtualDeviceID


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