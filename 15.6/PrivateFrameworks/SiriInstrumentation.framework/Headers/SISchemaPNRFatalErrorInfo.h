// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAPNRFATALERRORINFO_H
#define SISCHEMAPNRFATALERRORINFO_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaPNRFatalErrorInfo : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode; // ivar: _hasErrorCode
@property (nonatomic) BOOL hasErrorDomain; // ivar: _hasErrorDomain
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteErrorCode;
-(void)deleteErrorDomain;
-(void)writeTo:(id)arg0 ;


@end


#endif