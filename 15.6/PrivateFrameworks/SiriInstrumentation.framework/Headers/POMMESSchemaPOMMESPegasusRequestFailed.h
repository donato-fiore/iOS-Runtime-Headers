// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POMMESSCHEMAPOMMESPEGASUSREQUESTFAILED_H
#define POMMESSCHEMAPOMMESPEGASUSREQUESTFAILED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESPegasusRequestArguments.h"

@interface POMMESSchemaPOMMESPegasusRequestFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasRequestArguments; // ivar: _hasRequestArguments
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int reason; // ivar: _reason
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestArguments *requestArguments; // ivar: _requestArguments


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteReason;
-(void)deleteRequestArguments;
-(void)writeTo:(id)arg0 ;


@end


#endif