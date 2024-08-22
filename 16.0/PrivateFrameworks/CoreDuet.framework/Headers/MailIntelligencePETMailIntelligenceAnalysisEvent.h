// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAILINTELLIGENCEPETMAILINTELLIGENCEANALYSISEVENT_H
#define MAILINTELLIGENCEPETMAILINTELLIGENCEANALYSISEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "MailIntelligencePETContactEvents.h"

@interface MailIntelligencePETMailIntelligenceAnalysisEvent : PBCodable <NSCopying>



@property (nonatomic) int batch; // ivar: _batch
@property (retain, nonatomic) NSString *collectionId; // ivar: _collectionId
@property (retain, nonatomic) MailIntelligencePETContactEvents *contactEvents; // ivar: _contactEvents
@property (nonatomic) NSUInteger mailIntelligenceUserId; // ivar: _mailIntelligenceUserId
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId


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