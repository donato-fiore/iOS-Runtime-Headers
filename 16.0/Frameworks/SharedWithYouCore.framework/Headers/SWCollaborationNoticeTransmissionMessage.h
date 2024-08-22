// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWCOLLABORATIONNOTICETRANSMISSIONMESSAGE_H
#define SWCOLLABORATIONNOTICETRANSMISSIONMESSAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface SWCollaborationNoticeTransmissionMessage : PBCodable <NSCopying>



@property (nonatomic) CGFloat dateAsTimeIntervalSince1970; // ivar: _dateAsTimeIntervalSince1970
@property (retain, nonatomic) NSString *guidString; // ivar: _guidString
@property (retain, nonatomic) NSData *highlightChangeEvent; // ivar: _highlightChangeEvent
@property (nonatomic) NSInteger highlightChangeEventType; // ivar: _highlightChangeEventType
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