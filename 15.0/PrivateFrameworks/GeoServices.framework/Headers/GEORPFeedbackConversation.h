// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKCONVERSATION_H
#define GEORPFEEDBACKCONVERSATION_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEORPFeedbackConversation : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_messages;
}


@property (retain, nonatomic) NSMutableArray *messages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)messageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)messageAtIndex:(NSUInteger)arg0 ;
-(void)addMessage:(id)arg0 ;
-(void)clearMessages;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif