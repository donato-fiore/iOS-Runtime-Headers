// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POMMESSCHEMAPOMMESPEGASUSKITNETWORKTIMINGDATA_H
#define POMMESSCHEMAPOMMESPEGASUSKITNETWORKTIMINGDATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESPegasusKitNetworkTimingData : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasRequestEndOffsetInMS;
@property (nonatomic) BOOL hasRequestStartOffsetInMS;
@property (nonatomic) BOOL hasResponseEndOffsetInMS;
@property (nonatomic) BOOL hasResponseStartOffsetInMS;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int requestEndOffsetInMS; // ivar: _requestEndOffsetInMS
@property (nonatomic) unsigned int requestStartOffsetInMS; // ivar: _requestStartOffsetInMS
@property (nonatomic) unsigned int responseEndOffsetInMS; // ivar: _responseEndOffsetInMS
@property (nonatomic) unsigned int responseStartOffsetInMS; // ivar: _responseStartOffsetInMS


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRequestEndOffsetInMS;
-(void)deleteRequestStartOffsetInMS;
-(void)deleteResponseEndOffsetInMS;
-(void)deleteResponseStartOffsetInMS;
-(void)writeTo:(id)arg0 ;


@end


#endif