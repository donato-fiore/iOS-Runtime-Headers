// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LTSCHEMAERROR_H
#define LTSCHEMAERROR_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface LTSchemaError : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int code; // ivar: _code
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL hasCode;
@property (nonatomic) BOOL hasDomain; // ivar: _hasDomain
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif