// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBSESSIONBATCH_H
#define NTPBSESSIONBATCH_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;


#import "NTPBSession.h"

@interface NTPBSessionBatch : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasSession;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (retain, nonatomic) NTPBSession *session; // ivar: _session


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearEvents;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif