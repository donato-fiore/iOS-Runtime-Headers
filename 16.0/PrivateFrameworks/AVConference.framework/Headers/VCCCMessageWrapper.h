// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCCMESSAGEWRAPPER_H
#define VCCCMESSAGEWRAPPER_H

@class PBCodable;
@protocol NSCopying;


#import "VCCCMessageAcknowledgment.h"
#import "VCCCMessage.h"

@interface VCCCMessageWrapper : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) VCCCMessageAcknowledgment *acknowledgement; // ivar: _acknowledgement
@property (nonatomic) int content; // ivar: _content
@property (readonly, nonatomic) BOOL hasAcknowledgement;
@property (nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) VCCCMessage *message; // ivar: _message


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsContent:(id)arg0 ;
-(void)clearOneofValuesForContent;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif