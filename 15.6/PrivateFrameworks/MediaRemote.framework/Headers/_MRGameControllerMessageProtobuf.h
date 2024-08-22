// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRGAMECONTROLLERMESSAGEPROTOBUF_H
#define _MRGAMECONTROLLERMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRGameControllerButtonsProtobuf.h"
#import "_MRGameControllerDigitizerProtobuf.h"
#import "_MRGameControllerMotionProtobuf.h"

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying>

 {
    NSUInteger _controllerID;
    _MRGameControllerButtonsProtobuf *_buttons;
    _MRGameControllerDigitizerProtobuf *_digitizer;
    _MRGameControllerMotionProtobuf *_motion;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif