// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRGAMECONTROLLERMESSAGEPROTOBUF_H
#define _MRGAMECONTROLLERMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRGameControllerButtonsProtobuf.h"
#import "_MRGameControllerDigitizerProtobuf.h"
#import "_MRGameControllerMotionProtobuf.h"

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _MRGameControllerButtonsProtobuf *buttons; // ivar: _buttons
@property (nonatomic) NSUInteger controllerID; // ivar: _controllerID
@property (retain, nonatomic) _MRGameControllerDigitizerProtobuf *digitizer; // ivar: _digitizer
@property (readonly, nonatomic) BOOL hasButtons;
@property (nonatomic) BOOL hasControllerID;
@property (readonly, nonatomic) BOOL hasDigitizer;
@property (readonly, nonatomic) BOOL hasMotion;
@property (retain, nonatomic) _MRGameControllerMotionProtobuf *motion; // ivar: _motion


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