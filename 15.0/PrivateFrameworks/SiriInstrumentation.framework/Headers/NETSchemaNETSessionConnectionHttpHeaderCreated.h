// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETSCHEMANETSESSIONCONNECTIONHTTPHEADERCREATED_H
#define NETSCHEMANETSESSIONCONNECTIONHTTPHEADERCREATED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETSessionConnectionHttpHeaderCreated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *aceHost; // ivar: _aceHost
@property (nonatomic) BOOL hasAceHost; // ivar: _hasAceHost
@property (nonatomic) BOOL hasUserAgent; // ivar: _hasUserAgent
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *userAgent; // ivar: _userAgent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif