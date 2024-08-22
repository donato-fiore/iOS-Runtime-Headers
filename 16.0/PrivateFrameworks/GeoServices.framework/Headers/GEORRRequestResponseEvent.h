// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORRREQUESTRESPONSEEVENT_H
#define GEORRREQUESTRESPONSEEVENT_H

@class PBCodable, PBDataReader, NSData, NSString;
@protocol NSCopying;



@interface GEORRRequestResponseEvent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSData *_encoded;
    NSString *_error;
    NSString *_eventId;
    NSUInteger _timestamp;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _eventType;
    int _requestType;
    BOOL _withARPC;
    ? _flags;
}


@property (retain, nonatomic) NSData *encoded;
@property (retain, nonatomic) NSString *error;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasEncoded;
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasEventId;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) BOOL hasWithARPC;
@property (nonatomic) int requestType;
@property (nonatomic) NSUInteger timestamp;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL withARPC;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodeEvent;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)requestTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif