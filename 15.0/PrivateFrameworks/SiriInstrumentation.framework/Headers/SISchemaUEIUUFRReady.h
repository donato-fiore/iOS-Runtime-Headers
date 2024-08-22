// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAUEIUUFRREADY_H
#define SISCHEMAUEIUUFRREADY_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUEIUUFRReady : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *aceCommandClass; // ivar: _aceCommandClass
@property (copy, nonatomic) NSString *aceViewId; // ivar: _aceViewId
@property (nonatomic) BOOL exists; // ivar: _exists
@property (nonatomic) BOOL hasAceCommandClass; // ivar: _hasAceCommandClass
@property (nonatomic) BOOL hasAceViewId; // ivar: _hasAceViewId
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL hasUufrReadySource;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int uufrReadySource; // ivar: _uufrReadySource


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif