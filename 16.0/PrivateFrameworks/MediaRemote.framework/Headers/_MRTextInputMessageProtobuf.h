// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRTEXTINPUTMESSAGEPROTOBUF_H
#define _MRTEXTINPUTMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int actionType; // ivar: _actionType
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsActionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif