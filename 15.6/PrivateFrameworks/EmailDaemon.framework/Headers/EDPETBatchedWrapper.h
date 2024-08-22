// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPETBATCHEDWRAPPER_H
#define EDPETBATCHEDWRAPPER_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "EDPETQuotaReachedEvent.h"
#import "EDPETSubmittedEvent.h"

@interface EDPETBatchedWrapper : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasQuotaEvent;
@property (readonly, nonatomic) BOOL hasRawData;
@property (readonly, nonatomic) BOOL hasSubmittedEvent;
@property (retain, nonatomic) EDPETQuotaReachedEvent *quotaEvent; // ivar: _quotaEvent
@property (retain, nonatomic) NSData *rawData; // ivar: _rawData
@property (retain, nonatomic) EDPETSubmittedEvent *submittedEvent; // ivar: _submittedEvent


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