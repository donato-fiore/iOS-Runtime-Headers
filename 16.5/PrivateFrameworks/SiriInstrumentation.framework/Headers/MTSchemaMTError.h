// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSCHEMAMTERROR_H
#define MTSCHEMAMTERROR_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MTSchemaMTError : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (copy, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorDomain; // ivar: _hasErrorDomain
@property (nonatomic) BOOL hasErrorMessage; // ivar: _hasErrorMessage
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
-(void)deleteErrorMessage;
-(void)writeTo:(id)arg0 ;


@end


#endif