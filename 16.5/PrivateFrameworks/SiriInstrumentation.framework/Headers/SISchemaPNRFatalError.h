// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAPNRFATALERROR_H
#define SISCHEMAPNRFATALERROR_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaPNRFatalErrorInfo.h"

@interface SISchemaPNRFatalError : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *error; // ivar: _error
@property (nonatomic) BOOL hasError; // ivar: _hasError
@property (nonatomic) BOOL hasUnderUnderlyingError; // ivar: _hasUnderUnderlyingError
@property (nonatomic) BOOL hasUnderlyingError; // ivar: _hasUnderlyingError
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *underUnderlyingError; // ivar: _underUnderlyingError
@property (retain, nonatomic) SISchemaPNRFatalErrorInfo *underlyingError; // ivar: _underlyingError


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteError;
-(void)deleteUnderUnderlyingError;
-(void)deleteUnderlyingError;
-(void)writeTo:(id)arg0 ;


@end


#endif