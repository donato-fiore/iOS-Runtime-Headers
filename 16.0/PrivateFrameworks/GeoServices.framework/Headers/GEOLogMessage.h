// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMESSAGE_H
#define GEOLOGMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMessage : PBCodable <NSCopying>

 {
    NSMutableArray *_logMsgEvents;
    unsigned int _groupRetryCount;
    int _logMessageType;
    ? _flags;
}


@property (nonatomic) unsigned int groupRetryCount;
@property (nonatomic) BOOL hasGroupRetryCount;
@property (nonatomic) BOOL hasLogMessageType;
@property (nonatomic) int logMessageType;
@property (retain, nonatomic) NSMutableArray *logMsgEvents;


+(BOOL)isValid:(id)arg0 ;
+(Class)logMsgEventType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)logMessageTypeAsString:(int)arg0 ;
-(id)logMsgEventAtIndex:(NSUInteger)arg0 ;
-(int)StringAsLogMessageType:(id)arg0 ;
-(void)addLogMsgEvent:(id)arg0 ;
-(void)clearLogMsgEvents;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif