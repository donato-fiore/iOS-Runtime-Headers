// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRILOGEVENT_H
#define TRILOGEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "TRILogContext.h"
#import "TRIDenormalizedEvent.h"

@interface TRILogEvent : PBCodable <NSCopying>



@property (retain, nonatomic) TRILogContext *context; // ivar: _context
@property (retain, nonatomic) TRIDenormalizedEvent *denormalizedEvent; // ivar: _denormalizedEvent
@property (readonly, nonatomic) BOOL hasContext;
@property (readonly, nonatomic) BOOL hasDenormalizedEvent;
@property (readonly, nonatomic) BOOL hasLogEventId;
@property (retain, nonatomic) NSString *logEventId; // ivar: _logEventId


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