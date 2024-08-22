// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAUUFRFATALERROR_H
#define SISCHEMAUUFRFATALERROR_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaSiriResponseContext.h"

@interface SISchemaUUFRFatalError : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorDomain; // ivar: _hasErrorDomain
@property (nonatomic) BOOL hasSiriResponseContext; // ivar: _hasSiriResponseContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // ivar: _siriResponseContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif