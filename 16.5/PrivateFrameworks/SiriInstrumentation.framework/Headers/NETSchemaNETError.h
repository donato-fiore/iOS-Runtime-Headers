// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETSCHEMANETERROR_H
#define NETSCHEMANETERROR_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETError : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *description; // ivar: _description
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasDescription; // ivar: _hasDescription
@property (nonatomic) BOOL hasDomain; // ivar: _hasDomain
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDescription;
-(void)deleteDomain;
-(void)deleteErrorCode;
-(void)writeTo:(id)arg0 ;


@end


#endif