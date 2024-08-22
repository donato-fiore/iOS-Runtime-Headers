// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POMMESSCHEMAPOMMESREQUESTENDED_H
#define POMMESSCHEMAPOMMESREQUESTENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESRequestResult.h"

@interface POMMESSchemaPOMMESRequestEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsHandledByPreflight;
@property (nonatomic) BOOL hasResult; // ivar: _hasResult
@property (nonatomic) BOOL isHandledByPreflight; // ivar: _isHandledByPreflight
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestResult *result; // ivar: _result


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsHandledByPreflight;
-(void)deleteResult;
-(void)writeTo:(id)arg0 ;


@end


#endif