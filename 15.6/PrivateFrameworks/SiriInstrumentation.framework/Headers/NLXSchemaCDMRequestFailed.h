// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMREQUESTFAILED_H
#define NLXSCHEMACDMREQUESTFAILED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMRequestFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int code; // ivar: _code
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasOriginalCode;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int originalCode; // ivar: _originalCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCode;
-(void)deleteErrorCode;
-(void)deleteOriginalCode;
-(void)writeTo:(id)arg0 ;


@end


#endif